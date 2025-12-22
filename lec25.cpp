//brute force approach

// #include <iostream>
// #include <vector>
// using namespace std;
// void sorting(vector<int> &nums){
//     int count_0s=0,count_1s=0,count_2s=0;
//     for(int i: nums){
//         if(i==0){
//             count_0s++;
//         }else if(i==1){
//             count_1s++;
//         }else{
//             count_2s++;
//         }
//     }
//     int index=0;
//     for(int i=0;i<count_0s;i++){
//         nums[index]=0;
//         index++;
//     }
//     for(int i=0;i<count_1s;i++){
//         nums[index]=1;
//         index++;
//     }
//     for(int i=0;i<count_2s;i++){
//         nums[index]=2;
//         index++;
//     }

// }
// int main(){
//     vector<int>nums={2,0,2,1,1,0,1,2,0,0};
//     sorting(nums);
//     for(int i:nums){
//         cout<<i<<endl;
//     }
//     return 0;
// }

//dutch national flag algorithm

// #include <iostream>
// #include <vector>
// using namespace std;
// void sortColors(vector<int>& nums){
//     int n=nums.size();
//     int mid=0,high=n-1,low=0;
//     while(mid<=high){
//         if(nums[mid]==0){
//             swap(nums[low],nums[mid]);
//             low++,mid++;
//         }else if(nums[mid]==1){
//             mid++;
//         }else{
//             swap(nums[mid],nums[high]);
//             high--;
//         }
//     }
// }
// int main(){
//     vector<int>nums={2,0,2,1,1,0,1,2,0,0};
//     sortColors(nums);
//     for(int i:nums){
//     cout<<i<<endl;
//     }
//     return 0;

// }

// 2,0,2,1,1,0,1,2,0,0 ---> 0,0,0,0,1,1,1,unsorted,2,2,2

// #include <iostream>
// #include <vector> 
// using namespace std;
// void sorting(vector<int> &a){
//     int n=a.size();
//     int low=0,mid=0,high=n-1;
//     while(mid<=high){
//         if(a[mid]==0){
//             swap(a[mid],a[low]);
//             mid++,low++;
//         }else if(a[mid]==1){
//             mid++;
//         }else{
//             swap(a[mid],a[high]);
//             high--;
//         }
//     }
// }
// int main(){
//     vector<int>a={2,0,2,1,1,0,1,2,0,0};
//     sorting(a);
//     for(int i:a){
//         cout<<i<<" ";
//     }
//     return 0;
// }
