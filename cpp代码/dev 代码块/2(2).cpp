#include <iostream>
#include <string>

using namespace std;

int findSubstring(string s, string t, int pos) {
    int n = s.length();
    int m = t.length();
    
    if (pos >= n || m == 0) {
        return 0;
    }
    
    for (int i = pos; i <= n - m; i++) {
        bool found = true;
        for (int j = 0; j < m; j++) {
            if (s[i + j] != t[j]) {
                found = false;
                break;
            }
        }
        if (found) {
            return i;
        }
    }
    
    return 0;
}

int main() {
    string s, t;
    int pos;
    
    getline(cin, s);
    getline(cin, t);
    cin >> pos;
    
    int result = findSubstring(s, t, pos);
    cout << result << endl;
    
    return 0;
}
