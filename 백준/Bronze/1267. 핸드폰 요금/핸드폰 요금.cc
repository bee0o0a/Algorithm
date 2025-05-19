#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <utility>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, y = 0, m = 0;

	cin >> n;

	for (int i = 0; i < n; i++) {
		int d;
		cin >> d;

		y += d / 30 + 1;
		m += d / 60 + 1;
	}

	if (y * 10 > m * 15) cout << "M " << m * 15;
	else if (y * 10 < m * 15) cout << "Y " << y * 10;
	else cout << "Y M " << m * 15;
}