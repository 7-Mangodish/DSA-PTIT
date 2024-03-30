#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int n;

void sol(){
	queue <string> q;
	q.push("9");
	while(!q.empty()){
		string t=q.front();
		q.pop();
		if(stoll(t)%n==0){
			cout << t;
			return;
		}
		q.push(t+"0");
		q.push(t+"9");
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;	
		sol();
		cout <<endl;
	}
}
