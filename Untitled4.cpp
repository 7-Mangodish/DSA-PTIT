#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		string s[100000];
		s[0]="0";
		s[1]="1";
		for(int i=2; i<=n; i++){
			int pos=pow(2, i-1); // Vi tri doi xung
			int cnt=pow(2, i); // so ma grey
			for(int j=0; j<pos; j++){
				s[cnt-j-1]="1"+s[j];
				s[j]="0"+s[j];
			}
		}
		for(int i=0; i<pow(2, n); i++)
			cout <<s[i] <<" ";
		cout <<endl;
	}
}
