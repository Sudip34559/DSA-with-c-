#include <iostream>
using namespace std;

void tringle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << "\n";
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            cout << "* ";
        }
    }
}

void numberTriangle(int n)
{
    for (int i = 1; i <= n; i++)
    {
        cout << "\n";
        for (int j = 1; j <= n - i; j++)
        {
            cout << "  ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout << k << " ";
            for (int l = i - 1; 0 < l; l--)
            {
                if (k == i)
                    cout << l << " ";
            }
        }
    }
}

void invertTriangle(int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        cout << "\n";
        for (int j = 1; j <= i; j++)
        {
            cout << "  ";
        }
        for (int k = 2 * n - (i * 2 + 1); 0 < k; k--)
        {
            cout << "* ";
        }
    }
}

int main()
{
    int n = 5;
    tringle(n);
    cout << endl;
    numberTriangle(n);
    cout << endl;
    invertTriangle(n);
    cout << endl;
}