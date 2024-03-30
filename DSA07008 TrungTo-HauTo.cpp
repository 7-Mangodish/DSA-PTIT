#include<bits/stdc++.h>

#define mod 1000000007
#define ll long long
#define ii pair<int,int>
using namespace std;

int uutien(char x){
	if(x=='^')
		return 3;
	if(x=='*' || x=='/')
		return 2;
	if(x=='+' || x=='-')
		return 1;
	return 0;
}

int main(){
	int t;
	cin >>t;
	while(t--){
	    string str;
	    cin >>str;
	    stack <char> s;
	    string res="";
	    for(int i=0; i<str.size(); i++){
	        if(str[i]=='(')
	            s.push(str[i]);
	        else if(isalpha(str[i]))
	            res+=str[i];
	        else if(str[i]==')'){
	            while(s.top()!='('){
	                res+=s.top();
	                s.pop();
	            }
	            s.pop();
	        }
	        else{
	            while(!s.empty() && uutien(s.top()) >=uutien(str[i])){
	                res+=s.top();
	                s.pop();
	            }
	            s.push(str[i]);
	            
	        }
	    }
	    while(!s.empty()){
	        res+=s.top();
	        s.pop();
	    }
	    cout <<res<<endl;
	}
}
