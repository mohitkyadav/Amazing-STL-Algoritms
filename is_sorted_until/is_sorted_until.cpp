#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{ 2, 3, 4, -5, 6, 17 };
    auto result = is_sorted_until(begin(v), begin(v) + 2);
	cout << *result;
	return 0;
}


