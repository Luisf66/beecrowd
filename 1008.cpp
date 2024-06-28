#include "iostream"
#include "iomanip"
using namespace std;

int main()
{
    int numero_funcionario = 0;
    int numero_horas = 0;
    double valor_hora = 0;

    cin >> numero_funcionario;
    cin >> numero_horas;
    cin >> valor_hora;

    cout << "NUMBER = " << numero_funcionario << endl;
    cout << fixed << setprecision(2) << "SALARY = U$ " << numero_horas * valor_hora << endl;

    return 0;
};