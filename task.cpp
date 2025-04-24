#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    string s;
    vector<int> v(128, 0);
    cin >> s;
    for (int i = 0; i < s.size(); ++i) {
        ++v[s[i]];
    }
    for (int i = 0; i < 128; ++i) {
        if (v[i] != 0) {
            cout << static_cast<char>(i) << " - " << v[i] << '\n';
        }
    }
}