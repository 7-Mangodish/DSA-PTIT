#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int n,k;
int a[30], sum,
s=0;
bool used[30];
bool ok;
void ktao(){
	cin >>n >>k;
	int tmp=0;
	for(int i=1; i<=n; i++){
		cin >>a[i];
	}
	sort(a+1, a+n+1);
	memset(used, false, sizeof used);
}

bool Try(int k){
	for(int i=k+1; i<=n; i++){
		if(!used[i]){
			s+=a[i];
			used[i]=true;
			if(s<sum){
				if(Try(i))
					return true;
			}
			else{
				if(s==sum)
					return true;
				else{
					sum-=a[i];
					used[i]=false;
					return false;
				}					
			}
			s-=a[i];
			used[i]=false;
		}
	}
	return false;
}

bool chk(){
	for(int i=1; i<=k; i++){
		s=0;
		if(!used[i]){
			if(!Try(i-1)){
				return false;
			}
		}
	}
	return true;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ktao();
		if(chk())
			cout <<1;
		else
			cout <<0;
		cout <<endl;
	}
}
