#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

struct matrix {
	ll a[2][2];
	matrix operator *(matrix other){
		matrix res;
		for(int i=0; i<2; i++){
			for(int j=0; j<2; j++){
				res.a[i][j]=0;
				for(int k=0; k<2; k++){
					res.a[i][j]+=a[i][k]*other.a[k][j];
					res.a[i][j]%=mod;
				}
			}
		}
		return res;
	}
};

matrix bipow(matrix A, int n){
	if(n==1)
		return A;
	matrix x=bipow(A,n/2);
	if(n%2==0)
		return x*x;
	return x*x*A;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		matrix A;
		A.a[0][0]=1;
		A.a[0][1]=1;
		A.a[1][0]=1;
		A.a[1][1]=0;
		matrix ans=bipow(A,n);
		cout <<ans.a[0][1] <<endl;
	}
}
