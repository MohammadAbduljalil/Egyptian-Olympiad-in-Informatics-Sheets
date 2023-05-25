#include <iostream>
using namespace std;
int main() {
    double n; cin >> n;
    int integer_n = n;
    if (n == integer_n) cout << "int " << integer_n;
    else cout << "float " << integer_n << ' ' << n - integer_n;
    return 0;
}
