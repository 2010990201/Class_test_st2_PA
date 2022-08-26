#include<iostream>

#include <bits/stdc++.h>
using namespace std;
//declaring function to sort and pushing values 
long mean(vector<long> grades){
    return accumulate(begin(grades), end(grades), (long)0)/grades.size();
}
//returning mean
long median(vector<long> grades, int size){
    sort(begin(grades), end(grades));
    
    if(size % 2 != 0){
        return grades[size/2];
    }
    
    int a = size/2;
    int b = a + 1;
    
    return (grades[a] + grades[b])/2; 
}
//returning mode
pair<vector<string>, int> mode(vector<string> names, vector<long> grades){
    unordered_map<int, int> freq;
    
    for(int i=0; i<grades.size(); i++)
        freq[grades[i]]++;
    
    int key, val = 0;
    for(auto& p: freq){
        if(p.second > val)
            key = p.first;
    }
    
    pair<vector<string>, int> ans;
    vector<string> studentsWithMode;
    for(int i=0; i<grades.size(); i++){
        if(grades[i] == freq[key])
            studentsWithMode.push_back(names[i]);
    }
    
    return ans;
}

int main()
{
    vector<string> names;
    vector<long> grades;
    //declaring size
    int size;
    cin>>size;
    //declaring string and name
    string name;
    int grade;
    //pusing the values
    for(int i=0; i<size; i++){
        cin>>name>>grade;
        names.push_back(name);
        grades.push_back(grade);
    }
    //printing mean median mode
    cout<<"mean: "<<mean(grades)<<endl;
    cout<<"median: "<<median(grades, size)<<endl;
    
    pair<vector<string>, int> p = mode(names, grades);
    cout<<"mode: "<<p.second<<endl<<"students with the mode ";
    for(int i=0; p.first.size(); i++){
        cout<<p.first[i]<<" ";
    }
        
    return 0;
}
//Diksha Dhingra
//2010990201
//set 2 
//question 1
