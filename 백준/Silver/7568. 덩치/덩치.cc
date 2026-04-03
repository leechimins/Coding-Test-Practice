#include <iostream>
#include <compare>
#include <vector>

using namespace std;

struct Person {
	int x{};
	int y{};
	int rank{ 1 };

	Person(int x, int y) : x(x), y(y) {}

	partial_ordering operator<=>(const Person& other) const {
		if (x > other.x && y > other.y)
			return partial_ordering::greater;

		if (x < other.x && y < other.y)
			return partial_ordering::less;

		return partial_ordering::unordered;
	}
};

int main(void) {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, x, y;
	cin >> n;

	vector<Person> v;
	v.reserve(n);
	for (int i = 0; i < n; i++) {
		cin >> x >> y;
		v.emplace_back(x, y);
	}

	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (is_lt(v[i] <=> v[j])) {
				v[i].rank++;
			}
			else if (is_gt(v[i] <=> v[j])) {
				v[j].rank++;
			}
		}
	}

	for (const auto& p : v) {
		cout << p.rank << " ";
	}

	return 0;
}