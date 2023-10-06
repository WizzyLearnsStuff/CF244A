#include<iostream>
#include<vector>

using namespace std;

int main() {
	int n, k;
	cin >> n >> k;

	vector<int> v(n * k + 1, 0);
	vector<int> want(k + 1, 0);

	for (int i = 1; i <= k; i++) {
		int b;
		cin >> b;
		v[b] = i;
		want[i] = b;
	}

	for (int i = 1; i <= k; i++) {
		int out = n - 1;
		for (int j = 1; j < v.size() && out > 0; j++) {
			if (v[j] == 0) {
				cout << j << ' ';
				v[j] = i;
				out--;
			}
		} 
		cout << want[i] << '\n';
	}
}
