#include <iostream>
using namespace std;
int main()
{
    int n = 10;
    int i = 1;
    int sumOdd = 0;
    int sumEven = 0;
    while (i < n)
    {
        if (i % 2 != 0)
        {
            sumOdd = sumOdd + i;
        }
        else
        {
            sumEven = sumEven + i;
        }
        i++;
    }

    // for (int i = 1; i < n; i++)
    // {
    //     if (i % 2 == 0)
    //     {
    //         sumEven += i;
    //     }
    //     else
    //     {
    //         sumOdd += i;
    //     }
    // }
    cout  << "odd Sum = " << sumOdd << endl;
    return 0;
}