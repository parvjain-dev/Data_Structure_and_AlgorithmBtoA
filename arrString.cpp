#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int num =3;
    string str = "";
    int temp;
    while (num > 0)
    {
        cout<<temp<<"--" <<endl;
        cout << num << "->" << endl;
        temp = num % 2;
        str =str+ to_string(temp);
        num = num / 2;
    }
    cout << str;
    return 0;
}