//
// Created by yashs on 16-02-2023.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a;
    cin>>a;
    int b=2;
    int flag=0;
    int temp=0;
    for (int i =2;i<a;i++)
    {
        flag=0;
        for(int j=2;j<i;j++){
            if(i%j==0)
            {
                flag=1;
            }

        }if(flag==0)
        {
            cout<<i<<endl;
        }
    }
}