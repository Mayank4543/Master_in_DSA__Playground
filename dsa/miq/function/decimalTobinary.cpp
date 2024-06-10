#include <iostream>
#include <cmath>
using namespace std;
int decimalToBinary(int num)
{
    int binary = 0;
    int i = 0;
    while (num != 0)
    {
        int bit = num % 2;
        binary = bit * pow(10, i++) + binary;
        num = num / 2;
    }
    return binary;
}
int binaryToDecimal(int num)
{
    int decimal = 0;
    int i = 0;
    while (num != 0)
    {
        int digit = num % 10;
        decimal = digit * pow(2, i++) + decimal;
        num = num / 10;
    }
    return decimal;
}
int main()
{
    int num;
    cout << "Enter a number :";
    cin >> num;
    // int binary = decimalToBinary(num);
    // cout << " The decimal to  Binary is :" << binary;
    int decimal = binaryToDecimal(num);
    cout << " The  Binary to decimal is :" << decimal;
    return 0;
}