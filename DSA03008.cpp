#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
vector <pair<int,int> >v;

bool cmp(pair<int,int> a, pair<int, int> b){
	return a.second <b.second;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int s[n],f[n];
		for(auto &x:s)
			cin >>x;
		for(int &x:f)
			cin >>x;
		for(int i=0; i<n; i++){
			v.push_back({s[i],f[i]});
		}
		sort(v.begin(),v.end(), cmp);
		int cnt=1, max=v[0].second;
		for(int i=1; i<n; i++){
			if(max<v[i].first){
				++cnt;
				max=v[i].second;
			}
		}
		cout <<cnt <<endl;
		v.clear();
	}
}
