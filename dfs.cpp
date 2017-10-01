#include<bits/stdc++.h>
using namespace std;
typedef queue<int> q32;
typedef vector<int> v32;
typedef v32::iterator it32;
typedef int i32;
#define forn(i , n) for(int i = 0 ; i < n ; ++i)
void search(v32 adj[] ,i32 start , i32 v){
 cout<<start<<" ";
 bool visited[v];
 q32 que;
 i32 i;
 forn(i , v) visited[i] = false;
 visited[start] = true;
 que.push(start);

 while(!que.empty()){
  i32 checker = que.front();
  que.pop();
  if(!adj[checker].empty()){
      for(it32 it = adj[checker].begin() ; it != adj[checker].end() ; ++it){
        if(!visited[*it]){
            que.push(*it);
            visited[*it] = true;
            cout<<*it<<" ";
      }  
    }
  }
}
 
}
int main(){
 v32 adj[6];
 adj[0].push_back(1);
 adj[1].push_back(0);
 adj[1].push_back(5);
 adj[1].push_back(2);
 adj[1].push_back(3);
 adj[2].push_back(1);
 adj[2].push_back(4); 
 adj[3].push_back(1);
 adj[3].push_back(4);
 adj[4].push_back(2); 
 adj[4].push_back(3);
 adj[5].push_back(1);
 i32 i;
/* forn(i , 4){
 if(!adj[i].empty()){
   for(it32 it = adj[i].begin() ; it != adj[i].end() ;++it){
    cout<<*it<<" ";
}
 cout<<endl;
}
}
 */
 i32 start;
 cin>>start;
 search(adj ,start , 6);
 return 0;
}

