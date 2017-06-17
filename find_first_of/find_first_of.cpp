#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> v{ 2, 7, 1, 2, -2, 4, 0 };
    vector<int> primes{ 3, 5, 7 };
    auto result = find_first_of(begin(v), end(v), begin(primes), end(primes));
    cout << *result << endl;
    return 0;
}
