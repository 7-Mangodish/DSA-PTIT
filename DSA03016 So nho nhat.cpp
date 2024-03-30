#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

void TestCase(){
	int s,d;
	cin >>s >>d;
	if(d*9 <s){
		cout <<-1 <<endl;
		return ;
	}
	int a[d+1]={0};
	a[1]=1;
	s--;
	int q=s/9,
	r=s%9;
	for(int i=d-q+1; i<=d; i++){
		a[i]+=9;
	}
	a[d-q]+=r;
	for(int i=1; i<=d; i++)
		cout <<a[i];
	cout <<endl;
}

int main(){
	int t;
	cin >>t;
	while(t--){
		TestCase();
	}
}
