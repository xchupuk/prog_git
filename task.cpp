#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    cout << "Should the case be taken into account? Enter Y/N";
    string case_check;
    cin >> case_check;
    
    bool flag;
    if (case_check == "Y") {
        flag = 1;
    }
    else {
        flag = 0;
    }

    string str;
    vector<int> v(128, 0);
    cin >> str;
    for (int i = 0; i < str.size(); ++i) {
        if (!(48 <= str[i] && str[i] <= 57 || 65 <= str[i] && str[i] <= 90 || 97 <= str[i] && str[i] <= 122)) {
            cout << "Only letters and figures are allowed";
            return 0;
        }
    }

    for (int i = 0; i < str.size(); ++i) {
        if (str[i] > 95 && flag == 0) {
            ++v[str[i] - 32];
        }
        else {
            ++v[str[i]];
        }
    }
    
    for (int i = 0; i < 128; ++i) {
        if (v[i] != 0) {
            cout << static_cast<char>(i) << " - " << v[i] << '\n';
        }
    }
    
}