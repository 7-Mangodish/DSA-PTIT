#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int n, cmin=mod, s=0;
int res=mod; // ki luc
int a[20][20];
int x[20];
bool used[20];

void ktao(){
	cin >>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >>a[i][j];
			cmin=min(cmin, a[i][j]);
		}
	}
	memset(used, false, sizeof used);
	x[1]=1;
}

void Try(int k){
	for(int j=2; j<=n; j++){
		if(!used[j]){
			used[j]=true;
			x[k]=j;
			s+=a[j][x[k-1]];
			if(k<n){
				if(s+cmin*(n-k+1) <res){
					Try(k+1);
				}
			}
			if(k==n){
				res=min(res, s+a[x[k]][1]);
			}
			used[j]=false;
			s-=a[j][x[k-1]];
		}
	}
}

int main(){
	ktao();
	Try(2);
	cout <<res;
}
