#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
string tmp="";
char c[20];
set<string> s;
int n;
bool used[20];

void ktao(){
	cin >>n;
	s.clear();
	for(int i=1; i<=n; i++){
		cin >>c[i];
	}	
	memset(used, false, sizeof false);
}
void Try(int k){
	for(int i=k+1; i<=n; i++){
		if(!used[i]){
			tmp+=c[i];
			used[i]=true;
			s.insert(tmp);
			Try(i);
			tmp.pop_back();
			used[i]=false;
		}
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){		
		ktao();
		Try(0);
		for(auto x:s)
			cout <<x <<" ";
		cout <<endl;
	}
}
