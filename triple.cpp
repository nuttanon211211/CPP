#include<iostream>
#include<set>

using namespace std;
int main() {
	int n,m;
	int a[600];
	set<int> s;
	cin >> n >> m;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int k=j+1;k<n;k++){
				s.insert(a[i]+a[j]+a[k]);
			}
	}
}
	for(int i=0;i<m;i++){
		int c;
		cin >> c;
		if (s.find(c) != s.end()){
			printf("YES\n");
			
		}
		else{
			printf("NO\n");
		}
	}
return 0;
}
