#include <iostream>

using namespace std;

int main(void)
{
    int t;
    cin >> t;

    for(int c=0; c<t; c++)
    {
        int a, b;
        cin >> a >> b;
        cout << "Case #" << c + 1 << ": " << a + b << endl;
    }

    return 0;
}

