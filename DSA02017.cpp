#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int a[9][9];
bool c[10],d1[20],d2[20];
int sum=0, ans=0;
void ktao(){
	for(int i=1; i<=8; i++){
		for(int j=1; j<=8; j++){
			cin >>a[i][j];
		}
	}
}

void Try(int i){
	for(int j=1; j<=8; j++){
		if(c[j] && d1[i-j+8] && d2[i+j-1]){
			sum+=a[i][j];
			c[j]=d1[i-j+8]=d2[i+j-1]=false;
			if(i==8)
				ans=max(ans,sum);
			else
				Try(i+1);
			sum-=a[i][j];
			c[j]=d1[i-j+8]=d2[i+j-1]=true;			
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		memset(c,true,sizeof(c));
		memset(d1,true,sizeof(d1));
		memset(d2,true,sizeof(d2));
		ktao();
		Try(1);
		cout <<ans <<endl;
		ans=sum=0;
	}
}
/*
1

1 2 3 4 5 6 7 8

9 10 11 12 13 14 15 16

17 18 19 20 21 22 23 24

25 26 27 28 29 30 31 32

33 34 35 36 37 38 39 40

41 42 43 44 45 46 47 48

48 50 51 52 53 54 55 56

57 58 59 60 61 62 63 64
*/