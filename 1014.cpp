/*
O arquivo de entrada contém dois valores: um valor inteiro X representando a distância total percorrida (em Km),
e um valor real Y representando o total de combustível gasto, com um dígito após o ponto decimal.
*/

#include "iostream"
#include "iomanip"

using namespace std;

int main()
{
    int x = 0;
    double y = 0;

    cin >> x;
    cin >> y;

    cout << fixed << setprecision(3) << x/y << " km/l" << endl;
    return 0; 
}