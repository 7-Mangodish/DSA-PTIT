#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int n,k;
	cin >>n >>k;
	int a[n];
	for(int &x:a)
		cin >>x;
	int cnt=0;	
	for(int i=0; i<n-2; i++){
		for(int j=i+1; j<n-1; j++){
			if(a[j]>a[i]){
				int ind =j+1;
				while(ind<n){
					if(a[ind]>a[j])
						++cnt;
					++ind;
				}
			}
		}
	}
	
	cout <<cnt ;
}
