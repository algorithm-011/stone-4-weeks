#include <cstdio>
#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
    int n;
    queue<int> q;
    scanf("%d", &n);

    while(n)
    {
        int num;
        string cmd;
        cin >> cmd;

        if(!cmd.compare("push"))
        {
            scanf("%d", &num);
            q.push(num);
        }

        else if(!cmd.compare("pop"))
        {
            num = q.empty() ? -1 : q.front();
            if(!q.empty())
                q.pop();
            printf("%d\n", num);
        }
        else if(!cmd.compare("front"))
        {
            num = q.empty() ? -1 : q.front();
            printf("%d\n", num);
        }
        else if(!cmd.compare("back"))
        {
            num = q.empty() ? -1 : q.back();
            printf("%d\n", num);
        }
        else if(!cmd.compare("size"))
            printf("%lu\n", q.size());
        // empty
        else
            printf("%d\n", q.empty());

        n--;
    }

    return 0;
}

