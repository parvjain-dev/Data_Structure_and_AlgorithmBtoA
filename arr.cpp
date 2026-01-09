#include <iostream>
#include <bits/stdc++.h>
#include <set>
#include <map>
using namespace std;

void rotateByOne(vector<int> &v)
{
    int firstEele = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        v[i - 1] = v[i];
    }
    v[v.size() - 1] = firstEele;
}
void rotateByK(vector<int> &v, int k)
{
    k = k % v.size();
    vector<int> temp(k);
    for (int i = 0; i < k; i++)
    {
        temp[i] = v[i];
    }
    for (int i = k; i < v.size(); i++)
    {
        v[i - k] = v[i];
    }
    int index = 0;
    for (int i = v.size() - k; i < v.size(); i++)
    {
        v[i] = temp[i - (v.size() - k)];
        // index++;
    }
}

void unionFind(vector<int> &v1, vector<int> &v2, vector<int> &res)
{
    set<int> st;
    for (int i = 0; i < v1.size(); i++)
    {
        st.insert(v1[i]);
    }
    for (int i = 0; i < v2.size(); i++)
    {
        st.insert(v2[i]);
    }
    for (auto it : st)
    {
        res.push_back(it);
    }
}
void unionFindOptimized(vector<int> &v1, vector<int> &v2, vector<int> &res)
{
    int i = 0;
    int j = 0;
    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] <= v2[j])
        {
            if (res.empty() || v1[i] != res.back())
            {
                res.push_back(v1[i]);
            }
            i++;
        }
        else
        {
            if (res.empty() || v2[j] != res.back())
            {
                res.push_back(v2[j]);
            }
            j++;
        }
    }
    while (i < v1.size())
    {

        if (res.empty() || v1[i] != res.back())
        {
            res.push_back(v1[i]);
        }
        i++;
    }
    while (j < v2.size())
    {
        if (res.empty() || v2[j] != res.back())
        {
            res.push_back(v2[j]);
        }
        j++;
    }
}

void intersectionArray(vector<int> &v1, vector<int> &v2, vector<int> &res)
{
    map<int, int> mp;
    for (int i = 0; i < v1.size(); i++)
    {
        mp[v1[i]]++;
    }

    for (int i = 0; i < v2.size(); i++)
    {
        if ((mp[v2[i]] > 0) && mp.find(v2[i]) != mp.end() )
        {
            
    
                res.push_back(v2[i]);
                mp[v2[i]]--;
        }
    }
}

void intersectionArrayTwoPointer(vector<int> &v1, vector<int> &v2, vector<int> &res)
{
   int i =0; 
   int j =0;
   while(i<v1.size() && j<v2.size()){
    if(v1[i]<v2[j]) i++;
    else if(v1[i]== v2[j]){
        res.push_back(v1[i]);
        i++,j++;

    }
    else j++;
   }
}

int longestSubarrayPositive(vector<int> &arr, int k){
    int i =0,j=0, sum=0, len=0;
    while(j<arr.size()){
        sum+= arr[j];
        if(sum==k){
           len= max(len,j-i+1);

        }
        while(sum>k){
            sum-= arr[i];
            i++;
        }
            j++;
    }
    return len;
}
int main()
{
    vector<int> v1;
    int n1;
    cout << "Enter the size of an array : ";
    cin >> n1;
    v1.resize(n1);
    cout << "Enter the element in v1 : ";
    for (int i = 0; i < n1; i++)
    {
        cin >> v1[i];
    }

    int ans = longestSubarrayPositive(v1,6);
    cout<<ans;
    // vector<int> v2;
    // int n2;
    // cout << "Enter the size of an array : ";
    // cin >> n2;
    // v2.resize(n2);
    // cout << "Enter the element in v2 : ";
    // for (int i = 0; i < n2; i++)
    // {
    //     cin >> v2[i];
    // }

    // vector<int> res;
    // // unionFindOptimized(v1,v2,res);
    // intersectionArrayTwoPointer(v1, v2, res);

    // for (auto it : res)
    // {
    //     cout << it << " ";
    // }
    return 0;
}