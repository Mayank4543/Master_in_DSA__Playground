#include <iostream>
using namespace std;
char toLowerCase(char name)
{

    if (name >= 'a' && name <= 'z')
    {
        return name;
    }
    else
    {
        char temp = name - 'A' + 'a';
        return temp;
    }
}
bool checkpalindrome(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (toLowerCase(name[s]) != toLowerCase(name[e]))
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}
void reversestring(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        swap(name[s++], name[e--]);
    }
}
int getlength(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char ch[20];
    cout << "Enter your name :" << endl;
    cin >> ch;
    cout << "Your name is"
         << " ";
    cout << ch << endl;
    int len = getlength(ch);
    cout
        << "The length of string:"
        << " " << len << endl;
    // reversestring(ch, len);
    // cout << "Reversed String:";
    // cout << ch << endl;
    cout << " The string is palindrome or not :" << checkpalindrome(ch, len);
    cout << " Character is at lowercase:" << toLowerCase('M');
    return 0;
}