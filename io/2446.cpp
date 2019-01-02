#include <iostream>

using namespace std;

int main(void)
{
    int n;
    cin >> n;

    for(int i=0; i<(2*n)-1; i++)
    {
        if(i > n-1)
        {
            for(int j=2*(i-n+1); j<i; j++)
                cout << " ";
            for(int j=0; j<2*(i-n)+3; j++)
                cout << "*";
        }
        else
        {
            for(int j=0; j<i; j++)
                cout << " ";
            for(int j=(2*n)-1; j>=(2*i)+1; j--)
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}

