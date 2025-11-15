#include <iostream>
#include <cmath>
using namespace std;

void decimalToBinary(int number)
{
    int binary = 0;
    int place = 0;

    while (number > 0)
    {
        int r = number % 2;
        binary += r * pow(10, place);
        place++;
        number /= 2;
    }

    cout << "decimal to binary: " << binary;
}

void binaryToDecimal(int number)
{
    int decimal = 0;
    int place = 0;
    while (number > 0)
    {
        int r = number % 10;
        decimal += r * pow(2, place);
        place++;
        number /= 10;
    }
    cout << "bimary to decimal: " << decimal;
}

void reverceNumber(int number)
{
    int original = number;
    int reversed = 0;
    int place = 0;
    while (number > 0)
    {
        int r = number % 10;
        reversed += r * pow(10, place);
        place++;
        number /= 10;
    }
    cout << original << "<=>" << reversed;
}
int main()
{

    // decimalToBinary(10);
    // cout << endl;
    // binaryToDecimal(101);
    // cout << endl;
    reverceNumber(16786);
    cout << endl;
}