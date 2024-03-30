#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
// vi tri ma quan hau dung se quan li duong cheo chinh va duong cheo phu;
// Ban co n*n se co 2*n-1 duong cheo chinh va phu;
// Khi con hau o vi tri (i,j). No se quan li duong cheo chinh (i-j+n) va duong cheo phu (i+j-1)
int n;
int col[50]={0};
int ch1[50]={0};
int ch2[50]={0};
ll cnt=0;
void Try(int i){
	for(int j=1; j<=n; j++){
		if(col[j]==0 && ch1[i-j+n]==0 && ch2[i+j-1]==0){
			col[j]=1;
			ch1[i-j+n]=1;
			ch2[i+j-1]=1;
			if(i==n)
				++cnt;
			else
				Try(i+1);
			col[j]=ch1[i-j+n]=ch2[i+j-1]=0;
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		Try(1);
		cout <<cnt <<'\n';
		cnt=0;
	}
}	
