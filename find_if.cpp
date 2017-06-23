#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v{ 2, 7, 1, 2, -2, 4, 0 };
	int target = v[0];
	auto result = find_if(begin(v), end(v), [target](auto elem) {return elem == target;} );
	cout << *result << endl;
	return 0;
}
