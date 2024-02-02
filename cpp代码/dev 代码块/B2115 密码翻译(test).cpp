#include<bits/stdc++.h>
using namespace std;

string decryptPassword(const string& encryptedPassword) {
    string decryptedPassword;
    for (char c : encryptedPassword) {
        if (c >= 'a' && c <= 'z') { 
            if (c == 'z') {
                decryptedPassword += 'a';
            } else {
                decryptedPassword += c + 1;
            }
        } else if (c >= 'A' && c <= 'Z') { 
            if (c == 'Z') {
                decryptedPassword += 'A';
            } else {
                decryptedPassword += c + 1;
            }
        } else {  
            decryptedPassword += c;
        }
    }
    return decryptedPassword;
}

int main() {
    string encryptedPassword;
    getline(cin, encryptedPassword);
    string decryptedPassword = decryptPassword(encryptedPassword);
    cout << decryptedPassword << endl;
    return 0;
}
