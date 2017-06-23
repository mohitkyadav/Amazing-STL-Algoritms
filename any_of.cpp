#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{ 2, 7, 1, 2, -2, 4, 0 };
    bool result = any_of(begin(v), end(v), [](auto elem) {return elem > -4;});
    cout << result << endl;
    return 0;
}
