#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{ 2, 7, 2, 2, -2, 4, 0 };
    int total = accumulate(begin(v), end(v), 0);
    cout << total << endl;
    total = accumulate(begin(v), end(v), 0,
        [](int total, int i) {if(i % 2 == 0) return total + i; return total;});
    cout << total;
    return 0;
}
