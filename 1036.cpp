#include "iostream"
#include "iomanip"
#include "cmath"

using namespace std;

int main()
{
    double valorA = 0.0;
    double valorB = 0.0;
    double valorC = 0.0;
    double positivo = 0.0;
    double negativo = 0.0;

    cin >> valorA;
    cin >> valorB;
    cin >> valorC;

    positivo = (-valorB + sqrt((valorB * valorB) - 4 * valorA * valorC)) / (2 * valorA);
    negativo = (-valorB - sqrt((valorB * valorB) - 4 * valorA * valorC)) / (2 * valorA);

    if ( isnan(positivo) || isnan(negativo))
    {
        cout << "Impossivel calcular" << endl;
    }
    else
    {
        cout << fixed << setprecision(5) << "R1 = " << positivo << endl;
        cout << fixed << setprecision(5) << "R2 = " << negativo << endl;
    }
    return 0;
}