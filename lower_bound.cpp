#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v{ 4, 3, 2, 0, 15, 2, 100, -5, 1000 };
	auto low = lower_bound(begin(v), end(v), 3);
	cout << *low;
	return 0;
}