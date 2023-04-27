#include <bits/stdc++.h>
using namespace std;


int solve(int n,int k){
    vector<int> ans;
    for(int i=1;i<=n;i++){
        
        if(n%i==0){
            ans.push_back(i);
        }
    }
    int size=ans.size();
    
    if(k > size)
    return 1;
    
    else
    return ans[size-k];
    
}


int main()
{
    int n,k;
    cin >> n>>k;
   cout << solve(n,k) << endl;
    return 0;
}
