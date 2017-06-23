#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v1{ 2, 7, 1, 2, -2, 4, 0 };
	vector<int> v2{ 2, 7, 2, 2, -2, 4, 0 };
	auto diff = mismatch(begin(v1), end(v1), begin(v2));
	cout << *diff.first << endl;
	cout << *diff.second << endl;
	return 0;
}
