#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a > 0) {
        a = a * a;
    }
    if (b > 0) {
        b = b * b;
    }
    if (c > 0) {
        c = c * c;
    }
    cout << a << " " << b << " " << c << endl;
    return 0;
}
