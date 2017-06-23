#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{ 2, 7, 1, 2, 2, 4, 0 };
    auto result = adjacent_find(begin(v), end(v));
    cout << *result << endl;
    advance(result, 3);
    cout << *result << endl;
    return 0;
}
