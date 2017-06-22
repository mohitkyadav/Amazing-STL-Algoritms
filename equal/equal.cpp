#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v1{ 2, 7, 1, 2, -2, 4, 0 };
    vector<int> v2{ 1, 23, 45, 1, 2, 4, 0 };
    bool same = equal(begin(v1), end(v1), begin(v2), end(v2));
    cout << same << endl;
    return 0;
}
