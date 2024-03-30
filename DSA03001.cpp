#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int cnt=0;
		vector<int> v={1,2,5,10,20,50,100,200,500,1000};
		for(int i= v.size()-1; i>=0; i--){
			while(n>=v[i] && n>0){
				int tmp=n/v[i];
				cnt+=tmp;
				n-=(tmp*v[i]);
			}
		}
		cout <<cnt<<'\n';
		
	}
}

//Input:
//
//2
//
//70
//
//121
//
// 
//
//2
//
//3