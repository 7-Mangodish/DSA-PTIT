#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int n,k;
int a[100005]; // luu gia tri nhi phan
int b[100005];
bool ok=true;
int cnt=0;
void ktao(){
	for(int i=1; i<=n; i++)
		cin >>b[i];
	for(int i=1; i<=n; i++)
		a[i]=0;
	
}
void sinh(){
	int i=n;
	while(a[i]==1 && i >0){
		a[i]=0;
		--i;
	}
	if(i==0){
		ok=false;
		return;	
	}

	a[i]=1;
}
bool chk(){
	int sum=0;
	for(int i=1; i<=n; i++){
		if(a[i]==1)
			sum+=b[i];
	}
	if(sum==k)
		return true;
	return false;
}
int main(){
	cin >>n >>k;
	ktao();
	while(ok){
		if(chk()){
			for(int i=1; i<=n; i++){
				if(a[i]==1)
					cout <<b[i] <<" ";
			}
			++cnt;
			cout <<'\n';
		}	
//		for(int i=1; i<=n; i++)
//			cout <<a[i];
		sinh();
	}
	cout <<cnt;
}
