#include<bits/stdc++.h>
using namespace std;

bool prime(int n){
	if(n<2)
		return false;
	if(n<=3)
		return true;
	if(n%2==0)
		return false;
	for(int i=3; i<=sqrt(n); i=i+2){
		if(n%i==0){
			return false;
		}
	}
	return true;
}

int32_t main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		int x = prime(n);
		if(x==true){
			cout<<"YES PRIME\n";
		}
		else{
			cout <<"NOT PRIME\n";
		}
	}
	return 0;
}