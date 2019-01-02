#include <iostream>

using namespace std;

int main(void)
{
    int n; 
    cin >> n;

    for(int i=0; i<n; i++)
    {
        for(int j=n-i-1; j>0; j--)
            cout << " ";
        for(int j=0; j<(2*i)+1; j++)
        {
            if(i == n-1)
                cout << "*";
            else
            {
                if(j == 0 || j == (2*i))
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

