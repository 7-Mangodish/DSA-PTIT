#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
bool used[20];
int a[20];
int n,k;
int ind=0;
void ktao(){
	cin >>n >>k;
	memset(used, false, sizeof used);
}
void Try(int i){
	for(int j=1; j<=n; j++){
		if(!used[j]){
			used[j]=true;
			a[i]=j;
			if(i<n){
				Try(i+1);
			}
			if(i==n){
				ind++;
				if(ind%k==0){
					for(int i=1; i<=n; i++)
						cout <<a[i] <<" ";
					cout <<endl;
				}
			}
			used[j]=false;
		}
	}
}

int main(){
	ktao();
	Try(1);
}
