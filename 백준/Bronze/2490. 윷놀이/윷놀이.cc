#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int max(int x, int y, int z);

char res[] = { 'D', 'C', 'B', 'A', 'E' };

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    for (int i = 0; i < 3; i++) {
        int result = 0;
        for (int j = 0; j < 4; j++) {
            int input = 0;
            cin >> input;
            result += input;
        }

        cout << res[result] << '\n';
    }
    return 0;
}