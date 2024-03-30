#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int sol(string str){
	stack <int> s;
	stack <int> ans; // ket qua
	// pos: vi tri dau ngoac truoc do
	// neu vi tri ngoac ( o dinh lon hon pos: do dai tmp +=do dai dau ngoac
	// neu nho hon thi cap nhat lai gia tri tmp
	int pos=-1;
	for(int i=0; i<str.size(); i++){
		if(str[i]=='('){
			s.push(i);
		}
		else{
			if(s.empty())
				continue;
			int t=s.top();s.pop();
			if(t>pos){
				int tmp=ans.top();ans.pop();
				tmp+=(i-t+1);
				pos=t;
			}
			else{
				ans.pop();
				ans.push(i-t+1);
				pos=t;
			}
		}
	}
	int res=0;
	while(!ans.empty()){
		res+=ans.top();
		ans.pop();
	}
	return res;
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
