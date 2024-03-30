#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int a[20],n;
bool ok=false;
void ktao(){
	for(int i=1; i<=n; i++){
		a[i]=i;
	}
}

void sinh(){
	int i=n-1;
	while(a[i]>=a[i+1] && i>=1)
		--i;
	int j=n;
	while(a[j]<a[i])
		--j;
	swap(a[i],a[j]);
	sort(a+i+1,a+n+1);
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		ktao();
		
		int chk[n+1];
		for(int i=1; i<=n; i++){
			cin >>chk[i];
		}
		
		int cnt=1;
		while(!ok){
			int i=1;
			while(a[i]==chk[i] && i<=n)
				++i;
			if(i>n)
				ok=true;
			else{
				++cnt;	
				sinh();			
			}
		}
		
		cout <<cnt <<endl;
		ok=false;
		}
}
