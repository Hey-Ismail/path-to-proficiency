#include <bits/stdc++.h>
using namespace std;

int main() {
    // write your code here
    string str1, str2;
    cin >> str1;
    cin >> str2;

    int size1 = str1.size();
    int size2 = str2.size();

    cout << size1 << " " << size2 << endl;
    cout << str1 + str2 << endl;

    swap(str1[0], str2[0]);
    cout << str1 << " " << str2 << endl;

    return 0;
}