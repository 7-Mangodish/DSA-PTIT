#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int f[1005];//  f[i]: Tong chi phi toi thieu de den duoc sau co chieu dai bang i
int main(){
	int t;
	cin >>t;
	while(t--){
		int n,x,y,z;
		cin >>n >>x >>y >>z;
		fill(f, f+1005 , mod);
		f[0]=0;
		for(int i=0; i<=n+1; i++){
			f[i+1]=min(f[i+1], f[i]+x);
			if(i-1>0)
				f[i-1]=min(f[i-1], f[i]+y);
			if(i*2>0)
				f[i*2]=min(f[i*2], f[i]+z);
		}
		for(int i=1; i<=n; i++)
			cout <<f[i] <<" ";
		cout <<f[n] <<endl;
	}
}
