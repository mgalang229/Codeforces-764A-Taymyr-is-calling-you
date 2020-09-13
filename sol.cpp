#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	int n, m, z;
	cin >> n >> m >> z;
	int list[z+1];
	memset(list, 0, sizeof(list));
	for(int i=1; i<=z; ++i) {
		if(i%n==0)
			list[i]++;
		if(i%m==0)
			list[i]++;
	}
	int cnt=0;
	for(int i=1; i<=z; ++i)
		if(list[i]==2)
			cnt++;
	cout << cnt << "\n";
}
