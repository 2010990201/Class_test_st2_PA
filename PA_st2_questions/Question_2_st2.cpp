

#include<iostream>
#include <bits/stdc++.h>
using namespace std;
//checking the values if they are same or not
bool cmp(pair<int, int> a, pair<int, int> b){
    return a.second == b.second ? a.first < b.first : a.second < b.second;
}
//returning the sorted values
vector<pair<int, int>> sortmap(unordered_map<int, int>& mp){
    vector<pair<int, int>> v;
    
    for(auto& p: mp)
        v.push_back(p);
        
    sort(begin(v), end(v), cmp);
    return v;
}

int main()
{
    unordered_map<int, int> mp;
    //defining and taking the size from the user
    int size;
    cin>>size;
    //defining keys and values as a and b 
    int a, b;
    for(int i=0; i<size; i++){
    //taking input for a and b
        cin>>a>>b;
    //map the values 
        mp[a] = b;
    }
    //taking values in pair to sort map values
    vector<pair<int, int>> result = sortmap(mp);
    for(auto& x: result){
    	//printing the keys and values -- a and b
        cout<<x.first<<" "<<x.second<<endl;
    }
    
    return 0;
}
//Diksha Dhingra 2010990201
//set 2
//question 2