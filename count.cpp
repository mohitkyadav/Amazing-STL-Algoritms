#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v{ 2, 7, 1, 2, -2, 4, 0 };
	int target = v[0];
	int result = count(begin(v), end(v), target);
	//or
	//int result = count(v.begin(), v.end(), target);
	cout << result << endl;
	return 0;
}
