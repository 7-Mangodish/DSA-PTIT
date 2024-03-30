#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;
int n, s;
void sol(){
	cin >>n >>s;
	if(9*n <s || (s==0 && n!=1)){
		cout <<"-1 -1";
		return;
	}
	int max[105]={0}, min[105]={0};
	int q1=s/9,
	r1=s%9;
	// xu li so lon
	for(int i=1; i<=q1; i++){
		max[i]=9;
	}
	max[q1+1]=r1;
	
	// xu li so nho
	min[1]=1;
	s--;
	int q2=s/9,
	r2=s%9;
	for(int i=n; i>=n-q2+1; i--){
		min[i]+=9;
	}
	min[n-q2]+=r2;
	
	// cout
	for(int i=1; i<=n; i++){
		cout <<max[i];
	}
	cout <<" ";
	for(int i=1; i<=n; i++){
		cout <<min[i];
	}
}

int main(){
	sol();
}
