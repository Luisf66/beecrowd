#include "iostream"
#include "iomanip"

using namespace std;

int main() 
{
    double opcao[6] = {0, 4.00, 4.50, 5.00, 2.00, 1.50};

    int op = 0;
    int qtd = 0;
    double valor = 0.0;

    cin >> op >> qtd;

    valor = opcao[op] * qtd;

    cout << fixed << setprecision(2);

    cout << "Total: R$ " << valor << endl;
}