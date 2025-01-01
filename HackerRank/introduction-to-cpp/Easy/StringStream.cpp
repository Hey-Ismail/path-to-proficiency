#include <bits/stdc++.h>
using namespace std;

vector<int> parseInts(string str) {
    vector<int> result;
    stringstream ss(str);
    char ch;
    int temp;

    while (ss >> temp) {
        result.push_back(temp);
        ss >> ch;  // discard the comma
    }

    return result;
}

int main() {
    string input;
    cin >> input;
    vector<int> integers = parseInts(input);

    for (int i : integers) {
        cout << i << endl;
    }

    return 0;
}