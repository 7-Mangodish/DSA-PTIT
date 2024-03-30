#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

stack <int> s1;
stack <int> s2;

int Gen(int n){
	while(!s1.empty()){
		if(s1.top()>n)
			return s1.top();
		s1.pop();
	}
	return -1;
}

int Less(int n){
	while(!s2.empty()){
		if(s2.top()<n)
			return s2.top();
		s2.pop();
	}
	return -1;
}
int main(){
	int n;
	cin >>n;
	int a[n];
	int d[n], e[n];
	for(int i=0; i<n; i++){
		cin >>a[i];
	}
	for(int i=n-1; i>=0; i--){
		d[i]=Gen(a[i]);
		s1.push(a[i]);
	}
	for(int i=n-1; i>=0; i--){
		if(d[i]==-1)
			e[i]=-1;
		else
			e[i]=Less(d[i]);
		s2.push(a[i]);
	}
	for(auto x:e)
		cout <<x <<" ";
}
