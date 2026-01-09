#include <iostream>
#include <stdio.h>

using namespace std;

int cnt = 0;
void nName(int n, int dup)
{

    if (cnt == n)
    {
        return;
    }
    // cout << "parv";
    // cout << cnt + 1;
    cout << dup;
    cout << endl;

    cnt++;
    nName(n, dup - 1);
}

void revRec(vector<int> &v, int low, int high)
{
    if (low >= high)
    {
        return;
    }

    swap(v[low], v[high]);
    revRec(v, low + 1, high - 1);
}
int main()
{
    // int n = 5;
    // int dup = n;
    // nName(n, dup);

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3); 
    v.push_back(4);

    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
    int high = v.size() - 1, low = 0;
    revRec(v, low, high);
    for (auto it : v)
    {
        cout << it << " ";
    }
    return 0;
}