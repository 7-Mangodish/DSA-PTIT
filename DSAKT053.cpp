#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int f[1005][1005];
int main(){
	int t;
	cin >>t;
	while(t--){
		memset(f, 0, sizeof f);
		string s1,s2;
		cin >>s1;
		cin >>s2;
		int l1=s1.size(), l2=s2.size();
		s1="0"+s1;
		s2="0"+s2;
		for(int i=1; i<=l1; i++){
			for(int j=1; j<=l2; j++){
				if(s1[i]==s2[j]){
					f[i][j]=1+f[i-1][j-1];
				}
				else
					f[i][j]=max(f[i-1][j],  f[i][j-1]);
			}
		}
		cout <<f[l1][l2] <<endl;
	}
}
