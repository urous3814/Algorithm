#include <iostream>
using namespace std;

int main(){
    int N, K, n, i;
    cin>>N>>K;
    int *a = new int[N];
    for(i=0; i<N; i++)
    {
        cin>>a[i];
    }    
    while(1)
    {
        if(K/a[i]>=1)
        {
            K=K-a[i];
            n++;
        }
        else if(K==0)
        {
            cout<<n;
            break;
        }
        else
        {
            i--;
        }
        cout<<i<<a[i]<<K;
    }
}
