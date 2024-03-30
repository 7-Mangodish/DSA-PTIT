#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n],b[6*n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		for(int j=0;j<(a[i]-a[i-1]);j++){
			cin>>b[j];
		}
	}
	cout<<n<<"\n"
	for(int i=0;i<n;i++){
		cout<<a[i];
		for(int j=0;j<(a[i]-a[i-1]);j++){
			cout<<b[j]<<"  ";
		}
		cout<<"\n";
	}
}
