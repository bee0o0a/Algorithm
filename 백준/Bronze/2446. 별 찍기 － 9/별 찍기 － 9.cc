#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int N;
	cin >> N;

	for(int i=1; i<=N; i++) {
		for(int j=0; j<(i-1); j++) cout << ' ';
		for(int j=0; j<=(N-i)*2; j++) cout << '*';
		cout << '\n';
	}

	for(int i=1; i<=N-1; i++) {
		for(int j=0; j<N-1-i; j++) cout << ' ';
		for(int j=0; j<=i*2; j++) cout << '*';
		cout << '\n';
	}

	return 0;
}