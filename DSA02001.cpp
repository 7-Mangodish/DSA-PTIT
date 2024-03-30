#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;
bool ok=false;
int n;
vector <int> v;
void ktao(){
	for(int i=0; i<n; i++){
		int tmp;
		cin >>tmp;
		v.push_back(tmp);
	}
}

void sinh(){
	if(v.size()==1){
		ok=true;
		return;
	}
	for(int i=0; i<v.size()-1; i++){
		v[i]+=v[i+1];
	}
	v.erase(v.begin()+v.size()-1);
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n;
		ktao();
		while(!ok){
			string tmp="[";
			for(int i=0; i<v.size(); i++){
				tmp+=to_string(v[i])+" ";
			}
			tmp.erase(tmp.begin()+tmp.length()-1);
			tmp+=']';
			cout <<tmp <<endl;
			sinh();
		}
		v.clear();
		ok=false;
	}
}
/*
1

5

1 2 3 4 5
*/
