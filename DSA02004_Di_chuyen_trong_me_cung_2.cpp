#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int n,a[10][10];
string tmp="";
bool ok=false;

void ktao(){
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >>a[i][j];
		}
	}
}

void Try(int r, int c){
	a[r][c]=0;
	if(r+1 <=n && a[r+1][c]==1){
		tmp+='D';
		Try(r+1,c);
	}
	if(c-1 >=1 && a[r][c-1]==1){
		tmp+='L';
		Try(r,c-1);
	}
	
	if(c+1 <=n && a[r][c+1]==1){
		tmp+='R';
		Try(r,c+1);
	}

	if(r-1 >=1 && a[r-1][c]==1){
		tmp+='U';
		Try(r-1,c);
	}
	if(r==n && c==n){
		ok=true;
		cout <<tmp <<" ";
	}	

	a[r][c]=1;
	tmp.pop_back();
}

int main(){
	int t;
	cin >>t;
	while(t--){
//		memset(a,0,sizeof(a));
		cin >>n;
		ktao();
		if(a[1][1]==0)
			cout <<-1;
		else{
			Try(1,1);
			if(!ok)
				cout <<-1;
		}
		cout <<endl;
		ok=false;
		tmp.clear();
	}
}

/*
3
4
1 0 0 0

1 1 0 1

0 1 0 0

0 1 1 1
4
1 0 0 0

1 1 0 1

1 1 0 0

0 1 1 1

5

1 0 0 0 0

1 1 1 1 1

1 1 1 0 1

0 0 0 0 1

0 0 0 0 1
*/
