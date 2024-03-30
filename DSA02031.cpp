#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int a[10];
int n;
bool ok=true;
bool na[10];
void ktao(){
	for(int i=1; i<=n; i++){
		a[i]=i;		
		if(i==1 || i==5)
			na[i]=true;
		else
			na[i]=false;
	}

}

void sinh(){
	int i=n-1;
	while(a[i]>a[i+1] && i>0){
		--i;
	}
	if(i==0){
		ok=false;
		return;		
	}

	int j=n;
	while(a[j]<a[i])
		--j;
	swap(a[i],a[j]);
	sort(a+i+1, a+n+1);
}
bool chk(){
	if(n<5){
		if(na[a[1]] || na[a[n]])		
			return true;
	}
	else{
		if(na[a[1]] && na[a[n]])
			return true;
			for(int i=1; i<=n-1;i++){
				if(na[a[i]] ==true && na[a[i+1]]==true)
					return true;
			}		
	}

	return false;
}
int main(){
	char c;
	cin >>c;
	n=(int)c-64;
	ktao();
	while(ok){
		if(chk()){
			for(int i=1; i<=n; i++)
				cout <<(char)(a[i]+64);
			cout <<endl;
		}
		sinh();
	}
}
