#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int m,n;
int a[105][105];
int cnt=0;
void ktao(){
	for(int i=0; i<m; i++){
		for(int j=0; j<n; j++)
			cin >>a[i][j];    
	}
}

void Try(int r, int c){
	if(r <m-1){
		Try(r+1,c);
	}
	if(c<n-1){
		Try(r,c+1);
	}
	if(r==m-1 && c==n-1)
		++cnt;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		memset(a,0,sizeof(a));
		cin >>m >>n;
		ktao();
		Try(0,0);
		cout <<cnt <<endl;
		cnt=0;
	}
}
/*
2
2  3

1  2  3 

4  5  6
2  2

1  2 

3  4
*/
