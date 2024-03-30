#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,k;
		cin >>n >>k;
		int a[n];
		for(int &x:a)
			cin >>x;
		if(k<=n/2)
			sort(a,a+n);
		else
			sort(a,a+n,greater<int>());
		int sum1=0,
		sum2=0;
		for(int i=0; i<n; i++){
			if(i<k)
				sum1+=a[i];
			else
				sum2+=a[i];
		}
		cout <<abs(sum2-sum1) <<endl;
	}
}
