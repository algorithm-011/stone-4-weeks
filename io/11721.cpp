#include <iostream>

using namespace std;

int main(void)
{
    string str;
    cin >> str;

    for(int idx=0; idx<str.length(); idx++)
    {
        cout << str[idx];
        if((idx + 1) % 10 == 0)
            cout << endl;
    }

    return 0;
}

