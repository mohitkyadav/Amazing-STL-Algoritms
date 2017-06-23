#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v{ 2, 7, 1, 2, -2, 4, 0 };
	int target = v[5];
	int repeat = 1;
	auto result = search_n(begin(v), end(v), repeat, target);
	cout << *result << endl;
	return 0;
}
