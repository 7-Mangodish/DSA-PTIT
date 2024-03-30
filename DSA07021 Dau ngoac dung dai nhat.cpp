#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
	return a.first <b.first;
}
int sol(string str){
	stack <int> s;
	vector <pair<int,int>> v;
	for(int i=0; i<str.size(); i++){
		if(str[i]=='(')
			s.push(i);
		else{
			if(!s.empty()){
				v.push_back({s.top(),i});
				s.pop();
			}
		}
	}
	if(v.size()==0)
		return 0;
	sort(v.begin(),v.end(),cmp);
	int d[v.size()];
	// do dai cua cac cap dau ngoac
	for(int i=0; i<v.size(); i++){
		d[i]=v[i].second-v[i].first+1;
	}
	for(int i=0; i<v.size()-1; i++){
		if(v[i].second+1 ==v[i+1].first){
			d[i+1]+=d[i];
		}
	}
	return *max_element(d, d+v.size());
}
int main(){
	int t;
	cin >>t;
	while(t--){
		string str;
		cin >>str;
//		sol(str);
		cout <<sol(str) <<endl;
	}
}
