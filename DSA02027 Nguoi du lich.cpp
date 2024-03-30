#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int n;
int a[20][20], cmin=mod;
int x[20]; // Luu cau hinh
int s=0, ans=mod;
bool used[30];
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
	used[1]=true;
}

void Try(int k){
	for(int i=1; i<=n; i++){
		if(!used[i]){
			x[k]=i;
			s+=a[i][x[k-1]];	
			used[i]=true;
			if(k<n){
				if(s+(n-k+1)*cmin <ans)
					Try(k+1);
			}
			else{
				ans=min(ans, s+a[i][1]);
			}
			s-=a[i][ x[k-1] ];
			used[i]=false;
		}
	}
}

int main(){
	ktao();
	Try(2);
	cout <<ans;
}
