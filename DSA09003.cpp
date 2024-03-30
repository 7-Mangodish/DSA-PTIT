#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int v,e;
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>v >>e;
		vector <int> vt[1003];
		for(int i=0; i<e; i++){
			int x,y;
			cin >>x >>y;
			vt[x].push_back(y);
		}
		for(int i=1; i<=v; i++){
			cout <<i <<':';
			for(auto x:vt[i])
				cout <<" "<<x;
			cout <<endl;
		}
	}
}