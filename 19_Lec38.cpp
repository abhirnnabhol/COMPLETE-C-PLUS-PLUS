//TWO SUM

//BRUTE FORCE APPROACH
// #include <iostream>
// #include <vector>
// using namespace std;
// pair<int,int> twoSum(vector<int>a,int target){
//     for(int i=0;i<a.size();i++){
//         int arr=a[i];
//         for(int j=i+1;j<a.size();j++){
//             int sum=a[i]+a[j];
//             if(sum==target){
//                 return {i,j};
//             }
//         }
//     }
//     return {-1,-1};
// }
// int main(){
//     int target;
//     cout<<"enter a target: ";
//     cin>>target;
//     vector<int>a={5,2,11,7,15};
//     pair<int,int>b=twoSum(a,target);
//     cout<<b.first<<","<<b.second<<endl;
//     return 0;
// }

//BETTER APPROACH
// #include <iostream>
// #include <algorithm>
// #include <vector>
// using namespace std;
// pair<int,int> twoSum(vector<int>arr,int target){
//     sort(arr.begin(),arr.end());
//     int st=0,end=arr.size()-1;
//     while(st<=end){
//         if(arr[st]+arr[end]==target){
//             return {arr[st],arr[end]};
//         }else if(arr[st]+arr[end]<target){
//             st++;
//         }else{
//             end--;
//         }
//     }
//     return {-1,-1};
// }
// int main(){
//     int target;
//     cout<<"enter a target: ";
//     cin>>target;
//     vector<int>arr={5,2,11,7,15};
//     pair<int,int>val=twoSum(arr,target);
//     if(val.first!=-1){
//         for(int i=0;i<arr.size();i++){
//             if(val.first==arr[i]){
//                 cout<<i<<endl;
//             }
//             if(val.second==arr[i]){
//                 cout<<i<<endl;
//             }
//         }
//     }
//     if(val.first==-1){
//         cout<<val.first<<","<<val.second<<endl;
//     }
//     return 0;

// }

//Optimised
// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;
// vector<int> twoSum(vector<int>& nums, int target) {
//     vector<int>answer;
//     unordered_map<int,int>ans;
//     for(int i=0;i<nums.size();i++){
//         int first=nums[i];
//         int second=target-nums[i];
//         if(ans.find(second)!=ans.end()){
//             answer.push_back(i);
//             answer.push_back(ans[second]);
//             return answer;
//         }
//         ans[first]=i;
//     }
//     answer.push_back(-1);
//     answer.push_back(-1);
//     return answer;
// }
// int main(){
//     int target;
//     vector<int>nums={5,2,11,7,15};
//     cout<<"enter a target: ";
//     cin>>target;
//     vector<int>a=twoSum(nums,target);
//     for(int i:a){
//         cout<<i<<",";
//     }
//     cout<<endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <unordered_set>
// using namespace std;
// vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid){
//     //repeated values
//     int a,b;
//     int actualSum=0;
//     vector<int>ans;
//     unordered_set<int>set;
//     for(int i=0;i<grid.size();i++){
//         for(int j=0;j<grid[i].size();j++){
//             actualSum=actualSum+grid[i][j];
//             if(set.find(grid[i][j])!=set.end()){
//                 a=grid[i][j];
//                 ans.push_back(a);
//             }
//             set.insert(grid[i][j]);
//         }
//     }
//     int n=grid.size();
//     int exp_sum=((n*n)*((n*n)+1))/2;
//     b=exp_sum+a-actualSum;
//     ans.push_back(b);
//     return ans;
// }
// int main(){
//     vector<vector<int>>grid={{9,1,7},{8,9,2},{3,4,6}};
//     vector<int>ans=findMissingAndRepeatedValues(grid);
//     for(int i:ans){
//         cout<<i<<",";
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <unordered_set>
// using namespace std;
// int findDuplicate(vector<int>& nums){
//     unordered_set<int>set;
//     int a;
//     for(int i=0;i<nums.size();i++){
//         if(set.find(nums[i])!=set.end()){
//             a=nums[i];
//             break;
//         }
//         set.insert(nums[i]);
//     }
//     return a;
// }
// int main(){
//     vector<int>nums={3,1,3,4,2};
//     cout<<findDuplicate(nums);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int findDuplicate(vector<int> &nums){
//     int slow=0,fast=0;
//     do{
//         slow=nums[slow];
//         fast=nums[nums[fast]];
//     }while(slow!=fast);
//     slow=0;
//     while(slow!=fast){
//         slow=nums[slow];
//         fast=nums[fast];
//     }
//     return slow;
// }
// int main(){
//     vector<int>nums={3,1,3,4,2};
//     cout<<findDuplicate(nums);
//     return 0;
// }
