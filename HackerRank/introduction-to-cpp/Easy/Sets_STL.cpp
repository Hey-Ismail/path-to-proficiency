#include <bits/stdc++.h>
using namespace std;

int main() {
    // write your code here
    int q;
    cin >> q;
    set<int> array;
    while (q--) {
        int y, x;
        cin >> y >> x;
        if (y == 1) {
            array.insert(x);
        } else if (y == 2) {
            array.erase(x);
        } else if (y == 3) {
            if (array.find(x) != array.end()) {
                cout << "Yes\n";
            } else {
                cout << "No\n";
            }
        }
    }

    return 0;
}