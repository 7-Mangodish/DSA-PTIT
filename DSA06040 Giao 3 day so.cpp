#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		int n1, n2, n3;
		cin >>n1 >>n2 >>n3;
		int a[n1],b[n2], c[n3];
		for(auto &x :a)
			cin >>x;
		for(auto &x :b)
			cin >>x;
		for(auto &x :c)
			cin >>x;
		
		vector <int> tmp;
		int p1=0, p2=0, p3=0;
		while(p1 <n1 && p2 <n2){
			if(a[p1] == b[p2]){
				tmp.push_back(a[p1]);
				++p1;
				++p2;				
			}
			else if(a[p1] < b[p2])
				++p1;
			else
				++p2;
		}
		
		int p=0;
		vector <int> ans;
		while(p<tmp.size() && p3 <n3){
			if(tmp[p]==c[p3]){
				ans.push_back(c[p3]);
				++p;
				++p3;
			}
			else if(tmp[p] <c[p3])
				++p;
			else
				++p3;
		}
		if(ans.size()){
			for(auto x:ans)
				cout <<x <<" ";
		}
		else
			cout <<-1;
		
		cout <<endl;
		
	}
}
