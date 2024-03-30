#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int n,k;
struct matrix{
	ll a[15][15];
	matrix operator *(matrix other){
		matrix res;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				res.a[i][j]=0;
				for(int k=0; k<n; k++){
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
		cin >>n >>k;
		matrix A;
		for(int i=0; i<n; i++){
			for(int j=0; j<n; j++){
				cin >>A.a[i][j];
			}
		}
		matrix ans=bipow(A,k);
		ll s=0;
		for(int i=0; i<n; i++){
			s+=ans.a[i][n-1];
			s%mod;
		}
		s%=mod;
		cout <<s <<endl;
	}
}
