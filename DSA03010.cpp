#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		multiset <int>s;
		for(int i=0; i<n; i++){
			int tmp; cin >>tmp;
			s.insert(tmp);
		}
		ll sum=0;
		while(s.size()>1){
			auto it=s.begin();
			auto it2=s.begin();
			++it2;
			ll tmp=*it+*it2;
			sum+=tmp;
			s.insert(tmp);
			s.erase(it);
			s.erase(it2);
		}
		cout <<sum <<endl;
	}
}
