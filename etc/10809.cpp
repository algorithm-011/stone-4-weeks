#include <cstdio>
#include <cstring>

using namespace std;

int main(void)
{
    char str[100], alphabet[26];
    int length;
    scanf("%s", str);

    length = strlen(str);
    memset(alphabet, -1, sizeof(alphabet));
    for(int idx=0; idx<length; idx++)
        if(alphabet[str[idx] - 97] == -1)
            alphabet[str[idx] - 97] = idx;

    for(int idx=0; idx<26; idx++)
        printf("%d ", alphabet[idx]);
    printf("\n");

    return 0;
}

