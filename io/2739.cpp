#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    for(int idx=1; idx<=9; idx++)
        cout << n << " * " << idx << " = " << n * idx << endl;
    return 0;
}

