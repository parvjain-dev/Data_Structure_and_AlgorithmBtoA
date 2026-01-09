#include <bits/stdc++.h>
#include <iostream>

using namespace std;


vector<int> getPascalRow(int row){
    vector <int> res;
    int ans=1;
    res.push_back(ans);
    for(int i=1 ; i<row; i++){
        ans = ans*(row-i);
        ans = ans/i;
        res.push_back(ans);
    }
    return res;
}

vector<vector<int>> getPascal(int row)
{
    vector<vector<int>> res(row);
    // vector<int> res;

    int ans = 1;
    //
    res[0].push_back(ans);
    for(int j=1; j<row; j++){
        res[j].push_back(ans);
        for (int i = 0; i < j; i++)
        {
            ans = ans * (j - i);
            ans = ans / (i+1);
            res[j].push_back(ans);
        }
        // cout<<endl;
        ans=1;
        
    }

    return res;
}

void printAllCombinationfor3(vector<int> a){
    int n = a.size();
    for (int i = 0; i <n; i++)
    {
        for(int j=i+1; j<n; j++){
          
            for(int k=j+1; k<n; k++){
                cout<<a[i]<<" "<<a[j]<<a[k];
            }
            cout << endl;
        }
       
    }
    
}

int pascalTriangleNcR(int row, int col){
    int ans=1;
     for(int i=1; i<=col-1; i++){
        ans = ans*(row-i);
        ans= ans/i;
        // cout<<ans<<" "<<row-i<<" "<<i<<endl;
     }
     return ans;
}
int main()
{
    // vector<int> ans = getPascalRow(6);
    // for(auto it: ans){
    //     cout<<it<<" ";
    // }

    // int ele = pascalTriangleNcR(6,3);
    // // cout<<ele;

    // vector<vector<int>> res = getPascal(6);

    // for(int i =0; i<res.size(); i++){
    //     for (int j = 0; j < res[i].size(); j++)
    //     {

    //         cout << res[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    

    vector<int> res;
    res.push_back(-1);
    res.push_back(0);
    res.push_back(2);
    res.push_back(1);
    // res.push_back(-1);
    // res.push_back(-4);
    printAllCombinationfor3(res);

    return 0;
}