#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int n,x;
int s=0;
vector <int> v;
int a[30];
bool ok=false;
void ktao(){
	cin >>n >>x;
	for(int i=1; i<=n; i++){
		cin >>a[i];
	}
	sort(a+1, a+n+1);
}

void out(){
	cout <<'[';
	for(int i=0; i<v.size(); i++){
		if(i==v.size()-1){
			cout <<v[i];
		}
		else{
			cout <<v[i] <<" ";
		}
	}
	cout <<']';
}
void Try(int k){
	for(int i=k; i<=n; i++){
		s+=a[i];
		v.push_back(a[i]);
		if(s<x)
			Try(i);
		else if(s==x){
			ok=true;
			out();			
		}
		else{
			s-=a[i];
			v.pop_back();
			return ;
		}
		s-=a[i];
		v.pop_back();
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ktao();
		Try(1);
		if(!ok)
			cout <<-1;
		cout <<endl;
	}
}
