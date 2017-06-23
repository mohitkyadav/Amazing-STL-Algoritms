#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v{ 2, 7, 1, 2, -2, 4, 0 };
	vector<int> subVec{ -2, 4 };
	auto result = find_end(begin(v), end(v), begin(subVec), end(subVec));
	// first element of subVec
	cout << *result << endl;
	advance(result, 1);
	// last element of subVec
	cout << *result << endl;
	return 0;
}
