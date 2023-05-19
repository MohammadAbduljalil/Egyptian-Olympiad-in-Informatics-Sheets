#include <iostream>
using namespace std;
int main() {
    long long n, m;
    cin >> n >> m;
    cout << (n % 10) + (m % 10);
    // The last digit of any number is equal to (number % 10)
    return 0;
}
