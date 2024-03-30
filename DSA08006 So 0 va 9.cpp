#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

void TestCase(){
	int n;
	cin >>n;
	if(n==0){
		cout <<n <<endl;
		return;
	}		
	queue<string> q;
	q.push("9");
	ll ans;
	while(!q.empty()){
		string t=q.front(); q.pop();
		if(stoll(t)%n==0){
			ans=stoll(t);
			break;
		}
		q.push(t+"0");
		q.push(t+"9");
	}
	cout <<ans <<endl;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		TestCase();
	}
}
