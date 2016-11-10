// Вычислить сумму ряда:
// S = ∑(k=1)->inf = ((-1)^(k-1))/(k^3)
// С точностью e=10^(-4)
#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double e=1e-4;
    double sum = 0;
    double si = 0;
    int k = 0;
    int sign = 1;
    do
    {
        k++;
        si = 1./(pow(k,3));
        sum += sign*si;
        sign *= -1;
    } while (si >= e);
    cout << "sum=" << sum << endl;
    return 0;
}
