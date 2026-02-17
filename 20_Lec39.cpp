// nums={-1,0,1,2,-1,-4};

// #include <iostream>
// #include <vector>
// #include <set>
// #include <algorithm>
// using namespace std;
// vector<vector<int>> sum_num(vector<int> &nums){
//     set<vector<int>>s;
//     vector<vector<int>>ans;
//     for(int i=0;i<nums.size();i++){
//         for(int j=i+1;j<nums.size();j++){
//             for(int k=j+1;k<nums.size();k++){
//                 if(nums[i]+nums[j]+nums[k]==0){
//                     vector<int>check={nums[i],nums[j],nums[k]};
//                     sort(check.begin(),check.end());
//                     if(s.find(check)==s.end()){
//                         s.insert(check);
//                         ans.push_back(check);
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int>nums={-1,0,1,2,-1,-4};
//     vector<vector<int>>ans=sum_num(nums);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[0].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }
  
// #include <iostream>
// #include <vector>
// #include <set>
// #include <algorithm>
// using namespace std;
// vector<vector<int>> sum_three(vector<int> &nums){
//     set<vector<int>>ch;
//     vector<vector<int>>ans;
//     for(int i=0;i<nums.size();i++){
//         set<int>s;
//         for(int j=i+1;j<nums.size();j++){
//             int k=-nums[j]-nums[i];
//             if(s.find(k)!=s.end()){
//                 vector<int>check={nums[i],nums[j],k};
//                 sort(check.begin(),check.end());
//                 if(ch.find(check)==ch.end()){
//                     ch.insert(check);
//                     ans.push_back(check);
//                 }
//             }
//             s.insert(nums[j]);

//         }
//     }
//     return ans;

// }
// int main(){
//     vector<int>nums={-1,0,1,2,-1,-4};
//     vector<vector<int>> val=sum_three(nums);
//     for(int i=0;i<val.size();i++){
//         for(int j=0;j<val[0].size();j++){
//             cout<<val[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// vector<vector<int>> sum_three(vector<int> &nums){
//     vector<vector<int>>ans;
//     sort(nums.begin(),nums.end());
//     for(int i=0;i<nums.size();i++){
//         if(i>0 && nums[i]==nums[i-1]) continue;
//         int j=i+1,k=nums.size()-1;
//         while(j<k){
//             if(nums[i]+nums[j]+nums[k]==0){
//                 ans.push_back({nums[i],nums[j],nums[k]});
//                 j++,k--;
//             }else if(nums[i]+nums[j]+nums[k]<0){
//                 j++;
//             }else{
//                 k--;
//             }
//             while(j<k && nums[j]==nums[j-1]) j++;
//             while(j<k && nums[k]==nums[k+1]) k--;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int>nums={-1,0,1,2,-1,-4};
//     sum_three(nums);
//     return 0;
// }

// 3sums

// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <set>
// using namespace std;
// vector<vector<int>> three_sum(vector<int> &nums){
//     set<vector<int>>s;
//     vector<vector<int>>ans;
//     for(int i=0;i<nums.size();i++){
//         for(int j=i+1;j<nums.size();j++){
//             for(int k=j+1;k<nums.size();k++){
//                 if(nums[i]+nums[j]+nums[k]==0){
//                     vector<int>a={nums[i],nums[j],nums[k]};
//                     sort(a.begin(),a.end());
//                     if(s.find(a)==s.end()){
//                         s.insert(a);
//                         ans.push_back(a);
//                     }
//                 }
//             }
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int>nums={-1,0,1,2,-1,-4};
//     vector<vector<int>>ans=three_sum(nums);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[0].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <set>
// #include <algorithm>
// using namespace std;
// vector<vector<int>> sum_num(vector<int> &nums){
//     set<vector<int>>unique;
//     vector<vector<int>> ans;
//     for(int i=0;i<nums.size();i++){
//         set<int>a;
//         for(int j=i+1;j<nums.size();j++){
//             int k=-nums[i]-nums[j];
//             if(a.find(k)!=a.end()){
//                 vector<int>check={nums[i],nums[j],k};
//                 sort(check.begin(),check.end());
//                 if(unique.find(check)==unique.end()){
//                     unique.insert(check);
//                     ans.push_back(check);
//                 }
//             }
//             a.insert(nums[j]);
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int>nums={-1,0,1,2,-1,-4};
//     vector<vector<int>>ans=sum_num(nums);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[0].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// vector<vector<int>> sum_num(vector<int> &nums){
//     sort(nums.begin(),nums.end());
//     vector<vector<int>> ans;
//     for(int i=0;i<nums.size();i++){
//         if(i>0 && nums[i]==nums[i-1]) continue;
//         int j=i+1,k=nums.size()-1;
//         while(j<k){
//             if(nums[i]+nums[j]+nums[k]==0){
//                 ans.push_back({nums[i],nums[j],nums[k]});
//                 j++,k--;
//             }else if(nums[i]+nums[j]+nums[k]<0){
//                 j++;
//             }else{
//                 k--;
//             }
//             while(j<k && j>i+1 && nums[j]==nums[j-1]) j++;
//             while(j<k && k+1<nums.size() && nums[k]==nums[k+1]) k--;
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int>nums={1,2,0,1,0,0,0,0};
//     vector<vector<int>>ans=sum_num(nums);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// vector<vector<int>> sum_num(vector<int> &nums){
//     sort(nums.begin(),nums.end());
//     vector<vector<int>> ans;
//     for(int i=0;i<nums.size();i++){
//         if(i>0 && nums[i]==nums[i-1]) continue;
//         int j=i+1,k=nums.size()-1;
//         while(j<k){
//             if(nums[i]+nums[j]+nums[k]==0){
//                 ans.push_back({nums[i],nums[j],nums[k]});
//                 j++,k--;
//                 while(j<k && nums[j]==nums[j-1]) j++;
//                 while(j<k && nums[k]==nums[k+1]) k--;
//             }else if(nums[i]+nums[j]+nums[k]<0){
//                 j++;
//             }else{
//                 k--;
//             }
//         }
//     }
//     return ans;
// }
// int main(){
//     vector<int>nums={1,2,0,1,0,0,0,0};
//     vector<vector<int>>ans=sum_num(nums);
//     for(int i=0;i<ans.size();i++){
//         for(int j=0;j<ans[i].size();j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;

// }

