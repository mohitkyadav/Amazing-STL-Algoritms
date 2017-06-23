#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v{ 2, 7, 1, 2, -2, 4, 0 };
	int target = v[5];
	auto result = find(begin(v), end(v), target);
	cout << *result << endl;
	return 0;
}
