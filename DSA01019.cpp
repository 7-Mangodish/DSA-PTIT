#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

// 0:a, 1:h
using namespace std;
int a[20], n; bool ok=true;
void ktao(){
	for(int i=0; i<=n; i++)
		a[i]=0;
}

void sinh(){
	int i=n;
	while(i>=1 && a[i]==1){
		a[i]=0,i--;
	}
	if(i==0)
		ok=false;
	else
		a[i]=1;
}

bool chk(){
	if(a[n]==1 || a[1]==0)
		return false;
	for(int i=1; i<n; i++){
		if(a[i]==1 && a[i+1]==1)
			return false;
	}
	return true;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		ktao();
		while(ok){
			if(chk()){
				for(int i=1; i<=n; i++){
					if(a[i]==1)
						cout <<"H";
					else
						cout <<"A";
				}
				cout <<endl;
			}
			sinh();
		}
		ok=true;
	}
}
