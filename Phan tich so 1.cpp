#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int n;
int ind; // Luu so phan tu cua mang
int a[15];
bool ok=true;
void ktao(){
	cin >>n;
	ind=1;
	a[ind]=n;
	ok=true;
}

void sinh(){
	int i=ind;
	// Tim den phan tu dau tien khac 1; 
	while(i>=1 && a[i]==1){
		--i;
	}
	
	if(i==0){
		ok=false;	
		return;	
	}
	
	int cnt=ind-i+1; // dem xem da bo qua bao nhieu so 1
	a[i]--;
	int q=cnt/a[i], // Bieu dien thong qua phan nguyen va phan du
	r=cnt%a[i];
	ind =i;
	for(int k=0; k<q; k++){
		a[++ind]=a[i];
	}
	if(r!=0){
		a[++ind]=r;
	}
}

int main(){ 
	int t;
	cin >>t;
	while(t--){
		ktao();
		while(ok){
			cout <<'(';
			for(int i=1; i<=ind; i++){
				if(i!=ind)
					cout <<a[i] <<" ";
				else
					cout <<a[i] <<')' <<" ";
			}
			sinh();
		}
		cout <<endl;
	}
}
