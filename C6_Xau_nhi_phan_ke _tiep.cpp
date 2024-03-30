#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define forl(i,a,b) for(int i=a; i<b; i++)
#define forb(i,a,b) for(int i=a; i<=b; i++)

using namespace std;

int main(){
	int t;
	cin >>t;
	cin.ignore();
	while(t--)
		{
			string s;
			cin >>s;
			int i=s.length()-1;
			while(s[i]!='0')
				{
					--i;
					if(i<0)
						break;
				}
			if(i<0)
				cout <<s <<endl;
			else
			{
				for(int j=i; j<s.length(); j++)
				{
					if(s[j]=='0')
						s[j]='1';
					else 
						s[j]='0';
				}
			cout <<s <<endl;			
			}				
		}
}
