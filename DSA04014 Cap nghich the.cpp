#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
ll ans=0;
void Merge(ll a[], int l, int m, int r){
	vector <ll> v1(a+l, a+m+1);
	vector <ll> v2(a+m+1, a+r+1);
	
	int ind=l, i=0, j=0;
	while(i<v1.size() && j<v2.size()){
		if(v1[i] <=v2[j]){
			a[ind++]=v1[i];
			++i;
		}
		else{
			ans+=(v1.size() -i);
			a[ind++]=v2[j];
			++j;
		}
	}
	while(i<v1.size()){
		a[ind++]=v1[i];
		++i;
	}
	while(j<v2.size()){
		a[ind++]=v2[j];
		++j;
	}
}

void Merge_sort(ll a[], int l, int r){
	if(l>=r)
		return ;
	int m=(l+r)/2;
	Merge_sort(a, l, m);
	Merge_sort(a, m+1, r);
	Merge(a, l, m, r);
}

int main(){
	int t;
	cin >>t;
	while(t--){
		ans=0;
		int n;
		cin >>n;
		ll a[n];
		for(ll &x:a)
			cin >>x;
		Merge_sort(a, 0, n-1);
		cout <<ans;
		cout <<endl;
	}
}
