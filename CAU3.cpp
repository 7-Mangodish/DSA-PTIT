#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
int a[40], n;
bool ok=false;
using namespace std;

void ktao(){
	memset(a,0,sizeof(a));
}

void sinh(int k){
	int i=k;
	while(a[i]==1 && i>0){
		a[i]=0;
		--i;
	}
	if(i==0)
		ok=true;
	a[i]=1;
}

bool chk(int k){
	int l=1, r=k;
	while(l<r){
		if(a[l]!=a[r])
			return false;
		++l;
		--r;
	}
	return true;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		for(int i=2; i<=n; i+=2){
			ktao();
			while(!ok){
				if(chk(i)){
					for(int j=1; j<=i; j++)
						cout <<a[j];
					cout <<" ";
				}
				sinh(i);
			}
			ok=false;
		}
		cout <<endl;
	}
}
