#include <iostream>
#include <string>

using namespace std;

const string LIETUVIU_ABECELE = "ABCDEFGHIYJKLMNOPRSTUVZ";

string kartotiRakta(const string &raktas, size_t ilgis);
string sifruotiSuAbecele(const string &tekstas, const string &raktas);
string desifruotiSuAbecele(const string &sifras, const string &raktas);
string sifruotiSuASCII(const string &tekstas, const string &raktas);
string desifruotiSuASCII(const string &sifras, const string &raktas);

int main() {
    int pasirinkimas;
    string tekstas, raktas, rezultatas;

    do {

        cout << "\nVigenere Sifro Meniu:\n";
        cout << "1. Sifruoti/DeSifruoti naudojant lietuviu abecele\n";
        cout << "2. Sifruoti/Desifruoti naudojant ASCII kodus\n";
        cout << "3. Iseiti\n";
        cout << "Pasirinkite: ";
        cin >> pasirinkimas;
        cin.ignore();

        if (pasirinkimas == 1 || pasirinkimas == 2) {
            cout << "Iveskite teksta: ";
            getline(cin, tekstas);
            cout << "Iveskite rakta: ";
            getline(cin, raktas);

            if (pasirinkimas == 1) {
                cout << "\n-- Naudojant lietuviu abecele --\n";
                rezultatas = sifruotiSuAbecele(tekstas, raktas);
                cout << "Uzsifruotas tekstas: " << rezultatas << endl;
                rezultatas = desifruotiSuAbecele(rezultatas, raktas);
                cout << "Issifruotas tekstas: " << rezultatas << endl;
            } else if (pasirinkimas == 2) {
                cout << "\n-- Naudojant ASCII koduote --\n";
                rezultatas = sifruotiSuASCII(tekstas, raktas);
                cout << "Uzsifruotas tekstas: ";
                for (char c : rezultatas) {
                    cout << (int)c << " ";
                }
                cout << endl;
                rezultatas = desifruotiSuASCII(rezultatas, raktas);
                cout << "Issifruotas tekstas: " << rezultatas << endl;
            }
        } else if (pasirinkimas != 3) {
            cout << "Neteisingas pasirinkimas. Bandykite dar karta.\n";
        }
    } while (pasirinkimas != 3);

    cout << "Programa uzsidare.\n";
    return 0;
}


string kartotiRakta(const string &raktas, size_t ilgis) {
    string pakartotasRaktas;
    size_t raktasIlgis = raktas.length();

    for (size_t i = 0; i < ilgis; i++) {
        pakartotasRaktas += raktas[i % raktasIlgis];
    }
    return pakartotasRaktas;
}


string sifruotiSuAbecele(const string &tekstas, const string &raktas) {
    string pakartotasRaktas = kartotiRakta(raktas, tekstas.length());
    string sifras;

    for (size_t i = 0; i < tekstas.length(); i++) {
        size_t tekstasIndeksas = LIETUVIU_ABECELE.find(tekstas[i]);
        size_t raktasIndeksas = LIETUVIU_ABECELE.find(raktas[i]);

        if (tekstasIndeksas != string::npos && raktasIndeksas != string::npos) {
            size_t sifroIndeksas = (tekstasIndeksas + raktasIndeksas) % LIETUVIU_ABECELE.size();
            sifras += LIETUVIU_ABECELE[sifroIndeksas];
        } else {
            sifras += tekstas[i];
        }
    }
    return sifras;
}


string desifruotiSuAbecele(const string &sifras, const string &raktas) {
    string pakartotasRaktas = kartotiRakta(raktas, sifras.length());
    string tekstas;

    for (size_t i = 0; i < sifras.length(); i++) {
        size_t sifroIndeksas = LIETUVIU_ABECELE.find(sifras[i]);
        size_t raktasIndeksas = LIETUVIU_ABECELE.find(raktas[i]);

        if (sifroIndeksas != string::npos && raktasIndeksas != string::npos) {
            size_t tekstasIndeksas = (sifroIndeksas + LIETUVIU_ABECELE.size() - raktasIndeksas) % LIETUVIU_ABECELE.size();
            tekstas += LIETUVIU_ABECELE[tekstasIndeksas];
        } else {
            tekstas += sifras[i];
        }
    }
    return tekstas;
}


string sifruotiSuASCII(const string &tekstas, const string &raktas) {
    string pakartotasRaktas = kartotiRakta(raktas, tekstas.length());
    string sifras;

    for (size_t i = 0; i < tekstas.length(); i++) {
        char uzsifruotasSimbolis = (tekstas[i] + pakartotasRaktas[i]) % 128;
        sifras += uzsifruotasSimbolis;
        cout << sifras << endl;

    }
    return sifras;
}


string desifruotiSuASCII(const string &sifras, const string &raktas) {
    string pakartotasRaktas = kartotiRakta(raktas, sifras.length());
    string tekstas;

    for (size_t i = 0; i < sifras.length(); i++) {
        char issifruotasSimbolis = (sifras[i] - pakartotasRaktas[i] + 128) % 128;
        tekstas += issifruotasSimbolis;
    }
    return tekstas;
}
