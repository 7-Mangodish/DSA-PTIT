#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int n,a[20], s=0;
vector <int> v;
multiset<vector <int>> ans;
void ktao(){
	cin >>n;
	for(int i=1; i<=n; i++){
		cin >>a[i];
	}
	sort(a+1,a+n+1,greater<int>());
}

void Try(int i){
	for(int j=i+1; j<=n; j++){
		s+=a[j];
		v.push_back(a[j]);
		if(s%2==1)
			ans.insert(v);
		if(j<n)
			Try(j);
		s-=a[j];
		v.pop_back();	
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ktao();
		Try(0);
		for(auto x:ans){
			for(auto i:x){
				cout <<i << " ";
			}
			cout <<endl;
		}
		ans.clear();
		s=0;
		v.clear();
	}
}
