#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int a[20], cnt, n;
bool ok;
void ktao(){
	cin >>n;
	a[1]=n;
	cnt=1;
	ok=true;
}

void sinh(){
	int i=cnt; 
	// tim den phan tu dau tien khac 1
	while(i>=1 && a[i]==1){
		i--;
	}	
	if(i==0){
		ok=false;
		return ;		
	}
	
	a[i]--;// giam phan tu khac 1
		
	// tim phan con thieu va bieu dien no thong qua phan tu a[i]
	int tmp=cnt-i+1;// dem xem co bao nhieu so 1 da bo qua
	cnt=i;
	// bieu dien thong qua phan nguyen va phan du
	int q=tmp/a[i], 
	r=tmp%a[i];
	for(int j=1; j<=q; j++){
		++cnt;
		a[cnt]=a[i];
	}
	if(r!=0){
		a[++cnt]=r;
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ktao();
		while(ok){
			cout <<'(';
			for(int i=1; i<=cnt; i++){
				if(i!=cnt){
					cout <<a[i] <<" ";
				}
				else
					cout <<a[i];
			}

			cout <<") ";
			sinh();
		}
		cout <<endl;
		
	}
}
