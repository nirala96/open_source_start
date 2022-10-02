#include<bits/stdc++.h>
using namespace std;

string read(string s){
    int i=0;
    string domain="";
    while(s[i]!='/'){
        domain+=s[i];
        i++;
    }
    return domain;
}

string read_up(string s){
    int i=0;
    string ip="";
    string up="";
    while(s[i]!='/'){
        i++;
    }
    i++;
    while(i<s.length() && s[i]!='/' && s[i]!='?')
    {
        up+=s[i];
        i++;
    }
    i++;
    if(up=="machine_up"){
        i+=3;
        while(i<s.length())
        {
            ip+=s[i];
            i++;
        }
    }
    return ip;
}

string read_down(string s){
    int i=0;
    string ip="";
    string down="";
    while(s[i]!='/'){
        i++;
    }
    i++;
    while(i<s.length()&&s[i]!='/' && s[i]!='?')
    {
        down+=s[i];
        i++;
    }
    i++;
    if(down=="machine_down"){
        i+=3;
        while(i<s.length())
        {
            ip+=s[i];
            i++;
        }
    }
    return ip;
}
int main(){


    int n,urlcnt,count,queries;
    string url_s,s,p;
    map<string,vector<string>>mp;
    map<string,queue<string>>mp1;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p;
    }

    cin>>urlcnt;
    for(int i=0;i<urlcnt;i++){
        cin>>url_s;
        cin>>count;
        queue<string>q;
        for(int j=0;j<count;j++){
            cin>>s;
            q.push(s);
        }
        mp1[url_s]=q;
    }
    cin>>queries;
    for(int i=0;i<queries;i++){
        cin>>s;

        string domain=read(s);
        string up=read_up(s);
        string down=read_down(s);
        if(up==""&& down==""){
    
            queue<string> q=mp1[domain];
        
            string machine=q.front();
            q.pop();
    
            mp[machine].push_back(s);
            q.push(machine);
            mp1[domain]=q;
        }
        else if(up!=""){
            queue<string> q=mp1[domain];
            q.push(up);
            string temp=q.front();
            q.pop();
            q.push(temp);
            mp1[domain]=q;
        }
        else if(down!=""){
            queue<string> modified;
            queue<string> q=mp1[domain];
            while(!q.empty() && q.front()!=down){
                modified.push(q.front());
                q.pop();
            }
            q.pop();
            while(!q.empty()){
                modified.push(q.front());
                q.pop();
            }
            mp1[domain]=modified;
        }
    
    }
    
    for(auto it:mp){
        cout<<it.first<<endl;
        vector<string> vec=it.second;
        for(auto it1:vec)
        cout<<it1<<endl;
    }
     return 0;
}
