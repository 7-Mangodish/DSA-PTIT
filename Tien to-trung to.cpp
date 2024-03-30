#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		stack <string> st;
		for(int i=s.size()-1; i>=0; i--){
			if(isalpha(s[i])){
				string tmp(1, s[i]);
				st.push(tmp);
			}
			else{
				string op1=st.top(); st.pop();
				string op2=st.top(); st.pop();
				string tmp="("+op1+s[i]+op2+")";
				st.push(tmp);
			}
		}
		cout <<st.top() <<endl;
	}
}
