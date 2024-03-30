#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		string s;
		cin >>s;
		map<char,int> mp;
		for(int i=0; i<s.length(); i++){
			mp[s[i]]++;
		}
		int Max=0;
		for(auto x:mp){
			Max=max(Max,x.second);
		}
		if(Max <=(s.length()/n+1))
			cout<<1;
		else
			cout <<-1;
		cout <<endl;
	}
}
