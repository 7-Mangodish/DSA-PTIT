#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n; cin >>n;
		int a[n];
		for(auto &x:a)
			cin >>x;
		stack <int> s;
		for(int i=0; i<n; i++){
			while(s.size()!=0  && a[s.top()] <a[i]){
				s.pop();
			}
			s.push(i);
			cout <<i-s.top()+1 <<" ";
		}
	}
}
