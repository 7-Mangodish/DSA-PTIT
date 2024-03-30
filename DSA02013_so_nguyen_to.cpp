#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int n,p,s;
vector< vector<int> > v;// Luu ket qua
vector <int> tmp; // Luu  cau hinh
int sum=0;
bool chk(int i){
	if(i<2)
		return false;
	for(int j=2; j<=sqrt(i); j++){
		if(i%j ==0)
			return false;
	}
	return true;
}

void Try(int i){
	for(int j=i+1; ; j++){
		if(chk(j)){
			sum+=j;
			tmp.push_back(j);
			if(sum>s){
				sum-=j;
				tmp.pop_back();
				break;
			}
			else if(sum==s){
				if(tmp.size()==n){
					v.push_back(tmp);
				}
			}
			else{
				Try(j);
			}
			sum-=j;
			tmp.pop_back();
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n >>p >>s;
		Try(p);
		cout <<v.size() <<endl;
		for(auto x:v){
			for(auto i:x)
				cout <<i <<" ";
			cout <<endl;
		}		
		v.clear();
		tmp.clear();
	}
}
