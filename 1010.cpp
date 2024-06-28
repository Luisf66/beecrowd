#include "iostream"
#include "iomanip"

using namespace std;

int main()
{
    int cod_peca1 = 0;
    int num_peca1 = 0;
    double valor_peca1 = 0.0;

    int cod_peca2 = 0;
    int num_peca2 = 0;
    double valor_peca2 = 0.0;

    cin >> cod_peca1 >> num_peca1 >> valor_peca1;
    cin >> cod_peca2 >> num_peca2 >> valor_peca2;

    cout << fixed << setprecision(2) << "VALOR A PAGAR: R$ " << (num_peca1 * valor_peca1) + (num_peca2 * valor_peca2) << endl;

    return 0;
}