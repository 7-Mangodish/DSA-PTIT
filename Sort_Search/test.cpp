#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int a[]={1,2,3,5};
	auto it1=lower_bound(a,a+4,5);
	auto it2=upper_bound(a,a+4,5);
	cout <<(int)(it2-it1);
}
