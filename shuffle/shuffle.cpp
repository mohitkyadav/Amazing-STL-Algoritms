#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

int main()
{
    vector<int> v{ 1, 2, 3, 4, 5, 6, 7 };
	random_device randomdevice;
	mt19937 generator;
	shuffle(begin(v), end(v), generator);
	for(auto elem : v)
	{
	    cout << elem << " ";
	}
	return 0;
}


