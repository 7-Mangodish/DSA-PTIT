#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

struct fb{
	ll a[2][2];
	
	friend fb operator * (fb x, fb y){
		fb ans;
		for(int i=0; i<2; i++){
			for(int j=0; j<2; j++){
				ans.a[i][j]=0;
				for(int k=0; k<2; k++){
					ans.a[i][j]+=x.a[i][k]*y.a[k][j];
					ans.a[i][j]%=mod;
				}
			}
		}
		return ans;
	}
};

fb bi_pow(fb x, int k){
	if(k==1)
		return x;
	fb X=bi_pow(x, k/2);
	if(k%2==0)
		return X*X;
	return X*X*x;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		if(n==0)
			cout <<0;
		else{
			fb X;
			X.a[0][0]=1;
			X.a[0][1]=1;
			X.a[1][0]=1;
			X.a[1][1]=0;
			fb ans=bi_pow(X, n);	
			cout <<ans.a[0][1];	
			}		
		cout <<endl;
	}
}
