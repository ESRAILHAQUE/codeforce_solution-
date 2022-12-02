#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,c,largest,second;
    string s;
    cin>>t;
    while(t--){
   cin>>n;
   int a[n],b[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
    b[i]=a[i];
   }
   sort(b,b+n);
   int larg = a[0];
    for(int i=1; i<n; i++)
    {
        if(larg<a[i])
            larg = a[i];
            
    }
       for(int i=0;i<n;i++){
        if(a[i]==larg)cout<<a[i]-b[n-2]<<" ";
  else  cout<<a[i]-larg<<" ";
   }
   cout<<endl;
   
   
}
}
