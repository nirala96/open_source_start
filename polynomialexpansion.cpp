#include <bits/stdc++.h>
using namespace std;
 
#define ff(i,n) for(ll i=0; i<n; i++)
#define ll long long

vector<pair<int, int>> simp(string s, char c) {
    
    vector<pair<int, int>> v;
    for(int i = 0; i<s.size(); i++) {
        string coef = "";
        
        if(s[i] == '-' || s[i] == '+') {
            coef += s[i];
            i++;
        }
        
        while(s[i] >= '0' && s[i] <= '9') {
            coef += s[i];
            i++;
        }
        
        string expt = "";
        
        if(s[i] == c){
            i++;
            if(s[i] == '^') i++;
            else {
                v.push_back({stoi(coef), 1});
                i--;
                continue;
            }
        }
        else {
            v.push_back({stoi(coef), 0});
            i--;
            continue;
        }
        
        if(s[i] == '-' || s[i] == '+') {
            expt += s[i];
            i++;
        }
        while(s[i] >= '0' && s[i] <= '9') {
            expt+=s[i];
            i++;
        }
        
        v.push_back({stoi(coef), stoi(expt)});
        // if(i >= s.size()) return v;
        
        i--;
    }
    return v;
}

string solve(string s)
{
    vector<pair<int, int>> a, b,ans;
    string s1, s2;
    int i;
    char c;
    for(i = 1; s[i] != ')'; i++) {
        s1+=s[i];
        if(s[i] >= 'a' && s[i] <= 'z') {
            c= s[i];
        }
    }
    for(i+=2; i < s.size() - 1; i++) {
        s2+=s[i];
    }
    // cout<<s1<<"\n"<<s2<<"\n";
    
    a = simp(s1, c);
    b = simp(s2, c);
    
    for(int i = 0; i<a.size(); i++) {
        for(int j = 0; j<b.size(); j++) {
            ans.push_back({a[i].first*b[j].first, a[i].second+b[j].second});
        }
    }
    
    map<int, int> mp;
    for(auto &[x,y]: ans) {
        mp[y] += x;
    }

    ans.clear();
    for(auto &[x,y]: mp){
        ans.push_back({y,x});
    }
    
    
    sort(ans.begin(), ans.end(), [&](pair<int, int> a, pair<int, int> b) {
        return a.second > b.second;
    });
    
    // for(int i= 0; i<ans.size(); i++) {
    //     cout<<ans[i].first<<"..."<<ans[i].second<<"\n";
    // }
    
    string res = "";
    
    for(auto &[x,y]: ans) {
        if(x>0 and res != "") res += '+';
        if(x!=1) res += to_string(x);
        if(y!=0) {
            res += c;
            if(y != 1) {
                res+= '^';
                res += to_string(y);
            }
        }
    }
    
    return res;
}

int main() 
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    ll t = 1;
    // cin>>t;
    while(t--)
    {
        string s; cin>>s;
        cout<<solve(s)<<"\n";
    }
    
    return 0;
 }
