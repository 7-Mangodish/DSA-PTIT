#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
int a[22];
int n;
int used[120]={0};
set <string> s;
vector <int> v;

void ins(){
	string tmp="";
	for(auto x:v){
		tmp+=to_string(x)+" ";
//		cout <<x <<" ";
	}
	tmp.pop_back();
//	cout <<endl;
	s.insert(tmp);
}

void Try(int i){
	for(int j=i+1; j<n; j++){
//		cout <<1 <<" ";
		if(used[j]==0 && a[j]>a[i]){
			used[j]=1;
			v.push_back(a[j]);
			ins();
			
			Try(j);
			used[j]=0;
			v.pop_back();
		}
	}
}

int main(){
	cin >>n;
	for(int i=0; i<n; i++){
		cin >>a[i];
	}
	for(int i=0; i<n; i++){
		v.push_back(a[i]);
		Try(i);
		v.clear();
	}
	for(auto x:s)
		cout <<x <<"\n";
}
/*
4
6 3 7 11
*/
