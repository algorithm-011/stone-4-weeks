#include <cstdio>
#include <algorithm>

using namespace std;

int main(void)
{
    int n, k;
    long long arr[5000001];

    scanf("%d %d", &n, &k);
    for(int i=0; i<n; i++)
        scanf("%lld", &arr[i]);

    sort(arr, arr + n);
    printf("%lld", arr[k-1]);
    return 0;
}

