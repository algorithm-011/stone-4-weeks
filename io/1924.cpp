#include <iostream>

using namespace std;

int month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(void)
{
    int x, y;
    cin >> x >> y;

    int sum = 0;
    for(int idx=1; idx<x; idx++)
        sum += month[idx-1];
    sum += y;

    switch(sum % 7)
    {
        case 1:
            cout << "MON" << endl;
            break;
        case 2:
            cout << "TUE" << endl;
            break;
        case 3:
            cout << "WED" << endl;
            break;
        case 4:
            cout << "THU" << endl;
            break;
        case 5:
            cout << "FRI" << endl;
            break;
        case 6:
            cout << "SAT" << endl;
            break;
        case 0:
            cout << "SUN" << endl;
    }

    return 0;
}

