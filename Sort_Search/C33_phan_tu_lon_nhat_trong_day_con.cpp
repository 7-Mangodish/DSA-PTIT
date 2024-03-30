#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n,k;
			cin >>n >>k;
			int a[n];
			for(int &x:a)
				cin >>x;
			map <int,int> mp;
			map <int,int> ::reverse_iterator it=mp.rbegin();
			for(int i=0; i<k; i++)
				{
					mp[a[i]]++;
				}
			cout <<(*it).first <<" ";
			for(int i=k; i<n; i++)
				{
					mp[a[i-k]]--;
					if(mp[a[i-k]] <=0)
						mp.erase(a[i-k]);
					mp[a[i]]++;
					cout <<(*it).first <<" ";
				}
			cout <<endl;
		}
}
