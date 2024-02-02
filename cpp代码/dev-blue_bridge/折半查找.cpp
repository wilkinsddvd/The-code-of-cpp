#include <iostream>
#include <vector>
#include <sstream>
using namespace std;

int binarySearch(vector<int>& A, int k, vector<int>& process) {
    int left = 0, right = A.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        process.push_back(A[mid]);
        if (A[mid] == k) {
            return mid;
        } else if (A[mid] < k) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int N;
    cin >> N;
    cin.ignore(); 
    string input;
    getline(cin, input);
    stringstream ss(input);
    vector<int> A;
    int num;
    while (ss >> num) {
        A.push_back(num);
        if (ss.peek() == ',') {
            ss.ignore();
        }
    }
    int k;
    cin >> k;

    vector<int> process;
    int index = binarySearch(A, k, process);

    if (index != -1) {
        cout << index << endl;
        for (int i = 0; i < process.size(); i++) {
            cout << process[i];
            if (i != process.size() - 1) {
                cout << ",";
            }
        }
    } else {
        cout << "no" << endl;
    }

    return 0;
}
