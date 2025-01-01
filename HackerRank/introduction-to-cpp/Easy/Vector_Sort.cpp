#include <bits/stdc++.h>
using namespace std;

int main() {
    // write your code here
    int n;
    cin >> n;
    vector<long long int> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }
    sort(array.begin(), array.end());
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }

    return 0;
}