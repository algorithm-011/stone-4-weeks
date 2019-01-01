#include <iostream>

using namespace std;

int main(void)
{
    string str;

    while(true)
    {
        getline(cin, str);
        if(str == "")
            break;
        cout << str << endl;
    }

    return 0;
}

