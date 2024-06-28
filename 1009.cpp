#include "iostream"
#include "iomanip"

using namespace std;

int main() 
{
    string nome_vendedor;
    double salario = 0.0;
    double vendas = 0.0;

    cin >> nome_vendedor;
    cin >> salario;
    cin >> vendas;


    cout << fixed << setprecision(2) << "TOTAL = R$ " << salario + (( 15 * vendas) / 100) << endl;
    return 0;
}