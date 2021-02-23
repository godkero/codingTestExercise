#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
    
    // 자주나오는 순
    // 길이가 긴 순
    // 알파벳 순

bool compare(pair<int,string> a, pair<int,string> b){
    if(a.second.length()== b.second.length() && a.first == b.first)
        return a.second < b.second;
    else if(a.first == b.first)
        return a.second.length() > b.second.length();
    return a.first > b.first; 
}


int main(){

    cin.tie(NULL);
    std::ios::sync_with_stdio(false);

    int n,m;
    vector<string> s;
    cin>>n>>m;
    for(int i = 0 ; i < n ; i ++){
        string str;
        cin>>str;
        if(str.length()>=m){
            s.push_back(str);
        }
    }

    sort(s.begin(),s.end());

    vector <pair<int, string> > v;
    string prev="";
    int index = -1;
    for(int i = 0 ; i<s.size(); i ++){
        
        if(prev == s[i]){
            v[index].first++;
        }
        else{
            index++; 
            pair<int, string> t = make_pair(1,s[i]);
            v.push_back(t);
            prev=s[i];
        }
    }

    //cout<<endl;
    sort(v.begin(),v.end(),compare);

    for(int i = 0 ; i < v.size(); i++){
        cout<<v[i].second<<"\n";
    }


    return 0;
}