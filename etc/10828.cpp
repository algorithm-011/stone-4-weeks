#include <cstdio>
#include <iostream>
#include <stack>

using namespace std;

int main(void)
{
    int n;
    stack<int> st;
    scanf("%d", &n);

    while(n)
    {
        int num;
        string cmd;
        cin >> cmd;

        if(!cmd.compare("push"))
        {
            scanf("%d", &num);
            st.push(num);
        }
        else if(!cmd.compare("pop"))
        {
            num = st.empty() ? -1 : st.top();
            if(!st.empty())
                st.pop();
            printf("%d\n", num);
        }
        else if(!cmd.compare("top"))
        {
            num = st.empty() ? -1 : st.top();
            printf("%d\n", num);
        }
        else if(!cmd.compare("size"))
            printf("%lu\n", st.size());
        // empty
        else
            printf("%d\n", st.empty());

        n--;
    }

    return 0;
}

