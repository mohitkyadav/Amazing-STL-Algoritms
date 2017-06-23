#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> source{ 4, 3, 2, 0, 15, 2, 100, -5, 1000 };
	vector<int> v(source.size());
	int req = 4;
	copy_n(begin(source), req, begin(v));
	for(auto elem : v)
	{
		cout << elem << " ";
	}
	return 0;
}
