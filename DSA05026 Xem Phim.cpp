#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int f[105][25005]; //f[i][j];: khoi luong toi da co the tao duoc khi xet i con bo
int main(){
	int n,c;
	cin >>c >>n;
	int a[n+1];
	for(int i=1; i<=n; i++)
		cin >>a[i];
	memset(f, 0, sizeof f);
	for(int i=1; i<=n; i++){
		for(int j=1; j<=c; j++){
			if(j>=a[i]){
				f[i][j]=max(a[i]+f[i-1][j-a[i]], f[i-1][j]);
			}
			else
				f[i][j]=f[i-1][j];
		}
	}
	cout <<f[n][c];
}
