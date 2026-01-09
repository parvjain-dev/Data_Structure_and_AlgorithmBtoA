#include <stdio.h>
#include <iostream>

using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void print2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void print3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void print4(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}

void print5(int n)
{

    for (int i = 1; i <= n; i++)
    {
        // space
        for (int j = 0; j < n - i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << "*";
        }
        // space
        // for (int j = 0; j < n - i; j++)
        // {
        //     cout << " ";
        // }
        cout << endl;
    }
}

void print6(int n)
{

    for (int i = 0; i < n; i++)
    {
        // space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 0; j < (2 * n - 1) - 2 * i; j++)
        {
            cout << "*";
        }
        // space
        // for (int j = 0; j < n - i; j++)
        // {
        //     cout << " ";
        // }
        cout << endl;
    }
}

void print7(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        if (i < n)
        {
            for (int j = 0; j <= i; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            // cout<<i<<" ";
            for (int j = 0; j < (2 * n) - i - 1; j++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

void print8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i % 2 == 0 && j % 2 != 0) || (i % 2 != 0 && j % 2 == 0))
            {
                cout << 0 << " ";
            }
            else
            {
                cout << 1 << " ";
            }
        }

        cout << endl;
    }
}

void print9(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // number
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        // spaces
        for (int j = 0; j < 2 * (n - i); j++)
        {
            cout << " ";
        }
        // numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
    }
}

void print10(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
}

void print11(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << char(i + 65) << " ";
        }
        cout << endl;
    }
}

void print12(int n)
{
    for (int i = 0; i < n; i++)
    {
        int count = i + 1;
        // space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // char
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j < i + 1)
            {
                cout << char(j + 65);
            }
            else
            {
                cout << char(count + 63);
                count--;
            }
        }
        // USE : BREAKPOINT APPROACH AS WELL
        cout << endl;
    }
}

void print13(int n)
{
    int count = n;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= i; j++)
        {
            cout << char(count + 63 + j) << " ";
        }
        count--;

        cout << endl;
    }
}

void print14(int n)
{

    for (int i = 1; i <= n; i++)
    {
        // part1
        // starts

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < 2 * i - 1; j++)
        {
            cout << " ";
        }
        // starts
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    for (int k = 1; k <= n; k++)
    {
        // part2
        // starts

        for (int j = 1; j <= k; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < 2 * (n - k); j++)
        {
            cout << " ";
        }
        // starts
        for (int j = 1; j <= k; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}

void print15(int n)
{
    // part 1

    for (int k = 1; k <= n; k++)
    {
        // part2
        // starts

        for (int j = 1; j <= k; j++)
        {
            cout << "*";
        }
        // spaces
        for (int j = 0; j < 2 * (n - k); j++)
        {
            cout << " ";
        }
        // starts
        for (int j = 1; j <= k; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
    // part 2

    for (int i = 0; i < n - 1; i++)
    {
        for (int k = 0; k < (n - 1) - i; k++)
        {
            cout << "*";
        }
        for (int k = 0; k < 2 * (i + 1); k++)
        {
            cout << " ";
        }
        for (int k = 0; k < (n - 1) - i; k++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print16(int n)
{
    for (int j = 0; j < n; j++)
    {
        cout << "*";
    }
    cout << endl;
    for (int i = 1; i <= n - 2; i++)
    {
        cout << "*";
        for (int j = 0; j < n - 2; j++)
        {
            cout << " ";
        }

        cout << "*";
        cout << endl;
    }

    for (int j = 0; j < n; j++)
    {
        cout << "*";
    }
    cout << endl;
}

void print16P2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((i > 0 && i < n - 1) && (j > 0 && j < n - 1))
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }
        cout << endl;
    }
}

void print17(int n)
{
    for (int i = 0; i < 2 * n - 1; i++)
    {
        for (int j = 0; j < 2 * n - 1; j++)
        {
            int top = i;
            int bottom = (2 * n - 2) - i;
            int left = j;
            int right = (2 * n - 2) - j;
            cout << n - min(min(top, bottom), min(right, left));
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    // pattern1(n);
    // print3(n);
    print17(n);
}