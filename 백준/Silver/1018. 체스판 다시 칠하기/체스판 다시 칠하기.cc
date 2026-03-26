#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, count, minCount = 32;
	char input;
	bool check;
	cin >> n >> m;
	vector<vector<bool>> board(n, vector<bool>(m));
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			cin >> input;
			board[i][j] = input == 'W' ? true : false;
		}

	for (int rStart = 0; rStart <= n - 8; rStart++) {
		for (int cStart = 0; cStart <= m - 8; cStart++) {
			count = 0;
			check = board[rStart][cStart];
			for (int i = 0; i < 8; i++) {
				for (int j = 0; j < 8; j++) {
					//cout << check << board[rStart + i][cStart + j] << " ";
					if (check != board[rStart + i][cStart + j])
						count++;
					check = !check;
				}
				check = !check;
				//cout << "\n";
			}
			if (count > 32)
				count = 64 - count;
			if (minCount > count)
				minCount = count;
		}
	}

	cout << minCount;

	return 0;
}