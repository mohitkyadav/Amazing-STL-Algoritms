#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void print(vector<int> v)
{
    for(auto elem : v)
    {
        cout << elem << " ";
    }
    cout << "\n";
}

int main()
{
	vector<int> v{ 4, 3, 2, 0, 15, 2, 100, -5, 1000 };
	vector<int> v1(5);
	partial_sort_copy(begin(v), end(v), begin(v1), end(v1));
	print(v);
	print(v1);
	return 0;
}
