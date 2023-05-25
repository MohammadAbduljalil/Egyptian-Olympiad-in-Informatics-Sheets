#include <iostream>
using namespace std;
int main() {
    int a, b, c; cin >> a >> b >> c;
    int minimum, middle, maximum;
    if (a <= b && a <= c) minimum = a;
    else if (b <= a && b <= c) minimum = b;
    else if (c <= a && c <= b) minimum = c;
    if (a >= b && a >= c) maximum = a;
    else if (b >= a && b >= c) maximum = b;
    else if (c >= a && c >= b) maximum = c;
    middle = a + b + c - maximum - minimum;
    cout << minimum << '\n' << middle << '\n' << maximum << "\n\n";
    cout << a << '\n' << b << '\n' << c;
    return 0;
}
