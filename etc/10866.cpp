#include <cstdio>
#include <deque>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    deque<int> d;
    int n;

    scanf("%d", &n);
    while(n)
    {
        int val;
        string cmd;
        cin >> cmd;

        if(!cmd.compare("push_back"))
        {
            scanf("%d", &val);
            d.push_back(val);
        }

        else if(!cmd.compare("push_front"))
        {
            scanf("%d", &val);
            d.push_front(val);
        }

        else if(!cmd.compare("front"))
        {
            val = d.empty() ? -1 : d.front();
            printf("%d\n", val);
        }

        else if(!cmd.compare("back"))
        {
            val = d.empty() ? -1 : d.back();
            printf("%d\n", val);
        }

        else if(!cmd.compare("size"))
            printf("%lu\n", d.size());

        else if(!cmd.compare("empty"))
            printf("%d\n", d.empty());

        else if(!cmd.compare("pop_front"))
        {
            val = d.empty() ? -1 : d.front();

            printf("%d\n", val);
            if(!d.empty())
                d.pop_front();
        }

        // pop back
        else
        {
            val = d.empty() ? -1 : d.back();

            printf("%d\n", val);
            if(!d.empty())
                d.pop_back();
        }

        n--;
    }

    return 0;
}


