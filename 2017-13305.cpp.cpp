#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
void main() {
	auto num = 0;
	std::vector<int> vec;
	while (cin >> num) {
	vec.push_back(num);
	sort(vec.rbegin(), vec.rend());
	}

	for (auto it : vec)
		cout << it << endl;
}