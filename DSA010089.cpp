#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int n,k;
int a[20];
ok=true;
void ktao(){
	for(int i=1; i<=n; i++){
		a[i]=0;
	}
}

void sinh(){
	int i=n;
	while(i >0 && a[i]==1){
		a[i]=0;
		--[i];
	}
	if(i==0){
		ok=false;
		return ;
	}
	a[i]=1;
}
int main(){
	cin >>n >>k;
	ktao();
	while(ok){
		for(int i=1; i<=n; i++)
			cout <<a[i];
		cout <<endl;
	}
}
