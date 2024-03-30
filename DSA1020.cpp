#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

void Testcase(string s){
	int i=s.length()-1;
	while(i>=0 && s[i]=='0'){
		s[i]='1'; i--;
	}
	if(i<0){
		string tmp(s.length(), '1');
		s=tmp;
	}
	else
		s[i]='0';
	cout <<s <<endl;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		Testcase(s);
	}
}
