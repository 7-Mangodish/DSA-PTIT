#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int n,k;
int a[50];
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n >>k;
		set <int> s;
		for(int i=1; i<=k; i++){
			cin >>a[i];
			s.insert(a[i]);
		}
		int i=k;
		while(a[i]==n-k+i){
			--i;
		}
		if(i==0){
			cout <<k <<endl;
		}
		else{
			a[i]++;
			for(int j=i+1; j<=n; j++){
				a[j]=a[j-1]+1;
			}
			int cnt=0;
			for(int i=1; i<=k; i++){
				if(s.find(a[i])!=s.end())
					++cnt;	
			}
			cout <<k-cnt <<endl;
		}
	}
}
