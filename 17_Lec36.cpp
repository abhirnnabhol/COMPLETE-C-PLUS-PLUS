// #include <iostream>
// #include <vector>
// using namespace std;

// bool searching(int target,int row,vector<vector<int>> &mat){
//     int stC=0,endC=mat[row].size()-1;
//     while(stC<=endC){
//         int midC=stC+(endC-stC)/2;
//         if(target==mat[row][midC]){
//             return true;
//         }else if(mat[row][midC]<target){
//             stC=midC+1;
//         }else{
//             endC=midC-1;
//         }
//     }
//     return false;    
// }
// bool search(vector<vector<int>> &mat,int target){
//     int stR=0,endR=mat.size()-1;
//     while(stR<=endR){
//         int midR=stR+(endR-stR)/2;
//         if(mat[midR][0]<=target && target<=mat[midR][mat[midR].size()-1]){
//             return searching(target,midR,mat);
//         }else if(mat[midR][mat[midR].size()-1]<target){
//             stR=midR+1;
//         }else{
//             endR=midR-1;
//         }
//     }
//     return false;
// }
// int main(){
//     int target;
//     cout<<"enter a target: ";
//     cin>>target;
//     vector<vector<int>>mat={{1,3,5,7},{10,11,16,20},{23,30,34,60}};
//     cout<<search(mat,target);
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// bool search(vector<vector<int>>mat,int target){
//     int rows=0,columns=mat[0].size()-1;
//     while(columns>=0 && rows<mat.size()){
//         if(target==mat[rows][columns]){
//             return true;
//         }else if(target<mat[rows][columns]){
//             columns--;
//         }else{
//             rows++;
//         }
//     }
//     return false;
// }
// int main(){
//     int target;
//     cout<<"enter a target: ";
//     cin>>target;
//     vector<vector<int>>mat={{1,4,7,11,15},{2,5,8,12,19},{3,6,9,16,22},{10,13,14,17,24},{18,21,21,26,30}};
//     bool val=search(mat,target);
//     if(val==true){
//         cout<<"it is found. ";
//     }else{
//         cout<<"it is not found. ";
//     }
//     return 0;

// }
