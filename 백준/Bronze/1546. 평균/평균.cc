#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, max;
	double sum = 0, avg = 0;

	cin >> n;
	
	vector<int> v(n);
	for (int i = 0; i < n; i++)
		cin >> v[i];

	sort(v.begin(), v.end(), greater<int>());
	max = v[0];

	for (int x : v)
		sum += double(x) / max * 100;
	avg = sum / n;

	cout << avg;



	return 0;
}