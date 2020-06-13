//ashish_07
#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,n,count=0;
	cin>>m>>n;
	int arr[m][n];
	for(int i=0;i<m;i++){
		for(int j =0;j<n;j++){
			count++;
		}
	}
	count = count/2;
	cout<<count;
	return 0;
	
}
