#include <iostream>
#include <iomanip>

using namespace std;

int SuskaiciuotiPerimetra(int krastine)
{
    int perimetras = 0;
    perimetras = 4*krastine;
    return perimetras;
}
void SuskaiciuotiPlota(int krastine)
{
    double plotas = 0;
    plotas = krastine*krastine;
}
int main()
{
    int krastine;
    cout << "Irasykite krastine:" << endl;
    cin >> krastine;
    cout << "kvadrato perimetras:" << endl;
    SuskaiciuotiPerimetra(krastine);
    cout << "kvadrato plotas: " << endl;
    SuskaiciuotiPlota(krastine);
return 0;
}