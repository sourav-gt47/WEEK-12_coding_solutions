#include <bits/stdc++.h>
using namespace std;
#define ll int long long

bool prime_check(int n){
    
    for(int i=2;i<n;i++){
        
        if(n%i == 0)
         return false;
        
    }
     return true;
}


bool search(int n, vector<int> &v){
    
    for(int i=0;i<n;i++){
        
        if(v[i] == n)
          return true;
        
    }
     return false;
}


int main()
{
    
    // if n=20 ---> output should be x=5,17.
    
    // 2+3+5+7+11+13+17+19
    
    int n;
    cin >> n;
    vector<int> v;
    vector<int> ans;
    for(int i=2;i<=n;i++){
        
        if(prime_check(i))
          v.push_back(i);
        
    }
    int sum = 0;
   
     for(int i=0;i<v.size();i++){
         
         sum += v[i]; 
         if(prime_check(sum) and search(sum,v) and v[i] != 2)
            ans.push_back(sum);
         
     }
   
     
     for(auto i: ans){
         
         cout << i << " ";
         
     }
    
    cout << endl;
    

    return 0;
}