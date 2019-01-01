#include <iostream>

using namespace std;

int main(void)
{
    int n, min = 1000001, max = -1000000;
    cin >> n;
    for(int c=0; c<n; c++)
    {
        int num;
        cin >> num;

        min = min > num ? num : min;
        max = num > max ? num : max;
    }

    cout << min << " " << max << endl;
    
    return 0;
}

