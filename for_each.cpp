#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{ 2, 7, 2, 2, -2, 4, 0 };
    for_each(begin(v), end(v), [](int& elem) {return elem = 1;});
    int total = accumulate(begin(v), end(v), 0);
    cout << total;
    return 0;
}
