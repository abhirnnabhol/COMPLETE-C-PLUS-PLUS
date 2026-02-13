// #include <iostream>
// #include <vector>
// using namespace std;
// vector<int> spiralOrder(vector<vector<int>>mat){
//     vector<int>new_mat;
//     int m=mat.size(),n=mat[0].size();
//     int stC=0,endC=n-1,stR=0,endR=m-1;
//     while(stC<=endC && stR<=endR){
//         for(int i=stC;i<=endC;i++){
//             new_mat.push_back(mat[stR][i]);//right
//         }
//         for(int i=stR+1;i<=endR;i++){
//             new_mat.push_back(mat[i][endC]);//down
//         }
//         for(int i=endC-1;i>=stC;i--){
//             if(stR==endR){
//                 break;
//             }
//             new_mat.push_back(mat[endR][i]);//left
//         }
//         for(int i=endR-1;i>=stR+1;i--){
//             if(stC==endC){
//                 break;
//             }
//             new_mat.push_back(mat[i][stC]);//up
//         }
//         stC++,stR++,endC--,endR--;
//     }
//     return new_mat;
// }
// int main(){
//     vector<vector<int>>mat={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     vector<int>a=spiralOrder(mat);
//     for(int i:a){
//         cout<<i<<",";
//     }
//     cout<<endl;
//     return 0;

// }
