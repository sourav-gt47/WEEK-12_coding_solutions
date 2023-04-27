#include <bits/stdc++.h>
using namespace std;

vector<string> ans;

void solve(){
    
    string str;
    cin >> str;
    
    unordered_map<int,int> mp;
    int flag=0;
    for(int i=0;i<str.size();i++){
        mp[(str[i]-'a')+1]++;
    }
    
    for(auto i: mp){
        if(i.first != i.second){
            flag=1;
            break;
        }
        
    }
    if(flag)
    ans.push_back("NO");
    else
    ans.push_back("YES");
}


int main()
{
   
   int t;
   cin >>t;
   
   while(t--){
       
       solve();
   }
   
   for(auto i: ans){
       
       cout << i << endl;
   }
    
    return 0;
}
