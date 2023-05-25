#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    int l1, r1, l2, r2;
    cin >> l1 >> r1 >> l2 >> r2;
    if (l2 < l1) {
        swap(l1, l2);
        swap(r1, r2);
    }
    if (l2 > r1) cout << -1;
    else cout << l2 << ' ' << min(r1, r2);
    return 0;
}
