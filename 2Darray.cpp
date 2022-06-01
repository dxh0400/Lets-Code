#include <iostream>
using namespace std;

int main()
{
    int m;
    cin>>m; //row

    int n;
    cin>>n; //column

    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int l=arr[0][0];
    for(int x=0;x<m;x++){
        for(int y=0;y<n;y++){
            if(arr[x][y]>l){
                l=arr[x][y];
            }
        }
    }
    cout<<"The greatest integer in 2D array is "<<l<<endl;
    int s=arr[0][0];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j]<s){
                s=arr[i][j];
            }
        }
    }
    cout<<"The smallest integer in 2D array is "<<s<<endl;
    return 0;
}
