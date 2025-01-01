#include <bits/stdc++.h>
using namespace std;

int main() {
    // write your code here
    int n, q;
    cin >> n >> q;

    vector<vector<int>> arrays(n);

    for (int i = 0; i < n; ++i) {
        int k;
        cin >> k;
        arrays[i].resize(k);
        for (int j = 0; j < k; ++j) {
            cin >> arrays[i][j];
        }
    }

    while (q--) {
        int a, b;
        cin >> a >> b;
        cout << arrays[a][b] << endl;
    }

    return 0;
}