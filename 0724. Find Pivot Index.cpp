#include<bits/stdc++.h>
using namespace std;


// brute force
int pivotIndex(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++ ) {
            int sum1=0, sum2=0;
            for(int j=0; j<i; j++){
                sum1 += nums[j];
            }
            for(int k=i+1; k<nums.size(); k++) {
                sum2 += nums[k];
            }
            if(sum1==sum2) {
                return i;
            }
            else{
                return -1;
            }
        }
    }

// optimal code
int pivotIndex(vector<int>& nums) {
    int left_sum = 0;
    int right_sum = 0;
    for(int i:nums) {
        right_sum += i;
    }        
    for(int i=0; i<nums.size(); i++) {
        right_sum -= nums[i];
        if(left_sum == right_sum) {
            return i;
        }
        left_sum += nums[i];
    }
    return -1;
}

int main() {
    vector<int> vec = {1,7,3,6,5,6};
    cout<<pivotIndex(vec);
    
    return 0;
}
