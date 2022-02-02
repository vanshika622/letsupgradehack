#include <iostream>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    const int N =n+1;
    bool check[N];
    for(int i=0;i<N;i++){
        check[i]=false;
    }
    for(int i=0;i<n;i++){
        if(arr[i]>0 && arr[i]<=n){
            check[arr[i]]=true;
        }
    }
    int ans=-1;
    for(int i=1;i<=n;i++){
        if(check[i]==false){
            ans=i;
            cout<<ans<<endl;
            break;
        }
    }
    cout<<n+1<<endl;
    return 0;
}
