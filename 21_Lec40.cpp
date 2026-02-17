#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> four_sum(vector<int> &nums,int target){
    sort(nums.begin(),nums.end());
    vector<vector<int>>ans;
    for(int i=0;i<nums.size();i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        for(int j=i+1;j<nums.size();j++){
            if(j>i+1 && nums[j]==nums[j-1]) continue;
            int k=j+1,l=nums.size()-1;
            while(k<l){
                long long sum=(long long)nums[i]+(long long)nums[j]+(long long)nums[k]+(long long)nums[l];
                if(sum==target){
                    ans.push_back({nums[i],nums[j],nums[k],nums[l]});
                    k++,l--;
                    while(k<l && nums[k]==nums[k-1]) k++;
                    while(k<l && nums[l]==nums[l+1]) l--;
                }else if(sum<target){
                    k++;
                }else{
                    l--;
                }
            }
        }
    }
    return ans;
}
int main(){
    int target;
    cout<<"enter a target: ";
    cin>>target;
    vector<int>nums={-2,-1,-1,1,1,2,2};
    vector<vector<int>> val=four_sum(nums,target);
    for(int i=0;i<val.size();i++){
        for(int j=0;j<val[i].size();j++){
            cout<<val[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
