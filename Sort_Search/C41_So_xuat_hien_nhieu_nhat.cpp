#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		map<int,int> mp;
		for(int i=0; i<n; i++)
			{
				int tmp;
				cin >>tmp;
				mp[tmp]++;
			}
		int max=0,
		ind;
		for(auto x:mp){
			if(x.second >max){
				max=x.second;
				ind=x.first;
			}
		}
		if(max >n/2){
			cout <<ind <<endl;
		}
		else{
			cout <<"NO\n";
		}
	}
}
