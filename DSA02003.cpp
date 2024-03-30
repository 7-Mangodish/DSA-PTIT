#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int n,a[12][12];
string s="";// luu phuong an
bool ok=false;


void ktao(){
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			cin >>a[i][j];
		}
	}
}
void Try(int r, int c){
	if(a[r][c]==0)
		return ;
	if(r<n-1 && a[r+1][c]==1){ // xet theo chieu doc
		s+='D';
		Try(r+1,c);
	}
	if(c<n-1 && a[r][c+1]==1){ // xet theo chieu ngang
		s+='R';
		Try(r,c+1);
	}
	if(r==n-1 && c==n-1){
		ok=true;
		cout <<s <<" ";
	}
	s.erase(s.begin()+(s.length()-1) ); // khi ket thuc 1 phuong an thi loai bo phan tu cuoi
}
int main(){
	int t;
	cin >>t;
	while(t--){
		memset(a,0,sizeof(a));
		cin >>n;		
		ktao();
		Try(0,0);
		if(!ok)
			cout <<-1;
			
		ok=false;		
		s.clear();
		cout <<endl;
	}
}
