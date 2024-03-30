#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

void sol(string str){
	stack <char> s1;
	for(char c: str){
		if(c!=')'){
			s1.push(c);
		}
		else{
			bool ok=true;
			stack <char> s2; // luu tam thoi
			while(!s1.empty() && s1.top()!='('){
				s2.push(s1.top());
				s1.pop();
			}
			s1.pop(); // Bo dau ngoac (
			if(!s1.empty() && s1.top()=='-')
				ok=false;
			while(!s2.empty()){
				char t=s2.top(); s2.pop();
				if(isalpha(t))
					s1.push(t);
				else{
					if(!ok){// Co dau tru truoc ngoac
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
	vector <char> ans;
	while(!s1.empty()){
		ans.push_back(s1.top());
		s1.pop();
	}
	for(int i=ans.size()-1; i>=0; i--)
		cout<<ans[i];
	cout <<endl;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		sol(s);
	}
}
