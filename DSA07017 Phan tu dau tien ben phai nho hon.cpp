#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n;
		cin >>n;
		int a[n];
		for(int &x:a)
			cin >>x;
			
		int nge[n]; // Nearest grater element( luu chi so)
		stack<int> s;
		for(int i=0; i<n; i++){
			// chung nao phan tu co chi so o dinh stack van nho hon a[i]
			while(!s.empty() && a[s.top()] < a[i]){
				nge[s.top()]=i;
				s.pop();
			}
			s.push(i);
		}
		while(!s.empty()){
			nge[s.top()]=-1;
			s.pop();
		}
		
//		for(auto x:nge)
//			cout <<x <<" ";
			
		int nle[n]; // Tim phan tu dau tien nho hon ben trai
		for(int i=0; i<n; i++){
			while(!s.empty() && a[s.top()] > a[i]){
				nle[s.top()]=i;
				s.pop();
			}
			s.push(i);
		}
		while(!s.empty()){
			nle[s.top()]=-1;
			s.pop();
		}
		
		int ans[n];
		for(int i=0; i<n; i++){
			if(nge[i]==-1)
				ans[i]=-1;
			else
				ans[i]=nle[nge[i]];
		}
		for(int x: ans){
			if(x!=-1)
				cout <<a[x] <<" ";
			else
				cout <<x <<" ";
				
		}
		cout <<endl;
	}
}
