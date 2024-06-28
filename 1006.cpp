#include "iostream"
#include "iomanip"
using namespace std;

int main()
{
    double A = 0.0;
    double B = 0.0;
    double C = 0.0; 
    double media = 0.0;

    cin >> A;
    cin >> B;
    cin >> C;
    media = ((A * 2) / 10) + ((B * 3) /10) + ((C * 5) /10);
    cout << fixed << setprecision(1) << "MEDIA = " << media << endl;
    

    return 0;
};