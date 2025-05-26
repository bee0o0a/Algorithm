#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

int main() {
	int n;
	int star = 1;

	cin >> n;

	for(int i=0; i<n; i++) {
		for(int j=0; j<n-i-1; j++) {
			cout << ' ';
		}

		for(int j=0; j<star; j++) {
			cout << '*';
		}

		cout << '\n';
		star += 2;
	}

	star -= 2;

	for(int i=0; i<n-1; i++) {
		star -= 2;

		for(int j=n-i; j<=n; j++) {
			cout << ' ';
		}

		for(int j=0; j<star; j++) {
			cout << '*';
		}

		cout << '\n';
		
	}

	return 0;
}