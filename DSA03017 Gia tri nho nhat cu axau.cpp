#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
#define ic pair <int, char>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int k;
		cin >>k;
		// luu tan suat xuat hien cua cac ki tu vao queue,
		// lay phan tu co tan suat lon nhat ra va giam di 1, roi lai day vao queue
		map <char, int> mp;
		priority_queue<ic> q;
		string s;
		cin >>s;
		for(auto x:s){
			mp[x]++;
		}
		for(pair<char, int> x:mp){
			q.push({x.second, x.first});
		}
		
		while(k--){
			ic t=q.top(); q.pop();
			t.first--;
			q.push(t);
		}
		
		int ans=0;
		while(!q.empty()){
			ic t=q.top(); q.pop();
			ans+=t.first*t.first;
		}
		cout <<ans <<endl;
	}
}
