#include <iostream>
#include <string>
using namespace std;

int main() {
    //prima uzduotis
    cout << "-----------1 uzduotis---------" << endl;
    string vardas = "Nojus";
    string pavarde = "Semeklis";
    string kursas = "Strukturinis programavimas";
    string studijos ="Programu sistemos";
    int amzius, grupe;

    amzius = 19;
    grupe = 2;

    cout << "Studento vardas:" << vardas << endl;
    cout << "Studento pavarde:" << pavarde << endl;
    cout << "Student amzius:" << amzius << endl;
    cout << "Studento grupe:" << grupe << endl;
    cout << "Studento kursas:" << kursas << endl;
    cout << "Studento studijos:" << studijos << endl;

    //antra uzduotis
    cout << "----------2 uzduotis---------" << endl;
    string pavadinimas = "Arsenalas";
    string savininkas = "E. Stanley Kroenke";
    string arena = "Emirates stadium";
    int Metai = 1886;
    int Skaicius = 60704;

    cout << "Klubo pavadinimas:" << pavadinimas << endl;
    cout << "Klubo savininkas:" << savininkas << endl;
    cout << "Klubo stadionas:" << arena << endl;
    cout << "Klubo ikurimo metai:" << Metai << endl;
    cout << "Klubo vietu skaicius:" << Skaicius << endl;

    cout << "----------3 uzduotis---------" << endl;

    string marke = "NISSAN";
    string modelis = "GTR R35";
    string spalva = "juodos";
    int Pagaminimometai = 2009;
    double litrazas = 3.5;

    cout << "Automobilis" << " " << marke << " " <<  modelis << " " << "yra pagamintas" << " " << Pagaminimometai << " " << "metais." << " " << "Jo motoras" << " " << litrazas << " " << "litrazo." << " " << "Automobilis yra" << " " << spalva << " " << "spalvos." << endl;
    return 0;
}
