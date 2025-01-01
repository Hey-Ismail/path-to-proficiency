#include <bits/stdc++.h>
using namespace std;

void solve(int* a, int* b, int* sum, int* diff) {
    *sum = *a + *b;
    *diff = abs(*a - *b);
}

int main() {
    int a, b;
    cin >> a >> b;

    int sum, diff;
    solve(&a, &b, &sum, &diff);

    cout << sum << endl;
    cout << diff << endl;

    return 0;
}