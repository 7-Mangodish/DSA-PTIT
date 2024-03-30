#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int n,k;
int a[20],x[20], used[20]={0};
int sum=0;
set <string> s;
vector <string> v;
/*
mang a: luu gia tri phan tu
mang x: luu chi so cua phan tu trong a
*/
void out(int ind){
	int b[20];
	for(int i=1; i<=ind; i++)
		b[i]=x[i];
	sort(b+1, b+ind+1);
	string tmp="";
	for(int i=1; i<=ind; i++)
		tmp+=to_string(b[i])+" ";
	tmp.erase(tmp.begin()+tmp.size()-1);
	if(s.find(tmp)==s.end()){
		v.push_back(tmp);
		s.insert(tmp);
	}
}

void ktao(){
	for(int i=1; i<=n; i++){
		cin >>a[i];
	}
	sort(a+1,a+n+1);
}

void Try(int i){
	for(int j=1; j<=n; j++){
		if(used[j]==0){ // Neu phan tu thu j chua duoc su dung
			x[i]=a[j];
			sum+=a[j];
			used[j]=1;
			if(sum==k){
				out(i);				
			}
			if(sum <k){
				Try(i+1);
			}
			used[j]=0;
			sum-=a[j];
		}
	}
}
int main(){
	int t;
	cin >>t;
	while(t--){
		cin >>n >>k;
		ktao();
		Try(1);
		if(v.size()==0)
			cout <<-1;
		else{
			for(auto x:v){
				cout <<"[" <<x <<"] ";
			}		
		}

		cout <<endl;
		s.clear();
		v.clear();
	}
}
/*
2
5 50
5  10 15 20  25
8  53
15  22  14  26  32  9  16  8
*/