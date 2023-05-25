#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int a, b, c; cin >> a >> b >> c;
    int minimum = min({a, b, c});
    int maximum = max({a, b, c});
    int middle = (a + b + c) - (minimum + maximum);
    cout << minimum << '\n' << middle << '\n' << maximum << "\n\n";
    cout << a << '\n' << b << '\n' << c;
    return 0;
}
