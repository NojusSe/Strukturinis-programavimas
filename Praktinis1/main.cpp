#include <iostream>
#include <iomanip>

using namespace std;

const double GBP_Bendras = 0.8593;
const double GBP_Pirkti = 0.8450;
const double GBP_Parduoti = 0.9060;

const double USD_Bendras = 1.0713;
const double USD_Pirkti = 1.0547;
const double USD_Parduoti = 1.1309;

const double INR_Bendras = 88.8260;
const double INR_Pirkti = 85.2614;
const double INR_Parduoti = 92.8334;

void PalygintiValiuta(string valiuta) {
    double kaina = 0.0;

    if (valiuta == "GBP") kaina = GBP_Bendras;
    else if (valiuta == "USD") kaina = USD_Bendras;
    else if (valiuta == "INR") kaina = INR_Bendras;
    else {
        cout << "Netinkama valiuta" << endl;
        return;
    }
    cout << "1 EUR = " << setprecision(3) << kaina << " " << valiuta << endl;
}

void PirktiValiuta(string valiuta, double kiekis) {
    double kaina = 0.0;

    if (valiuta == "GBP") kaina = GBP_Pirkti;
    else if (valiuta == "USD") kaina = USD_Pirkti;
    else if (valiuta == "INR") kaina = INR_Pirkti;
    else {
        cout << "Netinkama valiuta" << endl;
        return;
    }
    double rezultatas = kiekis * kaina;
    cout << "Jus gausite " << fixed << setprecision(2) << rezultatas << " " << valiuta << " uz " << kiekis << " EUR" << endl;
}

void ParduotiValiuta(string valiuta, double kiekis) {
    double kaina = 0.0;

    if (valiuta == "GBP") kaina = GBP_Parduoti;
    else if (valiuta == "USD") kaina = USD_Parduoti;
    else if (valiuta == "INR") kaina = INR_Parduoti;
    else {
        cout << "Netinkama valiuta" << endl;
        return;
    }
    double rezultatas = kiekis / kaina;
    cout << "Jus gausite " << fixed << setprecision(2) << rezultatas << " EUR uz " << kiekis << " " << valiuta << endl;
}

int main()
{
    int pasirinkimas;
    string valiuta;
    double kiekis;
    while(pasirinkimas != 4) {
    cout << "Valiutu keitimas" << endl;
    cout << "Pasirinkite veiksma kuri norite daryti:" << endl;
    cout << "1. Palyginti valiuta" << endl;
    cout << "2. Pirkti valiuta" << endl;
    cout << "3. Parduoti valiuta" << endl;
    cout << "4. Isejimas is programos" << endl;
    cin >> pasirinkimas;

    switch(pasirinkimas) {
        case 1:
            cout << "Iveskite valiuta (GBP, USD, INR): ";
        cin >> valiuta;
        PalygintiValiuta(valiuta);
        break;
        case 2:
            cout << "Iveskite valiuta (GBP, USD, INR): ";
        cin >> valiuta;
        cout << "Iveskite kieki EUR valiutos: ";
        cin >> kiekis;
        PirktiValiuta(valiuta, kiekis);
        break;
        case 3:
            cout << "Iveskite valiuta (GBP, USD, INR): ";
        cin >> valiuta;
        cout << "Iveskite kieki parduodamos valiutos: ";
        cin >> kiekis;
        ParduotiValiuta(valiuta, kiekis);
        break;
        case 4:
            cout << "Isejote is programos" << endl;
        break;
        default:
            cout << "Tokio pasirinkimo nera. Bandykite dar karta" << endl;
        return 0;
    }
    }
}