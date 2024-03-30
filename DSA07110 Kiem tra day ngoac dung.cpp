#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

bool chk(string str){
	stack <char> s;
	for(auto x:str){
		if(x=='{' || x=='[' || x=='(')
			s.push(x);
		else{
			if(s.empty())
				return false;
			if(x==')' && s.top()!='(')
				return false;
			if(x=='[' && s.top()!=']')
				return false;
			if(x=='{' && s.top()!='}')
				return false;
			s.pop();
		}
	}
	return true;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		string str;
		cin >>str;
		if(chk(str))
			cout <<"YES\n";
		else
			cout <<"NO\n";
		cout <<endl;
	}
}
