#include<bits/stdc++.h>
using namespace std;

bool adult(int age){
    if (age>=18)
    {
        return 1;
    }else{
    return 0;
    }
    
    
}
void jobEligible(int age){
    if (age <18)
    {
        cout<<"Not eligible for job";
    }
    else if (age>= 18)
    {
        if (age>=55 && age<= 57)
        {
            cout<<"Eligible for job but retirement soon.";
        }else if (age >57)
        {
            cout<<"retirement time";
        } else{
            cout<<"Eligible for job";
        }
        
    }
    
    
}
 
 void days(int number){
    switch (number)
    {
    case 1:
        cout<<"Monday";
        break;
    case 2:
        cout<<"Tuesday";
        break;
    case 3:
        cout<<"Wednesday";
        break;
    default:
        break;
    }
 }


void printArray(int n,int num[] ){
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter the number "<<i+1<<" :";
        cin>>num[i];

    }
    cout<<"Array is : ";
    for (int i = 0; i < n; i++)
    {
       cout<<" "<<num[i]+23;

    }
    
    
}


int main (){
    //int = -10^9 to 10^9 , long -10^12 to 10^12 , long long = -10^18 to 10^18
    // int a;
    // cout<<"Enter the number: "; 
    // cin>>a;
    // cout<<"Your number is : "<<a;
    //datatypes 
    //int  
    // int x = 23;
    // //long
    // long x = 2345635;
    // //long long
    // long long x = 2345635;
    // //float 
    // float x = 5.4;
    // float y = 6;
    // //double
    // double y = 3.44;
    //string and getline 
    // string str;
    // cout<<"Enter the string: ";
    // cin>>str;
    // cout<<"You typed :"<<str;
    //input :parv jain
    //output : parv

    // string str2;
    // cout<<"Enter your name: ";
    // getline(cin,str2);
    // cout<<"You typed :"<<str2;
    //input Parv jain
    //output parv jain

    //char
    // char ch = 'w';
    // cout<<ch;
    // int age;
    // cout<<"Enter your age: ";
    // cin>>age;
    // bool vote_Eligible = adult(age);
    // if (vote_Eligible)
    // {
    //     cout<<"You are an adult you can vote";
    // }else{
    //     cout<<"You can't vote";
    // }
    
    // int age;
    // cout<<"Enter your age :";
    // cin>>age;
    // jobEligible(age);

    // int num = 2;
    // days(num);

    // int n = 5;
    // int arr [n];
    // printArray(n,arr);
//2D Array

    // int num[3][5];
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 5; j++)
    //     {
    //         cin>>num[i][j];
    //     }
        
    // } 


    // string str="parv";
    // int len = str.size();
    // cout<<len<<endl;
    // cout<<str[3];

    // int i = 11;
    // while (i>0){
    //     cout<<"I am parv: "<<i<<endl;
    //     i--;
    //     // if (i==6)
    //     // {
    //     //     break;
    //     // }
        
    // }
//   int i = 11;
//    do
//    {

//     cout<<"number is: "<<i<<endl; 
//         i++;
//    } while (i<=10);
   
   int a = 5, b=6;
   int mini =min(a,b);
   cout<<mini;
    return 0;
}

