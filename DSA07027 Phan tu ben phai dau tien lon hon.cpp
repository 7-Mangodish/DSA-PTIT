#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
stack <int> s;

int sol(int n){
	while(!s.empty()){
		if(s.top()>n)
			return s.top();
		s.pop();
	}
	return -1;
}
void Case(){
	int n;
	cin >>n;
	int a[n];
	int d[n];
	while(!s.empty())
		s.pop();
	
	for(int i=0; i<n; i++)
		cin >>a[i];

	for(int i=n-1; i>=0; i--){
		d[i]=sol(a[i]);
		s.push(a[i]);
	}
	
	for(auto x:d)
		cout <<x <<" ";
	cout <<endl;
}

int main(){
	int t;
	cin >>t;
	while(t--){		
		Case();
	}
}
