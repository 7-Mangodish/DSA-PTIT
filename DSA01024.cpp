#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int a[20];
bool ok=false;
void ktao(int k){
	for(int i=1; i<=k; i++){
		a[i]=i;
	}
}

void sinh(int n, int k){
	int i=k;
	while(a[i]==n-k+i && i>0)
		--i;
	if(i==0){
		ok=true;
		return;
	}
	
	a[i]++;
	for(int j=i+1; j<=k; j++){
		a[j]=a[j-1]+1;
	}
}
int main(){
	int n,k;
	cin >>n >>k;
	ktao(k);
	
	map <int,string> mp;
	set <string> s;
	for(int i=1; i<=n; i++){
		string tmp;
		cin >>tmp;
		s.insert(tmp);
	}
	int cnt=0;
	for(auto x:s){
		mp[++cnt]=x;
	}
	
	while(!ok){
		for(int i=1; i<=k; i++){
			cout <<mp[a[i]] <<" ";
		}
		cout <<endl;
		sinh(cnt,k);
	}
}
