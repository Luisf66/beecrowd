#include "iostream"
#include "iomanip"
#include "cmath"
using namespace std;

int main()
{
    double x1 = 0;
    double y1 = 0;
    double x2 = 0;
    double y2 = 0;

    cin >> x1 >> y1;
    cin >> x2 >> y2;

    cout << fixed << setprecision(4) << sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2)) << endl;
    return 0;
}