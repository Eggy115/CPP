#include <iostream>
using namespace std;
bool palindrome(int a)
{
    int b = a;
    int rev = 0;/*rev is reverse*/

    while (b!=0)
    {
        int n = b%10;
        b=b/10;
        rev=rev*10+n;
    }
    return (rev==a);
}
int main()
{
    int num ;
    cin >> num;
    bool nump = palindrome(num);
    if(nump)
    {
        cout << "It's a Palindrome";
    }
    else {
        cout << "It's not a Palindrome";
    }
    return 0;
}
