#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int sol(string s){
	stack <int> st;
	for(int i=0; i<s.size(); i++){
		if(isdigit(s[i])){
			string tmp(1,s[i]);
			st.push(stoi(tmp));
		}
		else{
			int op1=st.top(); st.pop();
			int op2=st.top(); st.pop();
			int tmp;
			if(s[i]=='+')
				tmp=op2+op1;
			if(s[i]=='-')
				tmp=op2-op1;
			if(s[i]=='*')
				tmp=op2*op1;
			if(s[i]=='/')
				tmp=op2/op1;
			st.push(tmp);
		}
	}
	return st.top();
}
int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		cout <<sol(s) <<endl;
	}
}