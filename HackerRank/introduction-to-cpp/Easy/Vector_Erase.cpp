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

    int index;
    cin >> index;
    int a, b;
    cin >> a >> b;

    array.erase(array.begin() + index - 1);
    array.erase(array.begin() + a - 1, array.begin() + b - 1);

    cout << array.size() << endl;
    for (int i = 0; i < array.size(); i++) {
        cout << array[i] << " ";
    }

    return 0;
}