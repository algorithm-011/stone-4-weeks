#include <iostream>

using namespace std;

int main(void)
{
    int n, sum = 0;
    cin >> n;

    char numbers[n];
    for(int c=0; c<n; c++)
    {
        cin >> numbers[c];
        sum += (numbers[c] - 48);
    }

    cout << sum << endl;
    return 0;
}

