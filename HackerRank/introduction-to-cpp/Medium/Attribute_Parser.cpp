#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    cin.ignore();

    map<string, string> tagMap;
    vector<string> tagStack;
    string line, tagPath;

    for (int i = 0; i < n; ++i) {
        getline(cin, line);
        stringstream ss(line);
        string word;
        ss >> word;

        if (word[1] == '/') {
            // Closing tag
            tagStack.pop_back();
        } else {
            // Opening tag
            word = word.substr(1);
            if (word.back() == '>')
                word.pop_back();
            tagStack.push_back(word);

            tagPath = "";
            for (const string& tag : tagStack) {
                if (!tagPath.empty())
                    tagPath += ".";
                tagPath += tag;
            }

            while (ss >> word) {
                if (word == "=")
                    continue;
                string attrName = word;
                ss >> word;  // Skip '='
                ss >> word;  // Get value
                if (word.back() == '>')
                    word.pop_back();
                tagMap[tagPath + "~" + attrName] = word.substr(1, word.size() - 2);
            }
        }
    }

    for (int i = 0; i < q; ++i) {
        getline(cin, line);
        if (tagMap.find(line) != tagMap.end()) {
            cout << tagMap[line] << endl;
        } else {
            cout << "Not Found!" << endl;
        }
    }

    return 0;
}
