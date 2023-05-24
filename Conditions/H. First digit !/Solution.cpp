#include <iostream>
using namespace std;
int main() {
    int x; cin >> x;
    int firstDigit = (x / 1000);
    if (firstDigit % 2 == 0) cout << "EVEN";
    else cout << "ODD";
    return 0;
}
