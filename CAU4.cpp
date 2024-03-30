#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int n;
int a[10000], b[10000];
vector<int> v[10000];
bool ok=false;
void ktao(){
	for(int i=1; i<=n; i++){
		a[i]=i;
		b[i]=1;
	}
		
}

void sinh(){
	int i=n;
	while(b[i]==n && i>0){
		b[i]=1;
		--i;
	}
	if(i==0)
		ok=true;
	b[i]++;
}

int main(){
	cin >>n;
	ktao();
	int cnt=0;
	while(!ok){
		for(int i=1; i<=n; i++){
			v[cnt].push_back(b[i]);
//			cout <<b[i];
		}
		++cnt;
		sinh();
	}
	do{
		for(int i=0; i<cnt; i++){
			for(int j=1; j<=n; j++)
				cout <<char(a[j]+64);
			for(int x:v[i])
				cout <<x;
			cout <<endl;
		}	
	}
	while(next_permutation(a+1, a+n+1));
}	
