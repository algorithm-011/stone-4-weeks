#include <algorithm>
#include <cstdio>
#include <map>

using namespace std;

bool compare_func(const pair<long long, int>& p1, const pair<long long, int>& p2)
{
    return p1.second < p2.second;
}

int main(void)
{
    map<long long, int> arr;
    map<long long, int>::iterator it;
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++)
    {
        long long num;
        scanf("%lld", &num);

        // has key
        it = arr.find(num);
        if(it != arr.end())
            arr[num] = ++(it->second);
        else
            arr.insert(make_pair(num, 0));
    }

    map<long long, int>::iterator card = max_element(arr.begin(), arr.end(), compare_func);
    printf("%lld\n", card->first);

    return 0;
}

