#include <iostream>
using namespace std;
int main() {
    long long a, b; char operation;
    cin >> a >> operation >> b;
    if (operation == '+') cout << (a + b);
    else if (operation == '-') cout << (a - b);
    else if (operation == '*') cout << (a * b);
    else if (operation == '/') cout << (a / b);
    return 0;
}
