#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
bool f[1005][1005];
//f[i][j]: Xau con doi xung dai nhat tu i den j
//Neu s[i]=s[j]: 
//	Truong hop co do dai bang 2: true
//	Nguoc lai: Neu f[i+1][j-1]=true ->>true
//Xet tung xau co do dai l cho den n
int main(){
	int t;
	cin >>t;
	while(t--){
		string s;
		cin >>s;
		int n=s.size();
		s="0"+s;
		memset(f, false, sizeof f);
		for(int i=1; i<=n; i++)
			f[i][i]=true;
		int ans=1;
		// xet tung khoang cach tu 2 den n
		for(int l=2; l<=n; l++){
			for(int i=1; i<n; i++){
				int j=i+l-1;			
				if(s[i]==s[j]){
					if(l==2){
						f[i][j]=true;						
					}
					else{
						if(f[i+1][j-1]){
							f[i][j]=true;
						}
					}
				}	
				if(f[i][j])
					ans=max(ans, j-i+1);
			}
		}
		cout <<ans <<endl;
	}
}