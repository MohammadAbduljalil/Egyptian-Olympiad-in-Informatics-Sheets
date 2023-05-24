#include <iostream>
#include <cctype>
using namespace std;
int main() {
    char c; cin >> c;
    if (isdigit(c)) cout << "IS DIGIT";
    else if (isalpha(c)) {
        cout << "ALPHA\n";
        if (isupper(c)) cout << "IS CAPITAL";
        else if (islower(c)) cout << "IS SMALL";
    }
    return 0;
}
