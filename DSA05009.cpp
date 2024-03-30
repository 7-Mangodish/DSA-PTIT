#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int n,a[105];
int sum=0;
int s=0;
bool ok=false;
void ktao(){
	cin >>n;
	for(int i=1; i<=n; i++){
		cin >>a[i];
		sum+=a[i];
	}
//	sort(a+1, a+n+1);
}

void Try(int i){
	for(int j=i+1; j<=n; j++){
		s+=a[j];
		if(s<sum){
			Try(j);
		}
		else if(s==sum){
			ok=true;
			return ;
		}
		else{
			s-=a[j];
			return;
		}
		s-=a[j];
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ktao();
		if(sum%2!=0){
			cout <<"NO";
		}
		else{
			sum/=2;
			Try(0);
			if(ok)
				cout <<"YES";
			else
				cout <<"NO";
		}
		cout <<endl;
		ok=false;
		sum=0;
		s=0;
	}
}
