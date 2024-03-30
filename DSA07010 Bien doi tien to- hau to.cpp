#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		string str;
		cin >>str;
		stack <string> s;
		for(int i=str.size()-1; i>=0; i--){
			if(isalpha(str[i])){
				s.push(string(1,str[i]));
			}
			else{
				string tmp1=s.top(); s.pop();
				string tmp2=s.top(); s.pop();
				s.push(tmp1+tmp2+str[i]);
			}
		}
		while(!s.empty()){
			cout <<s.top();
			s.pop();
		}
		cout <<endl;
	}
}
