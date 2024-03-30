#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int m, n, k;
		cin >>m >>n >>k;
		vector <int> v;
		for(int i=0; i<m ;i++){
			int tmp;
			cin >>tmp;
			v.push_back(tmp);
		}
		for(int i=0; i<n; i++){
			int tmp;
			cin >>tmp;
			v.push_back(tmp);
		}
		sort(v.begin(),v.end());
		cout <<v[k-1]<<endl;
	}
}
