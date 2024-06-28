#include "iostream"
#include "iomanip"
using namespace std;

int main()
{
    double A = 0.0;
    double B = 0.0;
    double media = 0.0;

    cin >> A;
    cin >> B;
    media = ((A * 3.5) / 11) + ((B * 7.5) /11);
    cout << fixed << setprecision(5) << "MEDIA=" << media << endl;
    

    return 0;
};