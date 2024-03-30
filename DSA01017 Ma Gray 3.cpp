#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		string str;
		cin >>str;
		int ind=0;
		for(int i=str.size()-1; i>=0; i--){
			if(str[i]=='1'){
				ind+=pow(2, str.size()-i-1);
			}
		}
		
		string s[10005];		
		s[0]="0";
		s[1]="1";
		int l=str.size(); // do  dai ma gray;
		for(int i=2; i<=l; i++){
			int pos=pow(2, i-1);// vi tri doi xung
			int cnt=pow(2, i); // so ma gray
			for(int j=0; j<pos; j++){
				s[cnt-j-1]="1" + s[j];
				s[j]="0" + s[j];
			}			
		}
		
		cout <<s[ind] <<endl;
	}
}
