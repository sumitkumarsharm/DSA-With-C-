#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the row :-  ";
    cin >> n;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }
    // output:
    // if n=5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5
    // 1 2 3 4 5

    // star printing

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << " * ";
    //     }

    //     cout << endl;
    // }
    // output :
    // if n=5
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *
    // * * * * *

    // charctor printing

    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << ch << " ";
    //         ch++;
    //     }
    //     cout << endl;
    // }

    // output :
    // if n=5
    //  A B C D E
    //  A B C D E
    //  A B C D E
    //  A B C D E
    //  A B C D E


    // int num = 1; // initialize num to 1

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    // output :-
    // 1 2 3
    // 4 5 6
    // 7 8 9
    return 0;
}