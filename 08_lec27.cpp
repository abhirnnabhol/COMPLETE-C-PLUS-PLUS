//vector

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>a={12,344,56,43};
    // vector<int>b(a);
    // a.push_back(12);
    // a.push_back(89);
    // a.pop_back();
    // a.emplace_back(22);
    // a.erase(a.begin()+1,a.begin()+3);
    // a.insert(a.begin()+2,12);
    // a.clear();
    // cout<<a.empty();
    // for(int i:a){
    //     cout<<i<<endl;
    // }
    // cout<<a.size()<<endl;
    // cout<<a.capacity()<<endl;
    // cout<<a.front()<<endl;
    // cout<<a.back()<<endl;
    // for(auto it=a.begin();it!=a.end();it++){
    //     cout<<*(it)<<" ";
    // }
    // for(auto it=a.rbegin();it!=a.rend();it++){
    //     cout<<*(it)<<" ";
    // }
//     return 0;
// }

//list

// #include <iostream>
// #include <list>
// using namespace std;
// int main(){
//     list<int>l;
//     l.push_back(90);
//     l.emplace_back(89);
//     l.emplace_front(88);
//     l.push_front(100);

    // l.pop_back();
    // l.pop_front();

    // cout<<l.size()<<endl;
    // cout<<l.front()<<endl;
    // cout<<l.back()<<endl;
    // l.clear();
    // for(auto it=l.begin();it!=l.end();it++){
    //     cout<<*(it)<<endl;
    // }
    // for(auto it=l.rbegin();it!=l.rend();it++){
    //     cout<<*(it)<<endl;
    // }
    
//     return 0;
// }

//deque

// #include <iostream>
// #include <deque>
// using namespace std;
// int main(){
//     deque<int>d;
//     d.push_back(90);
//     d.emplace_back(89);
//     cout<<*(d.begin()+1);


    // for(auto it=d.begin();it!=d.end();it++){
    //     cout<<*(it)<<" ";
    // }
    // cout<<endl;
    // for(auto it=d.rbegin();it!=d.rend();it++){
    //     cout<<*(it)<<" ";
    // }
    
//     return 0;
// }

//pair

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     pair<int,char>a={4,'a'};
//     cout<<a.first<<endl;
//     cout<<a.second<<endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     pair<int,pair<int,char>>a={4,{5,'x'}};
//     cout<<a.first<<endl;
//     cout<<a.second.first<<endl;
//     cout<<a.second.second<<endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<pair<char,int>> abc={{'x',1},{'y',2},{'z',3}};
//     abc.emplace_back('b',78);
//     for(auto i:abc){
//         cout<<i.first<<" "<<i.second<<endl;
//     }
//     return 0;
// }

//stack

// #include <iostream>
// #include <stack>
// using namespace std;
// int main(){
//     stack<int>a;
//     a.push(1);
//     a.push(90);
//     stack<int>b;
//     b.swap(a);
//     cout<<b.size()<<endl;
//     cout<<a.size()<<endl;
//     while(!a.empty()){
//         cout<<a.top()<<" ";
//         a.pop();
//     }
//     cout<<endl;

//     return 0;
// }

//queue


// #include <iostream>
// #include <queue>
// using namespace std;
// int main(){
//     queue<int>a;
//     a.push(1);
//     a.push(90);
//     while(!a.empty()){
//         cout<<a.front()<<" ";
//         a.pop();
//     }
//     cout<<endl;

//     return 0;
// }

// priority queue

// #include <iostream>
// #include <queue>
// using namespace std;
// int main(){
//     priority_queue<int,vector<int>,greater<int>>q;
//     q.push(45);
//     q.push(33);
//     q.push(9);
//     while(!q.empty()){
//         cout<<q.top()<<" ";
//         q.pop();
//     }
//     return 0;
// }

//map

