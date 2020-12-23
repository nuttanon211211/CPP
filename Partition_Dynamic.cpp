#include <bits/stdc++.h>
using namespace std;

bool findPartition (int arr[],int n){
	int sum=0;
	int i,j;
	
	for (i = 0;i < n;i++)
		sum +=  arr[i];
	
	if (sum%2 !=0)
		return false;
	
	bool PART[sum/2 +1][n+1];
	
	for (i=0;i<=n;i++)
		PART[0][i] = true;
	
	for (i=1;i<=sum/2;i++)
		PART[i][0] = false;
		
	for (i=1;i<=sum/2;i++){
		for (j=1;j<=n;j++){
			PART[i][j] = PART[i][j-1];
			if (i>= arr[j-1])
				PART[i][j] = PART[i][j] || PART[i-arr[j-1]][j-1];
		}
	}
	
	return PART[sum/2][n];
}

int main() {
	int n;
	cout << "INPUT NUMBER OF ELEMENT IN ARR: ";
	cin >> n;
	int arr[n];
	cout << "INPUT ARR: ";
	for (int i=0;i<n;i++)
		cin >> arr[i];
	if (findPartition(arr,n) )
		cout << "TRUE";
	else
		cout << "FALSE";
	}
