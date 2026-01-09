#include <stdio.h>
#include <iostream>
#include <set>
#include <map>

using namespace std;

int countDigit(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = n / 10;
        count++;
    }
    return count;
}
int reverse(int x)
{
    long long revDig = 0;
    // if (x > INT_MAX || x < INT_MIN + 1)
    //     return 0;
    long long i = x;
    if (x < 0)
        i = x * -1;

    while (i > 0)
    {

        int temp = i % 10;
        revDig = revDig * 10 + temp;
        i = i / 10;
    }
    if (x < 0)
        revDig = revDig * -1;

    if (revDig > INT_MAX || revDig < INT_MIN)
        return 0;
    return (int)revDig;
}

bool ArmStrong(int n)
{
    int count = (int)log10(n) + 1;
    int answer = 0, dup = n;

    while (n > 0)
    {
        int temp = n % 10;
        answer = answer + pow(temp, count);
        n = n / 10;
    }
    if (dup == answer)
        return true;
    return false;
}

void allDivide(int n)
{
    set<int> s;

    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            s.insert(i);
            if (i != n / i)
            {
                s.insert(n / i);
            }
        }
    }
    for (auto s : s)
    {
        cout << s << " ";
    }
}

int gcd(int a, int b)
{
    if (b <= 0)
    {
        return a;
    }

    return gcd(min(a, b), max(a, b) % min(a, b));
}

int main()
{

    // int n = 7789;
    // cout << n % 10;
    // cout << endl;
    // cout << n / 10;
    int ans = gcd(14, 7);

    cout << ans;
    // allDivide(36);

    return 0;
}