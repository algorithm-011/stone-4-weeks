#include <cstdio>
#include <cstring>

using namespace std;

int main(void)
{
    char str[100];
    int alphabet[26] = {0}, length;
    scanf("%s", str);

    length = strlen(str);
    for(int idx=0; idx<length; idx++)
        alphabet[str[idx] - 97]++;
    for(int idx=0; idx<26; idx++)
        printf("%d ", alphabet[idx]);
    printf("\n");

    return 0;
}

