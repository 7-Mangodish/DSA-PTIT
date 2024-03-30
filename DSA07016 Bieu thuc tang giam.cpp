#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
// Tu tuong: Duyet tu dau toi cuoi
//Neu gap ki tu 'I': tang gia tri cnt them 1 va day vao stack
//Neu gap ki tu 'D': Tang cnt them 1 -> lay phan tu dau tien trong stack roi cong no vs cnt (string) -> Day nguoc no vao stack
// Day lan luot phan tu o dinh vao vector ans sau do duyet nguoc lai la ra ket qua
int main(){
	int t;
	cin >>t;
	while(t--){
		string str;
		cin >>str;
		stack<string> s;
		s.push("1");
		int cnt=1;
		for(auto x:str){
			++cnt;
			string tmp(1, (char)cnt+48);
			if(x=='I'){
				s.push(tmp);
			}
			else{
				string t=s.top(); s.pop();
				tmp+=t;
				s.push(tmp);
			}
		}
		vector <string> ans;
		while(!s.empty()){
			ans.push_back(s.top());
			s.pop();
		}
		for(int i=ans.size()-1; i>=0; i--){
			cout <<ans[i];
		}
		cout <<endl;
	}
}
