#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int a[9]={0};
bool ok=true;
void sinh(){
	int i=8;
	while(i>0 && a[i]==2){
		a[i]=0;
		i--;
	}
	if(i==0){
		ok=false;
		return;
	}
	a[i]=2;
}	

bool chk(){
	if(a[1] == a[2] && a[1]==0)
		return false;
	if(a[3]==a[4] && a[3]==0)
		return false;
	if(a[3]!=0)
		return false;
	if(a[5]==0)
		return false;
	return true;
}
int main(){
	while(ok){
		if(chk()){
			for(int i=1; i<=8; i++){
				if(i==2 || i==4)
					cout <<a[i]<<'/';
				else
					cout <<a[i];
			}
			cout <<endl;
		}
		sinh();
	}	
	return 0;
}
