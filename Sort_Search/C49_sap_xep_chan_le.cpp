#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int n;
	cin >>n;
	vector <int> v1,v2;
	for(int i=1; i<=n; i++){
		int tmp;
		cin >>tmp;
		if(i%2!=0){
			v1.push_back(tmp);
		}
		else{
			v2.push_back(tmp);
		}
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end(), greater <int>());
	int ind1=0, ind2=0;
	for(int i=1; i<=n; i++){
		if(i%2!=0){
			cout <<v1[ind1++] <<" ";
		}
		else{
			cout <<v2[ind2++] <<" ";
		}
	}
	cout <<endl;
}
