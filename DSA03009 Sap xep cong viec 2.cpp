#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
bool cmp(ii a, ii b){
	return a.second >b.second;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int dl=0;
		vector <ii> v;
		for(int i=0; i<n; i++){
			int x, y, z;
			cin >>x >>y >>z;
			v.push_back({y,z});
			dl=max(dl, y);
		}
	// sap xet theo benefit;
	// deadline =n -> co the hoan thanh trong khoang thoi gian tu 1 ->n
	// uu tien lam trong ngay gan voi deadline nhat
		sort(v.begin(), v.end(), cmp);
		
		int ans=0;
		vector <int> res;
		bool used[dl+1];
		memset(used, false, sizeof used);
		for(auto x:v){
			int ind=x.first;
			while(ind >0){
				if(!used[ind])
					break;
				--ind;
			}
			// truong hop khong co ngay nao du de lam
			if(ind==0)
				continue;
			used[ind]=true;
			res.push_back(x.first);
			ans+=x.second;
		}
		cout <<res.size() <<" "<<ans <<endl;
	}
}
