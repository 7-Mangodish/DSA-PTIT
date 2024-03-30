#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int n,k;
int a[22];
bool ok=false;
void ktao(){
	for(int i=1; i<=k; i++)
		a[i]=i;
}

void sinh(){
	int i=k;
	while(a[i]==n-k+i && i>0){
		--i;
	}
	if(i==0)
		ok=true;
	a[i]++;
	for(int j=i+1; j<=k; j++)
		a[j]=a[j-1]+1;
}
bool chk(int a){
	if(a<2)
		return false;
	for(int i=2; i<=sqrt(a); i++){
		if(a%i==0)
			return false;
	}
	return true;
}

int main(){
	cin >>n >>k;
	int cnt=1;
	ktao();
	while(!ok){
		if(chk(cnt)){
			cout <<cnt <<':';
			for(int i=1; i<=k; i++)
				cout <<" " <<a[i];
			cout <<endl;
		}
		++cnt;
		sinh();
	}
}
