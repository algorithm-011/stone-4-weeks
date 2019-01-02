#include <iostream>

using namespace std;

int main(void)
{
    int n; 
    cin >> n;

    for(int i=0; i<(n*2)-1; i++)
    {
        if(i > n-1)
        {
            for(int j=0; j<i-n+1; j++)
                cout << " ";
            for(int j=2*(i-n)+1; j<i; j++)
                cout << "*";
        }
        else
        {
            for(int j=i; j<n-1; j++)
                cout << " ";
            for(int j=0; j<=i; j++)
                cout << "*";

        }
        cout << endl;
    }

    return 0;
}

