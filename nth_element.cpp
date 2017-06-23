#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> v{ 4, 3, 2, 0, 15, 2, 100, -5, 1000 };
	nth_element(begin(v), begin(v) + 6, end(v));
	for(auto elem : v)
	{
		cout << elem << " ";
	}
	return 0;
}
