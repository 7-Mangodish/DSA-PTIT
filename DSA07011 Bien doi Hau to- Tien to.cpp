#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		string str;
		cin >>str;
		stack <string> s;
		string ans="";
		for(auto x:str){
			if(isalpha(x)){
				string tmp(1, x);
				s.push(tmp);
			}
			else{
				string op1=s.top(); s.pop();
				string op2=s.top(); s.pop();
				string tmp=x+op2+op1;
				s.push(tmp);
			}
		}
		cout <<s.top() <<endl;
	}
}
