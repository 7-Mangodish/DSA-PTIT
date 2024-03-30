#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;


int main(){
	int t;
	cin >>t;
	while(t--){
		bool ok=false;
		int n,m,k;
		cin >>n >>m >>k;
		int a[n],b[m],c[k];
		for(int  &x:a)
			cin >>x;
		for(int &x:b)
			cin >>x;
		for(int &x:c)
			cin >>x;
		vector <int> v;		
		int p1=0, p2=0;
		while(p1 <n && p2 <m){
			if(a[p1] < b[p2])
				++p1;
			else if(a[p1] >b[p2])
				++p2;
			else{
				v.push_back(a[p1]);
				++p1;
				++p2;
			}
		}
//		for(auto x:v)
//			cout <<x <<" ";
		int p3=0,p4=0;
		while(p3<k && p4 <v.size()){
			if(c[p3]<v[p4])
				++p3;
			else if(c[p3] >v[p4])
				++p4;
			else{
				ok=true;
				cout <<c[p3] <<" ";
				++p3;
				++p4;
			}
		}
		if(!ok)
			cout <<"NO";		
		cout <<endl;
	}
}
