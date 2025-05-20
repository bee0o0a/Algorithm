#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int z = i; z < n-1; z++) cout << ' ';
        for (int z = 1; z <= i*2+1; z++) cout << '*';
        cout << '\n';
    }
}
