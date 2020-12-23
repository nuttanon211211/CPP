#include <iostream>
#include <string>

using namespace std;

int main()
{

    int n,m;
    int mem[1002][1002];
    string a,b;
    cin >> a;
    cin >> b;
    for (int i=0;i< (n+1) ;i++){
        for(int j = 0;j< (m+1);j++){
            scanf("%d",&mem[i][j]);
        }
    }
    string x="";
    for(int i=0;i<m;i++){
        if(mem[n][m-i] != mem[n][m-i-1]){
            x = x + b[i];
        }
    }
    cout << x;
    return 0;
}
