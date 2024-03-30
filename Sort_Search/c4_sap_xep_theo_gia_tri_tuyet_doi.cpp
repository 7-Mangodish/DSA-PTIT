#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int x;
bool cmp(int a, int b){
//	if(abs(x-a)<abs(x-b))
//		return true;
//	return false;
	return abs(a-x) <abs(b-x);
}
int main(){
	int t;
	cin >>t;
	while(t--)
		{
			int n;
			cin >>n >>x;
			int a[n];
			for(int &i :a)
				cin >>i;
			stable_sort(a, a+n, cmp);
			for(int i: a)
				cout <<i <<" ";
			cout <<endl;
		}
}
