//ashish_07
#include<bits/stdc++.h>
using namespace std;
int main() {
	string s;
	cin>>s;
	int cu=0,cl=0;
	for(int i=0;i<s.size();i++){
	    if(isupper(s[i])){
	        cu++;
	    }else{
	        cl++;
	    }
	}
	if(cu>cl){
	    char ch;
	    for(int i=0;i<s.size();i++){
	        ch=toupper(s[i]);
	        cout<<ch;
	    }
	}else{
	    char ch;
	    for(int i=0;i<s.size();i++){
	        ch=tolower(s[i]);
	        cout<<ch;
	    }
	}
	return 0;
}
