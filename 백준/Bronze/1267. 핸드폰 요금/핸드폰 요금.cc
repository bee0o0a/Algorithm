#include <bits/stdc++.h>
using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, y = 0, m = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int d;
		cin >> d;

		y += (d / 30 + 1) * 10;
		m += (d / 60 + 1) * 15;
	}

	if (y > m) cout << "M " << m;
	else if (y < m) cout << "Y " << y;
	else cout << "Y M " << m;
}