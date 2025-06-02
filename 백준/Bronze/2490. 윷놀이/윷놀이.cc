#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int max(int x, int y, int z);

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int arr[] = { 0, 0, 0, 0 };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            int input = 0;
            cin >> input;

            arr[i] += input;
        }
    }
    
    for (int i = 0; i < 3; i++) {
        if (arr[i] == 0) {
            cout << 'D' << '\n';
        }
        else if (arr[i] == 1) {
            cout << 'C' << '\n';
        }
        else if (arr[i] == 2) {
            cout << 'B' << '\n';
        }
        else if (arr[i] == 3) {
            cout << 'A' << '\n';
        }
        else {
            cout << 'E' << '\n';
        }
    }
    
    return 0;
}