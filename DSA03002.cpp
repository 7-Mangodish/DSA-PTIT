#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long

using namespace std;
string s1,s2;
void max(string &s){
	for(int i=0; i<s.length(); i++){
		if(s[i]=='5')
			s[i]='6';
	}
}

void min(string &s){
	for(int i=0; i<s.length(); i++){
		if(s[i]=='6'){
			s[i]='5';			
		}

	}
}
int main(){
	cin >>s1 >>s2;
	min(s1);
	min(s2);
	cout <<stoi(s1)+stoi(s2);
	max(s1);
	max(s2);
	cout <<" "<<stoi(s1) +stoi(s2) ;
}
