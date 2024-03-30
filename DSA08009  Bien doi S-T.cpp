#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int d[100000];
set<int> se; // Luu cac phan tu da duyet

int sol(int s, int t){
	queue<int> q;
	q.push(s);
	d[s]=0;
	while(!q.empty()){
		int tp=q.front(); q.pop();
		if(tp==t)
			return d[t];
		if(!se.count(tp-1) && tp-1 >0){
			se.insert(tp-1);
			d[tp-1]=d[tp]+1;
			q.push(tp-1);
		}
		if(!se.count(tp*2) && tp*2 <=t+5){
			se.insert(tp*2);
			d[tp*2]=d[tp]+1;
			q.push(tp*2);
		}
	}
	return -1;	
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int s,t;
		cin >>s >>t;
		memset(d, 0, sizeof d);
		se.clear();
		cout <<sol(s,t) <<endl;
	}
}
