#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	map<long long,long long> m;
	map<long long,long long> m1;
	while(t--)
	{
	long long n;
	cin>>n;
	while(n--)
	{cin>>h;
	    // long long h;
	    // cin>>h;
	    // m[h]++;
	}
	map<long long,long long>::iterator it;
	for(it=m.begin();it!=m.end();it++)
	{
	    long long temp1=it->first;
	    long long temp2=it->second;
	    temp1+=temp2-1;
	    m.erase(it);
	    m1.insert(temp1,temp2);
	}

}
	return 0;
}