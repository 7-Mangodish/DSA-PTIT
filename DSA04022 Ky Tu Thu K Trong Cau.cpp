#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int bipow(int a, int b){
	if(b==0)
		return 1;
	int x=bipow(a,b/2);
	if(b%2==0)
		return x*x;
	return x*x*a;
}

int sol(int n, int k){
	int res= bipow(2,n-1);
	if(k==res)
		return n;
	if(k>res)
		return sol(n-1,k-res);
	return sol(n-1,k);
}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n,k;
		cin >>n >>k;
		cout <<(char)(sol(n,k)+64) <<endl;
	}
}	
