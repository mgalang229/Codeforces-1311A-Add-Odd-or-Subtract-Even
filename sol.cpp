#include <bits/stdc++.h>

using namespace std;


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int a, b;
		cin >> a >> b;
		if(a == b) cout << 0;
		else if((a > b && (a-b)%2 == 0) || (a < b && (b-a)%2 != 0))
			cout << 1;
		else cout << 2;
		cout << "\n";
	}
	return 0;
}
