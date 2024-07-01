/*
Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. 
As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.
*/

#include "iostream"

using namespace std;

int main()
{
    int valor = 0;
    int notas100 = 0;
    int notas50 = 0;
    int notas20 = 0;
    int notas10 = 0;
    int notas5 = 0;
    int notas2 = 0;
    int notas1 = 0;

    cin >> valor;
    cout << valor << endl;

    while (valor > 0) {
        if (valor >= 100) {
            valor -= 100;
            notas100++;
        } else if (valor >= 50) {
            valor -= 50;
            notas50++;
        } else if (valor >= 20) {
            valor -= 20;
            notas20++;
        } else if (valor >= 10) {
            valor -= 10;
            notas10++;
        } else if (valor >= 5) {
            valor -= 5;
            notas5++;
        } else if (valor >= 2) {
            valor -= 2;
            notas2++;
        } else if (valor >= 1) {
            valor -= 1;
            notas1++;
        }
    }

    cout << notas100 << " nota(s) de R$ 100,00" << endl;
    cout << notas50 << " nota(s) de R$ 50,00" << endl;
    cout << notas20 << " nota(s) de R$ 20,00" << endl;
    cout << notas10 << " nota(s) de R$ 10,00" << endl;
    cout << notas5 << " nota(s) de R$ 5,00" << endl;  
    cout << notas2 << " nota(s) de R$ 2,00" << endl;
    cout << notas1 << " nota(s) de R$ 1,00" << endl;


    return 0;
}