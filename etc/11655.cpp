#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int ch;
    string str;

    getline(cin, str);

    for(int i=0; i<str.length(); i++)
    {
        if((str.at(i) >= 65 && str.at(i) <= 90) || (str.at(i) >= 97 && str.at(i) <= 122))
        {
            ch = str.at(i) + 13;
            if(str.at(i) >= 65 && str.at(i) <= 90 && ch > 90)
                ch = (ch % 91) + 65;
            else if (ch > 122)
                ch = (ch % 123) + 97;

            str[i] = ch;
        }
    }

    cout << str << endl;

    return 0;
}

