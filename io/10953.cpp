#include <iostream>

using namespace std;

int main(void)
{
    int t;
    char comma;
    cin >> t;

    for(int c=0; c<t; c++)
    {
        int a, b;
        cin >> a >> comma >> b;
        cout << a + b << endl;
    }

    return 0;
}

