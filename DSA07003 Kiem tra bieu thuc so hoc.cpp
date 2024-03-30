#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

bool chk(string str){
	stack <char> s;
	for(int i=0; i<str.size(); i++){
		if(!isalpha(str[i]) && str[i] !=' ' && str[i]!=')'){
			s.push(str[i]);
		}
		if(str[i]==')'){
			char x=s.top();s.pop();
			if(x=='(')
				return false;
			while(s.top()!='('){
				s.pop();
			}
			s.pop();
		}
	}
	return true;
}
int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin, s);
		if(chk(s))
			cout <<"No";
		else
			cout <<"Yes";
		cout <<endl;
	}
}
/*
3
((a+b))
(a + (b)/c)
(a + b*(c-d))
*/