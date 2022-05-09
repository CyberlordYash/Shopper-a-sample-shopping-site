#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
    long long int n;
    cin>>n;
    vector<long long int> v(n);
    for(long long int i=0;i<n;i++)
        cin>>v[i];
    int long long count=0;
    sort(v.begin(),v.end());
    if(n==1){cout<<v[n-1]<<endl;}
    else{
        for(long long int i=0;i<n;i++)
        {
            if(v[n-1]==v[i]){count++;}           
        }
    cout<<v[n-1]+count-1<<endl;

    }
    


    }



}