// #include <iostream>
// #include <map>
// using namespace std;
// int main(){
//     map<string,int>m;
//     m["tv"]=90;
//     m.emplace("mobile",90);
//     m["headphones"]=77;
//     m.erase("tv");

    // cout<<m.count("mobile")<<endl;
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second;
    //     cout<<endl;
    // }
    // if(m.find("mobile")!=m.end()){
    //     cout<<"found"<<endl;
    // }else{
    //     cout<<"not found"<<endl;
    // }
//     cout<<m.size()<<endl;
//     return 0;
    
// }

//other map
//multimap

// #include <iostream>
// #include <map>
// using namespace std;
// int main(){
//     multimap<string,int>m;
//     m.emplace("tv",90);
//     m.emplace("tv",90);
//     m.emplace("tv",90);
//     for(auto p:m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
//     return 0;

// }

//unordered map

// #include <iostream>
// #include <unordered_map>
// using namespace std;
// int main(){
//     unordered_map<string,int>m;
//     m.emplace("tv",90);
//     m.emplace("fridge",90);
//     m.emplace("mobile",90);
//     for(auto p:m){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
//     return 0;

// }

//set

// #include <iostream>
// #include <set>
// using namespace std;
// int main(){
//     set<int>a;
//     a.insert(80);
//     a.emplace(12);
//     a.emplace(99);
//     a.emplace(98);
//     a.emplace(100);
//     cout<<*(a.lower_bound(98))<<endl;
//     cout<<*(a.upper_bound(98))<<endl;
    // for(int i:a){
    //     cout<<i<<endl;
    // }
//     return 0;
// }

//algorithm

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main(){
//     int arr[5]={9,80,7,45,23};
//     sort(arr,arr+5);
//     for(int i:arr){
//         cout<<i<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main(){
//     int arr[5]={9,80,7,45,23};
//     sort(arr,arr+5,greater<int>());
//     for(int i:arr){
//         cout<<i<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     vector<int>a={9,80,7,45,23};
//     sort(a.begin(),a.end());
//     for(int i:a){
//         cout<<i<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     vector<int>a={9,80,7,45,23};
//     sort(a.begin(),a.end(),greater<int>());
//     for(int i:a){
//         cout<<i<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// bool comparitor(pair<int,int>p1,pair<int,int>p2){
//     if(p1.second<p2.second) return true;
//     if(p1.second>p2.second) return false;

//     if(p1.first<p2.first) return true;
//     else return false;
// }
// int main(){
//     vector<pair<int,int>>a={{3,9},{8,0},{1,7}};
//     sort(a.begin(),a.end(),comparitor);
//     for(auto  p:a){
//         cout<<p.first<<" "<<p.second<<endl;
//     }
//     return 0;
// }

//reverse

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     vector<int>a={9,80,7,45,23};
//     reverse(a.begin(),a.end());
//     for(int i:a){
//         cout<<i<<endl;
//     }
//     return 0;
// }

//next permutation


// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main(){
//     string s="896";
//     next_permutation(s.begin(),s.end());
//     cout<<s<<endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main(){
//     int a=90,b=89;
//     swap(a,b);
//     cout<<a<<" "<<b<<endl;
//     cout<<min(4,9)<<" "<<max(4,9)<<endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     vector<int>a={9,80,7,45,23};
//     cout<<*(min_element(a.begin(),a.end()))<<endl;
//     cout<<*(max_element(a.begin(),a.end()))<<endl;
//     return 0;
// }

// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     vector<int>a={1,2,3,4,5};

//     cout<<binary_search(a.begin(),a.end(),4)<<endl;
//     return 0;
// }


// #include <iostream>
// #include <algorithm>
// using namespace std;
// int main(){
//     int n=15;
//     long int n1=899;
//     long long int n2=99999;
//     cout<<__builtin_popcount(n)<<endl;
//     cout<<__builtin_popcount(n1)<<endl;
//     cout<<__builtin_popcount(n2)<<endl;
//     return 0;
// }
