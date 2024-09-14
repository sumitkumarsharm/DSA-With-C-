#include <iostream>
using namespace std;
int main()
{
    // find the charcator is lowercase or uppercase
    // there is three and more solution of the question
    // 1. using toupper() function and tolower() function
    // 2. using ASSCII value for a-z(65 - 90) and A-Z(96-to 122)
    // 3. using this if(char >= 'a' && char <= 'z') it is lowerchar

    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (islower(ch))
    {
        cout << ch << " is a lowercase letter." << endl;
    }
    else if (isupper(ch))
    {
        cout << ch << " is an uppercase letter." << endl;
    }
    else
    {
        cout << ch << " is not a letter." << endl;
    }
}