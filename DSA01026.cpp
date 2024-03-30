#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int n;
int a[20];
bool ok=false;
void ktao(){
	for(int i=1; i<=n; i++)
		a[i]=0;
}
void sinh(){
	int i=n;
	while(a[i]==1 && i>=1){
		--i;
		a[i+1]=0;
	}
	if(i==0){
		ok=true;
		return;
	}
	a[i]=1;
}

bool chk(){
	if(a[1]!=1 || a[n]!=0)
		return false;
	for(int i=1; i<n; i++){
		if(a[i]==a[i+1] && a[i]==1)
			return false;
	}
	for(int i=1; i<=n-2; i++){
		int j=i;
		int cnt=0;
		while(a[j]==0 && j<=n){
			cnt++;
			++j;
		}
		if(cnt >3)
			return false;
	}
	return true;
}
int main(){
	cin >>n;
	ktao();
	while(!ok){
		if(chk()){
			for(int i=1; i<=n; i++){
				if(a[i]==1)
					cout <<8;
				else
					cout <<6;
			}
			cout <<endl;
		}
		sinh();
	}
}
