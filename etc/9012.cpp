#include <cstdio>
#include <cstring>
#include <stack>
#include <iostream>

using namespace std;

bool is_vps(char *str)
{
    stack<char> st;
    int length = strlen(str);

    for(int i=0; i<length; i++)
    {
        if(str[i] == '(')
            st.push('(');
        else if(str[i] == ')' && !st.empty())
            st.pop();
        else
            return false;
    }

    if(st.empty())
        return true;
     else
         return false;
}

int main(void)
{
    int n;
    scanf("%d", &n);

    while(n)
    {
        char str[50];
        scanf("%s", str);

        if(is_vps(str))
            printf("YES\n");
        else
            printf("NO\n");

        n--;
    }

    return 0;
}

