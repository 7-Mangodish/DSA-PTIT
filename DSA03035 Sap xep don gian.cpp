#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int main(){
	int n;
	cin >>n;
	int a[n];
	for(int &x:a)
		cin >>x;
	vector <int> v;
	for(int x:a){
		if(v.empty()){
			v.push_back(x);
		}
		else{
			auto it=lower_bound(v.begin(), v.end(), x);
			int pos=it-v.begin();
			if(it==v.end()){
				v.push_back(x);
			}
			else
				v[pos]=x;
		}
	}
	cout <<n-v.size();
}
