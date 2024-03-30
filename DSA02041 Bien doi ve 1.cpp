#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

bool used[100005];
int d[100005];
int n;
int sol(){
	queue <int> q;
	q.push(n);
	used[n]=true;
	d[n]=0;
	while(!q.empty()){
		int t=q.front();
		q.pop();
		if(t==1)
			return d[t];
		if(t%3==0 && !used[t/3]){
			d[t/3]=d[t]+1;
			used[t/3]=true;
			q.push(t/3);
		}
		if(t%2==0 && !used[t/2]){
			d[t/2]=d[t]+1;
			used[t/2]=true;
			q.push(t/2);
		}
		if(!used[t-1]){
			d[t-1]=d[t]+1;
			used[t-1]=true;
			q.push(t-1);
		}
	}
	return -1;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		memset(used, false, sizeof used);
		cin >>n;
		cout <<sol() <<endl;
	}
}
