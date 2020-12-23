#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>


using namespace std;
int main() {
	int n,m,k,d,e,l;
	cin >> n >> m >> k;
	pair<int,int> command[k];
	queue<int> plant , store;
	for (int i = 0; i<k ; i++){
		cin >> d >> e >> l;
		command[d-1].first = e;
		command[d-1].second = l;
		
	}
	for (int i=0;i<k;i++){
		if(command[i].first == 0){
			if(store.empty()) {
				plant.push(command[i].second);
				cout << 0 << "\n";
			
			}
			else{
				cout << store.front() << "\n";
				store.pop();
			}
			
	}
		else{
			if(plant.empty()){
				store.push(command[i].second);
				cout << 0<<"\n";
				
			}else{
				cout << plant.front() << "\n";
				plant.pop();
			}

}
}
return 0;
}
