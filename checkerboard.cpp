#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

int main()
{
    for(int i = 1; i<=7;i++)
    {
        for(int j = 1; j<=15; j++)
        {
            if((i+j) %2==0) {cout<<"*";}
            else{cout<<" ";}
        }
        cout<<endl;
    }
    return 0;
}