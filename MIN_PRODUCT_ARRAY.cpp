#include <bits/stdc++.h>
using namespace std;

int solve(int n,int k){
    
  vector<int> a1(n);
  vector<int> a2(n);
  
  for(int i=0;i<n;i++)
     cin >> a1[i];
     
  for(int i=0;i<n;i++)
     cin >> a2[i];
     
     int res=0,temp,dmax=INT_MIN;
  for(int i=0;i<n;i++){
      
      int prod = a1[i]*a2[i];
      res += prod;
      
      if(prod<0 and a1[i]<0) //a2[i]>0
         temp = (a1[i]-2*k)*a2[i];
      
      else if(prod <0 and a2[i]<0) //a1[i]>0 
         temp = (a1[i]+2*k)*a2[i];
         
      else if(prod>0 and a1[i]<0) //a2[i]<0
         temp = (a1[i]+2*k)*a2[i];
         
      else if(prod>0 and a1[i]>0) //a2[i]>0         
         temp = (a1[i]-2*k)*a2[i];
          
          int diff = abs(prod-temp);
          
            if(diff > dmax){
                
                dmax = diff;
            }
          
  }
  
   return (res-dmax);
    
    
}

int main()
{
    int n, k;
    cin >> n >> k;
   cout << solve(n,k) << endl;
    
    return 0;
}
