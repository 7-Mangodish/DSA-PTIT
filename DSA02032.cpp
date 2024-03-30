#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int a[25],n,x;
int s=0;
vector <int> v;
vector <vector <int> > ans;
void ktao(){
	cin >>n >>x;
	for(int i=1; i<=n; i++){
		cin >>a[i];
	}
	sort(a+1, a+n+1);
}

void Try(int i){
	for(int j=i; j<=n; j++){
		s+=a[j];
		v.push_back(a[j]);
		if(s==x)
			ans.push_back(v);
		else if(s>x){
			s-=a[j];
			v.pop_back();
			return;
		}
		else
			Try(j);
		s-=a[j];
		v.pop_back();
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		ktao();
		Try(1);
		if(ans.size()==0)
			cout <<-1;
		else{
			cout <<ans.size() <<" ";
			for(auto x:ans){
				cout <<"{";
				for(int i=0; i<x.size(); i++){
					if(i==x.size()-1)
						cout <<x[i];
					else
						cout <<x[i] <<" ";
					
				}
				cout <<"} ";
			}
		}
		cout <<endl;
		ans.clear();
		v.clear();
		s=0;
	}
}
