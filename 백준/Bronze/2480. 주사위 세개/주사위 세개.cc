#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int max(int x, int y, int z);

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int x, y, z;
    cin >> x >> y >> z;

    if (x == y && x == z) {
        cout << 10000 + x * 1000;
    }
    else if (x == y || x == z || y == z) {
        int sameNum = (x == y || x == z) ? x : y;
        cout << 1000 + sameNum * 100;
    }
    else {
        int maxNum = max(x, y, z);
        cout << maxNum * 100;
    }
    
    return 0;
}

int max(int x, int y, int z) {
    if (x >= y && x >= z) {
        return x;
    }
    else if (y >= x && y >= z) {
        return y;
    }
    else {
        return z;
    }
}