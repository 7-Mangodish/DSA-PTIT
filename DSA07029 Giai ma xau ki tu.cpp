#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int main(){
	int t;
	cin >>t;
	while(t--){
		string str;
		cin >>str;
		string ans;
		stack <string> s;
		for(char x:str){
			if(x!=']'){
				string tmp(1, x);
				s.push(tmp);
			}
			else{
				// Lap chung nao thay phan tu chu so
				string tmp="";
				while(!s.empty()){
					string t=s.top(); 
					if(t.size()==1 && 1<=stoi(t) <=9)
						break;
					else if(t=="[")
						s.pop();
					else{
						tmp=t+tmp;
					}
				}
				// khi tim thay phan tu ki tu, ma hoa
				int ind=stoi(s.top()); s.pop();
				string res="";
				for(int i=1; i<ind; i++){
					res+=tmp;
				}
				s.push(res);
			}
		}
		cout <<ans <<endl;
	}
}
