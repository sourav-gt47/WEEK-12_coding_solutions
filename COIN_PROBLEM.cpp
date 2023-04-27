#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  
  if(n<=9){
      
      int o,t,f;
      
      f=n/5;
      n=n%5;
      t=n/2;
      n=n%2;
      o=n;
      
      cout << (o +t + f) << " " << f << " " << t << " " << o << endl;
      return 0;
  }
  

  int one,two;
  
  int five = (n-4)/5;
  
  if((n-five*5) % 2 == 0)
      one = 2;
      
else
    one = 1;
    
    two = (n - five*5-one*1)/2;
 
   cout << (one +two + five) << " " << five << " " << two << " " << one << endl;
 
 return 0;
}