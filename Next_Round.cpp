//ashish_07
#include<bits/stdc++.h>
using namespace std;
int a,n,k,b=0,arr[10000];
int main(){
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		cin >> a;
		arr[i]=a;
	}
	for(int i=1;i<=n;i++){
		if(arr[i]>= arr[k] && arr[i]>0){
			b++;
		}
	}
	cout<< b;
	return 0;
}
