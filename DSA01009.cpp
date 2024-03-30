#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
/*
0:A
1:B
*/
int n,k;
int a[20];
bool ok=true;
void ktao(){
	for(int i=1; i<=n; i++){
		a[i]=0;
	}
}

void sinh(){
	int i=n;
	while(i >0 && a[i]==1){
		a[i]=0;
		--i;
	}
	if(i==0){
		ok=false;
		return ;
	}
	a[i]=1;
}

bool chk(){
	int cnt1=0; // dem so mang con co do dai =k
	for(int i=1; i<=n-k+1; i++){
		if(a[i]==0){
			int cnt=1;
			for(int j=i+1; j<i+k; j++){
				if(a[j]==0)
					++cnt;
			}
			if(cnt==k)
				cnt1++;
		}
	}
	if(cnt1==1)
		return true;
	return false;
}
int main(){
	cin >>n >>k;
	ktao();
	vector <string> v;
	while(ok){
		if(chk()){
			string tmp="";
			for(int i=1; i<=n; i++){
				if(a[i]==0)
					tmp+="A";
				else
					tmp+="B";6
			}
			v.push_back(tmp);
		}
		sinh();
	}
	cout <<v.size() <<endl;
	for(auto x:v)
		cout <<x <<endl;
}
