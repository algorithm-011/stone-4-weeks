#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string a, b, c, d;

    cin >> a >> b >> c >> d;

    cout << stoll(a + b) + stoll(c + d) << endl;
    return 0;
}

