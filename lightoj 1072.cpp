#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    double R,n;
    for(int i=1;i<=t;i++)
    {
        cin>>R>>n;
        cout<<fixed;
        cout<<"Case "<<i<<": "<<setprecision(6)<<R/(sqrt(2/(1-cos(360/n*3.141592653589793238462643383279/180)))+1)<<endl;
    }
}
