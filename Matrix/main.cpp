#include <iostream>

using namespace std;

int main()
{
    int n;
    int m;
    int round,r1,c1,r2,c2;
    cin>>n;
    cin>>m;
    cin>>round;
    int ary[n][m];
    for (int i =0;i<n;i++){
        for (int j=0;j<m;j++){
            cin>>ary[i][j];
        }
    }
    for (int a=0;a<round;a++){
        cin >>r1;
        cin >>c1;
        cin >>r2;
        cin >>c2;
        r1--;
        c1--;
        c2--;
        r2--;
    int maxz;
    if (r1>r2||c1>c2){
        cout<<"INVALID";
        continue;
    }
    if (r1+1>n||c1+1>m){
        cout<<"OUTSIDE";
        continue;
    }
    if (r2<0||c2<0){
        cout<<"OUTSIDE";
        continue;
    }
    maxz =ary[max(0,r1)][max(0,c1)];
    for(int i=max(0,r1);i<min(n,r2);i++){
        for(int j=max(0,c1);j<min(m,c2);j++){
            if (ary[i][j]>maxz) maxz=ary[i][j];
        }
    }


    cout<<maxz;
    maxz = -500000;
    }
    //cout << "Hello world!" << endl;
    return 0;
}
