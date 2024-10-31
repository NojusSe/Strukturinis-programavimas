#include <iostream>
#include <cstdlib>

using namespace std;

// 1. uzduotis
bool arBalse(char raide) {
    raide = tolower(raide);
    return (raide == 'a' || raide == 'e' || raide == 'i' || raide == 'o' || raide == 'u');
}

// 2. uzduotis
int didziausiasBendrasDaliklis(int skaicius1, int skaicius2) {
    while (skaicius2 != 0) {
        int laikinas = skaicius2;
        skaicius2 = skaicius1 % skaicius2;
        skaicius1 = laikinas;
    }
    return skaicius1;
}

// 3.uzduotis
void zaidimas() {
    int atsitiktinisSkaicius = rand() % 100 + 1;
    int spejimas;

    cout << "Spekite skaiciu nuo 1 iki 100: ";
    while (true) {
        cin >> spejimas;
        if (spejimas > atsitiktinisSkaicius) {
            cout << "Per didelis. Iveskite nauja skaiciu:";
        } else if (spejimas < atsitiktinisSkaicius) {
            cout << "Per mažas. Iveskite nauja skaiciu: ";
        } else {
            cout << "Teisingas skaicius\n";
            break;
        }
    }
}

// 4. uzduotis
void fizzBuzz(int n) {
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            cout << "FizzBuzz ";
        } else if (i % 3 == 0) {
            cout << "Fizz ";
        } else if (i % 5 == 0) {
            cout << "Buzz ";
        } else {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    int pasirinkimas;
    bool veikia = true;

    while (veikia) {
        cout << "\nPasirinkite funkcija:\n";
        cout << "1 - Patikrinti, ar raide yra balse\n";
        cout << "2 - Rasti didziausia bendra dalikli\n";
        cout << "3 - Zaidimas speti skaiciu\n";
        cout << "4 - FizzBuzz\n";
        cout << "0 - Uzdaryti programa\n";
        cout << "Pasirinkimas: ";
        cin >> pasirinkimas;

        switch (pasirinkimas) {
            case 1: {
                char raide;
                cout << "Iveskite raide: ";
                cin >> raide;
                if (arBalse(raide)) {
                    cout << "Ivesta raide yra balse\n";
                } else {
                    cout << "Ivesta raide nera balse\n";
                }
                break;
            }
            case 2: {
                int skaicius1, skaicius2;
                cout << "Iveskite pirmaji skaiciu: ";
                cin >> skaicius1;
                cout << "Iveskite antraji skaiciu: ";
                cin >> skaicius2;
                cout << "Didziausias bendras daliklis yra: " << didziausiasBendrasDaliklis(skaicius1, skaicius2) << endl;
                break;
            }
            case 3:
                zaidimas();
                break;
            case 4: {
                int n;
                cout << "Iveskite skaiciu n: ";
                cin >> n;
                fizzBuzz(n);
                break;
            }
            case 0:
                veikia = false;
                cout << "Uzsidare programa\n";
                break;
            default:
                cout << "Neteisingas pasirinkimas\n";
        }
    }

    return 0;
}
