#include <iostream>
#include <cmath> // Include for sqrt function
using namespace std;
int factorial(int num)

{

    if (num <= 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

bool prime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
int reverse(int num)
{
    int reverse = 0;
    while (num != 0)
    {
        int digit = num % 10;
        reverse = reverse * 10 + digit;
        num = num / 10;
    }
    return reverse;
}
int setIthBit(int number, int i)
{
    return number | (1 << i);
}

int main()
{
    int num, i;
    cout << "Enter the number: ";
    cin >> num;
    cout << "Enter the bit position to set (0-indexed): ";
    cin >> i;

    // bool isPrime = prime(num);
    // if (isPrime)
    // {
    //     cout << num << " is a prime number." << endl;
    // }
    // else
    // {
    //     cout << num << " is not a prime number." << endl;
    // }
    // int fact = factorial(num);
    // cout << "The factorial of a " << num << " is " << fact;
    // int reverse1 = reverse(num);
    // cout << "The Reverse  of  " << num << " is " << reverse1;
    int result = setIthBit(num, i);
    cout << "The new number with the " << i << "th bit set is: " << result << endl;

    // for (int i = 1; i <= num; i++)
    // {
    //     if (prime(i))
    //     {
    //         cout << i << endl;
    //     }
    // }
    return 0;
}
