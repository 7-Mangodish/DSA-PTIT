#include<bits/stdc++.h>

#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;


int main(){
	int t;
	cin >>t;
	while(t--)
	{
		int n;
		cin >>n;
		vector <int> v;
		for(int i=0; i<n; i++)
			{
				int tmp;
				cin >>tmp;
				v.push_back(tmp);
			}
		int min=9999999;
		for(int i=0; i<v.size()-1; i++)
			{
				for(int j=i+1; j<v.size(); j++)
					{
						if(abs(v[i]+v[j]) <abs(min) )
							min =v[i]+v[j];
					}
			}
		cout <<min <<endl;
	}
}
