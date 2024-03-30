#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

void sol(int n, int l){
	string ans="";
	while(n){
		int tmp=n%2;
		ans+=to_string(tmp);
		n/=2;
	}
	string tmp(l-ans.size(),'0');
	ans+=tmp;
	reverse(ans.begin(), ans.end());
	cout <<ans <<endl;
}
int main(){
	int t;
	cin >>t;
	while(t--){
//		so thu tu cua ma gray chinh la so nhi phan can bieu dien
		string str;
		cin >>str;		
		int n=str.size();		
		string s[10000];
		s[0]="0";
		s[1]="1";
		for(int i=2; i<=n; i++){
			int pos=pow(2, i-1);// vi tri doi xung
			int cnt=pow(2, i); // so phan tu ma gray
			for(int j=0; j<pos; j++){
				s[cnt-j-1]="1" +s[j];
				s[j]="0"+s[j];
			}
		}
		
		int ind;
		for(int i=0; i<pow(2,n); i++){
			if(s[i]==str){
				ind=i;
				break;
			}
		}
		sol(ind, n);
	}
}
