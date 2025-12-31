// Merge 2 sorted array with xtra space

// #include <iostream>
// #include <vector>
// using namespace std;
// void merge(int m,int n,vector<int>a,vector<int>b){
//     int st1=0,st2=0,count=0;
//     vector<int>c;
//     while(count<n+m){
//         if(st1<=m && st2<=n){
//             if(st1==m){
//                 c.push_back(b[st2++]);
//             }else if(st2==n){
//                 c.push_back(a[st1++]);
//             }else{
//                 if(a[st1]<=b[st2]){
//                     c.push_back(a[st1++]);
//                 }else{
//                     c.push_back(b[st2++]);
//                 }
//             }
//         }
//         count++;
//     }
//     for(int i:c){
//         cout<<i<<" ";
//     }

// }
// int main(){
//     int m=3,n=3;
//     vector<int>A={1,2,3};
//     vector<int>B={2,5,6};
//     merge(m,n,A,B);
//     return 0;

// }

// Merge 2 sorted array without xtra space

// #include <iostream>
// #include <vector>
// using namespace std;
// void merge(vector<int>& a, int m, vector<int>& b, int n) {
//     int i=m-1,j=n-1,idx=m+n-1;
//     while(j>=0 && i>=0){
//         if(a[i]>=b[j]){
//             a[idx]=a[i];
//             idx--;
//             i--;
//         }else{
//             a[idx]=b[j];
//             idx--;
//             j--;
//         }
//     }
//     while(j>=0){
//         a[idx]=b[j];
//         idx--;
//         j--;
//     }
//     for(int i:a){
//         cout<<i<<" ";
//     }

// }
// int main(){
//     int m=3,n=3;
//     vector<int>a={1,2,3,0,0,0};
//     vector<int>b={2,5,6};
//     merge(a,m,b,n);
//     return 0;

// }

// Next permutation

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// void nextPermutation(vector<int>& nums){
//     int pivot=-1,j=nums.size()-1;
//     for(int i=nums.size()-2;i>=0;i--){
//         if(nums[i]<nums[i+1]){
//             pivot=i;
//             break;
//         }
//     }
//     if(pivot==-1){
//         reverse(nums.begin(),nums.end());
//         return;     
//     }
//     for(int i=j;i>pivot;i--){
//         if(nums[pivot]<nums[i]){
//             swap(nums[pivot],nums[i]);
//             break;
//         }
//     }
//     int i=pivot+1;
//     while(i<j){
//         swap(nums[i],nums[j]);
//         i++;
//         j--;
//     }

// }
// int main(){
//     vector<int>nums={2,3,1};
//     nextPermutation(nums);
//     for(int i:nums){
//         cout<<i<<" ";
//     }
//     return 0;
// }

// Merge 2 sorted array with xtra space

// Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
// Output: [1,2,2,3,5,6]

// #include <iostream>
// #include <vector>
// using namespace std;
// void merge(vector<int> &nums1,vector<int> &nums2,int n,int m){
//     int i=m-1,j=n-1,idx=m+n-1;
//     while(i>=0 && j>=0){
//         if(nums1[i]>=nums2[j]){
//             nums1[idx]=nums1[i];
//             idx--;
//             i--;
//         }else{
//             nums1[idx]=nums2[j];
//             idx--;
//             j--;
//         }
//     }
//     while(j>=0){
//         nums1[idx]=nums2[j];
//         idx--;
//         j--;  
//     }
//     for(int i:nums1){
//         cout<<i<<" ";
//     }

// }
// int main(){
//     vector<int>nums1={1,2,3,0,0,0};
//     int m=3,n=3;
//     vector<int>nums2={2,5,6};
//     merge(nums1,nums2,n,m);

//     return 0;

// }

// Next permutation
