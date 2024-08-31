#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    long a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    unordered_map<long, long> mpp;
    for(int i=0; i<n; i++)
    {
        mpp[a[i]]++;
    }
    for(auto it: mpp)
    {
        cout<<it.first<<" "<<it.second<<endl;
    }
    int maxi=0;
    for(int i=0; i<n; i++)
    {
        if(maxi<mpp[a[i]])
        {
            maxi=mpp[a[i]];
        }
    }
    cout<<maxi;

    return 0;
}

#include<bits/stdc++.h> 
using namespace std; 
 int  main() {
    long long n;     
    cin>>n;     
    vector<long long>a(n);     
    map<long long,long long>mp;     
    for(int i=0; i<n; i++)     {         
        cin>>a[i];         
        mp[a[i]]++;     
    }     
    long long count =0;     
    long long max =0;     
    for(auto x:mp)     
    {         
        if(x.second==max)         
        {             
            count++;
        }         
        if(x.second>max)
        {             
            max= x.second;             
            count=1;         
        }     
    }     
    cout<<count<<endl;     
    return 0;     
}
