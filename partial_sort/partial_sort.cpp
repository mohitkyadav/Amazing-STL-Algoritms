#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{ 45,2,3,4,-5,6,17 };
    int target = v[3];
	partial_sort(begin(v), find(begin(v), end(v), target), end(v));
	for(auto elem : v)
	{
	    cout << elem << " ";
	}
	return 0;
}


