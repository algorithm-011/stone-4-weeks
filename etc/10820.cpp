#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string str;
    int lower = 0, upper = 0, num = 0, space = 0;

    while(getline(cin, str)) {
        int len = str.length();
        for(int i=0; i<len ;i++)
        {
            if(str.at(i) >= 97 && str.at(i) <= 122)
                lower++;
            else if(str.at(i) >= 65 && str.at(i) <= 90)
                upper++;
            else if(str.at(i) >= 48 && str.at(i) <= 57)
                num++;
            else if(str.at(i) == ' ')
                space++;
        }

        printf("%d %d %d %d\n", lower, upper, num, space);
        lower = 0;
        upper = 0;
        num = 0;
        space = 0;
    }

    return 0;
}

