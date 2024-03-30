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
	for(int i=1; i<=n; i++){
		cin >>a[i];
	}
	sort(a+1,a+n+1);
}

void sinh(){
	int i=n-1;
	while(a[i]>a[i+1] && i>=1)
		--i;
	if(i==0){
		ok=true;
		return;
	}
	int j=n;
	while(a[j]<a[i])
		--j;
		swap(a[i],a[j]);
	sort(a+i+1, a+1+n);
}
int main(){
	cin >>n;
	ktao();
	while(!ok){
		for(int i=1; i<=n; i++)
			cout <<a[i] <<" ";
		cout <<endl;
		sinh();
	}
}
