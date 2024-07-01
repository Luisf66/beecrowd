#include "iostream"

using namespace std;

int main()
{
    int segundos = 0;
    int minutos = 0;
    int horas = 0;
    cin >> segundos;

    if (segundos > 60)
    {
        minutos = segundos / 60;
        segundos = segundos % 60;
    }
    if (minutos > 60)
    {
        horas = minutos / 60;
        minutos = minutos % 60;
    }
    cout << horas << ":" << minutos << ":" << segundos << endl;
    return 0;
}