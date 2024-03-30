#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int n;
	cin >>n;
	vector <int> v;
	set <int> s;
	for(int i=0; i<n; i++)
		{
			int tmp;
			cin >>tmp;
			if(s.find(tmp)== s.end())
				{
					s.insert(tmp);
					v.push_back(tmp);
				}
		}
	for(int x:v)
		cout <<x <<" ";
}
