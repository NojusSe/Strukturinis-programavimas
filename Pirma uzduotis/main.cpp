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

    //trecia uzduotis
    cout << "----------3 uzduotis---------" << endl;

    string marke = "NISSAN";
    string modelis = "GTR R35";
    string spalva = "juodos";
    int Pagaminimometai = 2009;
    double litrazas = 3.5;

    cout << "Automobilis" << " " << marke << " " <<  modelis << " " << "yra pagamintas" << " " << Pagaminimometai << " " << "metais." << " " << "Jo motoras" << " " << litrazas << " " << "litrazo." << " " << "Automobilis yra" << " " << spalva << " " << "spalvos." << endl;

    //ketvirta uzduotis
    cout << "----------4 uzduotis---------" << endl;

    int a=13, b=5;
    double c=17.5;
    cout << a + b - c << endl;
    cout << 15 / 2 + c << endl;
    cout << a / static_cast<double>(b) + 2 * c << endl;
    cout << 14 % 3 + 6.3 + b / a << endl;
    cout << static_cast<int>(c) % 5 + a - b << endl;
    cout << 13.5 / 2 + 4.0 * 3.5 + 18 << endl;

    //penkta uzduotis
    cout << "----------5 uzduotis---------" << endl;

    double v;
    int n,pirmS,antrasS,treciasS,ketvirtasS,penktasS;
    cout << "Iveskite kiek skaiciu yra:" << endl;
    cin >> n;
    cout << "Iveskite skaicius:" << endl;
    cin >> pirmS >> antrasS >> treciasS >> ketvirtasS >> penktasS;
    v=(pirmS+antrasS+treciasS+ketvirtasS+penktasS)/n;
    cout << "Vidurkis:" << endl;
    cout << v << endl;

    //sesta uzduotis
    cout << "----------6 uzduotis---------" << endl;
    int d,s;
    int A,B;
    cout << "Iveskite dvizenkli:" << endl;
    cin >> d;
    A=d/10%10;
    B=d%10;
    s=A+B;
    cout << "Dvizenklio skaiciaus suma:" << endl;
    cout << s << endl;
    return 0;
}
