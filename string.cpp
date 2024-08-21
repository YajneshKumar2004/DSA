#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool anagram(string s1, string s2) {
    vector<int> v1(128,-1);
    vector<int> v2(128, -1);
    if(s1.length() != s2.length()) return false;

    for(int i=0; i<s1.size(); i++) {
        if(v1[s1[i] != v2[s2[i]]]) return false;
        v1[s1[i] = v2[s2[i]]] = i;
    }
    return true;
}

int main() {
    // strings is anagram or not
    string s1, s2;
    cin>>s1>>s2;
    if(anagram(s1,s2)) cout<<"Isomorphic";
    else cout<<"Not a isomorphic";
    
    return 0;
}