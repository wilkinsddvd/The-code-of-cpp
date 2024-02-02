#include <iostream>
#include <string>
using namespace std;

string decimalToD(int num, int d) {
    string result = "";
    while (num > 0) {
        int remainder = num % d;
        if (remainder < 10) {
            result.insert(0, 1, '0' + remainder);
        } else {
            result.insert(0, 1, 'A' + remainder - 10);
        }
        num = num / d;
    }
    return result;
}

int main() {
    int num, d;
    cin >> num >> d;
    string result = decimalToD(num, d);
    cout << result << endl;
    return 0;
}

