#include <algorithm>
#include <cstdio>

using namespace std;

int main(void)
{
    int n;
    scanf("%d", &n);
    int nums[n];

    for(int idx=0; idx<n; idx++)
        scanf("%d", &nums[idx]);
    sort(nums, nums+n);
    for(int idx=0; idx<n; idx++)
        printf("%d\n", nums[idx]);

    return 0;
}

