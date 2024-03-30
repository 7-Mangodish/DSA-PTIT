#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int n, a[20];
int used[20]={0};
void out(){
	for(int i=1; i<=n; i++){
		cout <<a[i];
	}
	cout <<endl;
}
bool chk(){
	for(int i=1; i<=n-1; i++){
		if(abs(a[i]-a[i+1])==1)
			return false;
	}
	return true;
}
void Try(int i){
	for(int j=1; j<=n; j++){
		if(used[j]==0){
			a[i]=j;
			used[j]=1;
			if(i==n){
				if(chk())
					out();
			}
			else
				Try(i+1);	
			used[j]=0;			
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		Try(1);
	}
}
