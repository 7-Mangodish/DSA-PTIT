#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)
/*
8 3

2 4 4 3 5 1 3 4
*/
using namespace std;

int n,k,size;
int a[25];
bool ok=false;

void ktao(){
	set <int> s;
	for(int i=1; i<=n; i++){
		int tmp;
		cin >>tmp;
		s.insert(tmp);
	}
	int cnt=0;
	for(int x:s)
		a[++cnt]=x;
	size=cnt;
//	for(int i=1; i<=cnt; i++)
//		cout <<a[i] <<" ";

}

void sinh(){
	int i=k;
	while(a[i]==size-k+i && i>=1)
		--i;
	if(i==0){
		ok=true;
		return;
	}
	a[i]++;
	for(int j=i+1; j<=k; j++)
		a[j]=a[j-1]+1;
}
int main(){
	cin >>n >>k;	
	ktao();
	while(!ok){
		for(int i=1; i<=k; i++)
			cout <<a[i] <<" ";
		cout <<endl;
		sinh();
	}
}
