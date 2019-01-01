#include <iostream>

using namespace std;

int main(void)
{
    int n, sum = 0;
    cin >> n;

    for(int idx=1; idx<=n; idx++)
        sum += idx;
    cout << sum << endl;

    return 0;
}

