#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

ll TestCase(){
	ll n;
	cin >>n;
	queue<string> q;
	q.push("1");
	int cnt=0;
	while(stoll(q.front())<=n && !q.empty()){
		string t=q.front(); q.pop();
		++cnt;
		q.push(t+"0");
		q.push(t+"1");
	}
	return cnt;	
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cout <<TestCase() <<endl;
	}
}
