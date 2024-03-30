#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

void sol(){
	int n;
	cin >>n;
	string ans="";
	while(n%7!=0 && n>0){
		n-=4;
		ans+="4";
	}
	if(n<0){
		cout <<-1 <<endl;
	}
	else{
		int q=n/7;
		string tmp(q,'7');
		ans+=tmp;
		cout <<ans <<endl;
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		sol();
	}
}
