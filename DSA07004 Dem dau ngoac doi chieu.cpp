#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		string str;
		cin >>str;
		stack<char> s;
		int cnt=0;
		for(auto x:str){
			if(x=='(')
				s.push(x);
			else{
				if(s.size()!=0){
					s.pop();
				}
				else
				++cnt;
			}
		}
		int ans=0;
		if(cnt%2!=0){
			ans+=2;
			--cnt;
			s.pop();
		}
		ans+=(cnt+s.size())/2;
		cout <<ans <<endl;
	}
}
