#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v{ 4,3,2,0,15,2,100,-5,1000 };
	bool result = is_sorted(begin(v), end(v), [](int elem1, int elem2) {return elem1 < elem2;});
	cout << result;
	return 0;
}