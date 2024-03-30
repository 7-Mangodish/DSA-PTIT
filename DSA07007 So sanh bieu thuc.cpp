#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
string sol(string str){
	stack <char> s1;
	for(auto c:str){
		if(c!=')'){
			s1.push(c);
		}
		else{
			bool ok=true;
			stack <char> s2;
			while(!s1.empty() && s1.top()!='('){
				s2.push(s1.top());
				s1.pop();
			}
			s1.pop(); // Xoa dau ngoac (
			if(!s1.empty() && s1.top()=='-')
				ok=false;
			while(!s2.empty()){
				char t=s2.top(); s2.pop();
				if(isalpha(t)){
					s1.push(t);
				}
				else{
					if(!ok){
						if(t=='-')
							s1.push('+');
						else
							s1.push('-');
					}
					else
						s1.push(t);
				}
			}
		}
	}
	string ans="";
	while(!s1.empty()){
		string tmp(1, s1.top());
		s1.pop();
		ans=ans+tmp;
	}
	return ans;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		string s1, s2;
		cin >>s1 >>s2;
		string tmp1=sol(s1),
		tmp2=sol(s2);
		if(tmp1==tmp2)
			cout <<"YES";
		else
			cout <<"NO";
		cout <<endl;
	}
}
