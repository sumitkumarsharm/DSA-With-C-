#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the row :-  ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << " *";
        }
        cout << endl;
    }

    return 0;
}