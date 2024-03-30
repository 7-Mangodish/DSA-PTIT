#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

set <int> s;
vector <int> v;
int dx[3]={2, 3, 5};

bool chk(int n){
	for(int i=0; i<3; i++){
		if(n%dx[i] ==0 && s.count(n/dx[i]))
			return true;
	}
	return false;
}

void sol(int k){

	v.push_back(1);
	s.insert(1);
	ll ind=2;
	int i=1;
	while(i<k){
		if(chk(ind)){
			v.push_back(ind);
			s.insert(ind);
		}			
		++ind;
		++k;
	}
	cout <<v.back() <<endl;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		sol(n);
	}
}
