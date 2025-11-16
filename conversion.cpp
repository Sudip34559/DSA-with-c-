#include <iostream>
#include <cmath>
using namespace std;

int decimalToBinary(int number)
{
    int binary = 0, place = 0;

    while (number > 0)
    {
        int r = number % 2;
        binary += r * pow(10, place);
        place++;
        number /= 2;
    }

    cout << "decimal to binary: " << binary << endl;
    return binary;
}

int binaryToDecimal(int number)
{
    int decimal = 0, place = 0;
    while (number > 0)
    {
        int r = number % 10;
        decimal += r * pow(2, place);
        place++;
        number /= 10;
    }
    cout << "bimary to decimal: " << decimal << endl;
    return decimal;
}

void reverceNumber(int number)
{
    int original = number, reversed = 0, place = 0;
    while (number > 0)
    {
        int r = number % 10;
        reversed += r * pow(10, place);
        place++;
        number /= 10;
    }
    cout << original << "<=>" << reversed;
}

int decimalToOctal(int number)
{
    int octal = 0, place = 0;
    while (number > 0)
    {
        int r = number % 8;
        octal += r * pow(10, place);
        place++;
        number /= 8;
    }
    cout << "decimal to octal: " << octal << endl;
    return octal;
}

int octalToDecimal(int number)
{
    int decimal = 0, place = 0;
    while (number > 0)
    {
        int r = number % 10;
        decimal += r * pow(8, place);
        place++;
        number /= 10;
    }
    cout << "octal to decimal: " << decimal << endl;
    return decimal;
}

void binaryToOctal(int number)
{
    int decimal = binaryToDecimal(number);
    int octal = decimalToOctal(decimal);
    cout << "binary to octal: " << octal << endl;
}

int main()
{

    // decimalToBinary(10);
    // cout << endl;
    // binaryToDecimal(101);
    // cout << endl;
    // reverceNumber(16786);
    // cout << endl;
    // decimalToOctal(13);
    // cout << endl;
    binaryToOctal(1101);
    cout << endl;
}