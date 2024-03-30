#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int n;
	cin >>n;
	int a[n];
	for(int &x:a)
		cin >>x;
	
	vector <string> v;
	for(int i=0; i<n; i++)
		{
			int key=a[i],
			pos=i-1;
			while(key <a[pos] && pos >=0)
				{
					a[pos+1]=a[pos];
					pos--;
				}
			a[pos+1]=key;
			
			string tmp="Buoc " +to_string(i) +":";
			for(int j=0; j<=i; j++)
				tmp+=" "+to_string(a[j]);
			v.push_back(tmp);
		}
	
	for(int i=v.size()-1; i>=0; i--)
		{
			cout <<v[i] <<endl;
		}
	
}
