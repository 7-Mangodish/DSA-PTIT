#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n,s,m;
		cin >> n >>s >>m;
		int tmp=s/7; // so tuan, moi tuan tru ngay chu nhat
		if(n*(s-tmp) <m*s) // neu nhu so ngay toi da ma nguoi do mua do nho hon tong luong thuc can thiet
			cout <<-1;
		else{
			int cnt=1;
			while(n*cnt<s*m)
				++cnt;
			cout <<cnt;
		}
		cout <<endl;
	}
}
