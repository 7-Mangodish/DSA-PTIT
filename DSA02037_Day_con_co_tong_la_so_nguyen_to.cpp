#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int n,a[20], s=0;
vector<int> v;
multiset <vector <int> > ans;
bool chk(){
	if(s<2)
		return false;
	for(int i=2; i<=sqrt(s); i++){
		if(s%i==0)
			return false;
	}
	return true;
}

void ktao(){
	cin >>n;
	for(int i=1; i<=n; i++){
		cin >>a[i];
	}
	sort(a+1,a+n+1, greater<int>());
}

void Try(int i){
	for(int j=i+1; j<=n; j++){
		s+=a[j];
		v.push_back(a[j]);
		if(chk())
			ans.insert(v);
		if(i<n)
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
			for(auto i:x)
				cout <<i <<" ";
			cout <<endl;
		}
		ans.clear();
		v.clear();
		s=0;
	}
}
