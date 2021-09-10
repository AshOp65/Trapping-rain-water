#include<bits/stdc++.h>
using namespace std;
#define take_input freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define t(x)  int n; cin>>n;
//<------------------------------------------------------------------------------->


int TrapWater(int arr[],int n){

 int left[n];
 int right[n];
 left[0]=arr[0];
 for(int i=1; i<n; i++){
   left[i]=max(left[i-1],arr[i]);
 }
 right[n-1]=arr[n-1];
 for(int j=n-2; j>=0; j--){
   right[j]=max(right[j+1],arr[j]);
 }
 int ans=0;
 for(int i=0; i<n; i++){
   ans += min(right[i],left[i])-arr[i];
 }
 return ans;
}

int main()
{
  take_input 
   t(x);
   int arr[n];
   for(int i=0; i<n; i++){
      cin>>arr[i];
   }
   cout<<TrapWater(arr,n);
    return 0;
}


