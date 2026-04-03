#include <iostream>
#include <compare>
#include <vector>

using namespace std;

struct Person {
	int x{};
	int y{};
	int rank{ 1 };

	Person(int x, int y) : x(x), y(y) {}

	auto operator<=>(const Person& other) const {
		auto cmpX = x <=> other.x;
		auto cmpY = y <=> other.y;

		if (cmpX != cmpY)
			return strong_ordering::equal;

		return cmpX;
	}

	void print() const {
		cout << rank << " ";
	}
};

void myCompare(Person& a, Person& b) {
	if (is_lt(a <=> b))
		(a.rank)++;
	else if (is_gt(a <=> b)) {
		(b.rank)++;
	}
}

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
		for (int j = i; j < n; j++) {
			myCompare(v[i], v[j]);
		}
	}

	for (int i = 0; i < n; i++)
		v[i].print();

	return 0;
}