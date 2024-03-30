#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
int n;
vector < vector <int> > ans; // Luu ket qua
vector<int> v;
int sum=0;

// Tu tuong: quay lui tai moi gia tri j, cho toi khi gia tri sum=n, neu <n thi goi tiep thu tuc Try
void out(){
	cout <<ans.size() <<endl;
	for(auto x:ans){
		cout <<"(";
		for(int i=0; i<x.size(); i++){
			if(i!=x.size()-1)
				cout <<x[i] <<" ";
			else
				cout <<x[i] <<") ";
		}
	}
	cout <<endl;
}

void Try(int i){
	for(int j=i; j>=1; j--){
		v.push_back(j);
		sum+=j;
		if(sum==n)
			ans.push_back(v);
		if(sum<n)
			Try(j);
		v.pop_back();
		sum-=j;
	}
}

int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		Try(n);
		out();
		ans.clear();
	}
}
