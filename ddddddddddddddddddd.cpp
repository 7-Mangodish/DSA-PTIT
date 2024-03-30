#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int sol(string s){
	int suml=0, sumr=0;
	for(int i=0; i<s.size(); i++){
		string tmp(1, s[i]);
		int n=stoi(tmp);
		if(i%2==0)
			suml+=n;
		else
			sumr+=n;
	}
	if(abs(sumr-suml)%11==0)
		return 1;
	return 0;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		string str;
		cin >>str;
		cout <<sol(str);
	}
}
