#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,c;
    
    int A[10],B[10];
    for(i=0;i<10;i++)
    {
        B[i]=0;
    }

    for(i=0;i<10;i++)
    {
        cin>>A[i];
    }
   
    for (i=0;i<10;i++)
    {
        cout<<A[i]<<"\n";
        B[A[i]]+=1;
    }
     for(i=0;i<10;i++)
    {
        cout<<B[i]<<"\n";
    }
    return 0;
}
