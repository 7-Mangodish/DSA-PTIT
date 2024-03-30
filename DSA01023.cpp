#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int a[20], n, k;
bool ok=false;

void ktao(){
	for(int i=1; i<=k; i++){
		a[i]=i;
	}
}

void sinh(){
	int i=k;
	while(a[i]==n-k+i && i>0){
		i--;
	}
//	if(i==0){
//		ok=true;
//		return;
//	}
	a[i]++;
	for(int j=i+1; j<=k; j++){
		a[j]=a[j-1]+1;
	}
	
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n >>k;
		ktao();
		
		int chk[k+1];
		for(int i=1; i<=k; i++)
			cin >>chk[i];
			
		int cnt=1;
		while(!ok){
//			for(int i=1; i<=k; i++)
//				cout <<a[i] <<" ";
			int i=1;
			while(a[i] == chk[i] && i<=k)
				++i;
			if(i<=k){
				++cnt;
				sinh();
			}
			else
				ok=true;
		}
		cout <<cnt <<endl;
		ok=false;
	}
}
