#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int n;
int cnt=0, ans=INT_MAX;
void Try(int i){

	if(i%3==0){
		++cnt;
		Try(i/3);
	}
	if(i%2==0){
		++cnt;
		Try(i/2);
	}
	if (i>1){
		++cnt;
		Try(i-1);
	}
	if(i==1){
		ans=min(ans,cnt);
	}	
	--cnt;
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;	
		Try(n);
		cout <<ans <<endl;
		ans=INT_MAX;
		cnt=0;	
	}
}
