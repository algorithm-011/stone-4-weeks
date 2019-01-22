#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int main(void)
{
    int n;
    vector< pair<int, int> > vc;

    scanf("%d", &n);

    for(int idx=0; idx<n; idx++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        vc.push_back(make_pair(x, y));
    }

    sort(vc.begin(), vc.end());
    for(vector< pair<int, int> >::iterator it=vc.begin(); it!=vc.end(); it++)
        printf("%d %d\n", (*it).first, (*it).second);

    return 0;
}

