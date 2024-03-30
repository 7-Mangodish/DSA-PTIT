#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

vector <pair<int,int>> v;
bool cmp(pair<int,int> a, pair<int,int> b){
	return a.second <b.second;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		for(int i=0; i<n; i++){
			int x,y;
			cin >>x >>y;
			v.push_back({x,y});
		}
		sort(v.begin(), v.end(), cmp);
//		for(auto x:v)
//			cout <<x.first <<" " <<x.second <<endl;
		int cnt=1;
		int tmp=v[0].second;
		for(int i=1; i<v.size(); i++){
			if(v[i].first >=tmp){
				++cnt;
				tmp=v[i].second;
//				cout <<v[i].first <<" " <<v[i].second <<endl;
			}
		}
		cout <<cnt <<endl;
		v.clear();
	}	
}
/*
1

6

5 9

1 2

3 4

0 6

5 7

8 9
*/