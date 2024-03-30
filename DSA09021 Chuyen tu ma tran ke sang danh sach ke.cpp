#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int a[1005][1005];
vector <int> v[1005];
int main(){
	int n;
	cin >>n;
	for(int i=1; i<=n; i++){
		for(int j=1; j<=n; j++){
			cin >>a[i][j];
			if(a[i][j]){
				v[i].push_back(j);
			}
		}
	}
	for(int i=1; i<=n; i++)
		sort(v[i].begin(), v[i].end());
	for(int i=1; i<=n ;i++){
		for(auto j:v[i])
			cout <<j <<" ";
		cout <<endl;
	}
}
