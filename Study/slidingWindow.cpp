#include <bits/stdc++.h>
using namespace std;

int maximumSumSubarrayOfSizeK(vector<int> &a, int k, int n){
    int i = 0, j = 0, sum = 0, ans = INT_MIN;
    while(j < n){
        sum += a[j];
        if(j-i+1 < k){
            j++;
        }else{
            ans = max(ans, sum); 
            sum -= a[i];
            i++;
            j++;
        }
    }
    return ans;
}

int main(){
    vector<int> a = {1, 4, 2, 10, 23, 3, 1, 0, 20};
    int k = 4;
    cout<<maximumSumSubarrayOfSizeK(a, k, a.size())<<endl;
}