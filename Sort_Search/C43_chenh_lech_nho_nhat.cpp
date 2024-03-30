#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

//bool cmp(int a,int b, int c){
//	return 
//}
int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		for(int &x:a){
			cin >>x;
		}
		sort(a,a+n);
		int min=mod;
		for(int i=0; i<n-1; i++){
			if(a[i+1]-a[i]<min)
				min=a[i+1]-a[i];
		}
		cout <<min <<endl;
	}
}
