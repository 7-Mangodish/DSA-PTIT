#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
#define M 105
using namespace std;

int f[M][M][M];// xau con dai nhat khi xet den lan luot x, y, z phan tu cua xau s1 s2 s3

int main(){
	int t;
	cin >>t;
	while(t--){
		int x, y, z;
		cin >>x >>y >>z;
		string s1, s2, s3;
		cin >> s1 >>s2 >>s3;
		s1="0"+s1;
		s2="0"+s2;
		s3="0"+s3;
		memset(f, 0, sizeof f);
		for(int i=1; i<=x; i++){
			for(int j=1; j<=y; j++){
				for(int k=1; k<=z; k++){
					if(s1[i]==s2[j] && s2[j] == s3[k]){
						f[i][j][k]=f[i-1][j-1][k-1]+1;
					}
					else{
						f[i][j][k]=max({f[i-1][j][k], f[i][j-1][k], f[i][j][k-1]});
					}
				}
			}
		}
		cout <<f[x][y][z] <<endl;
	}
}
