#include <bits/stdc++.h>

using namespace std;

int it = 0;


int main(){
    
    int t;
    cin>>t;
    int array[t*3];
    int num;
    int lc[num];
    int st[t]; 
    int con = -1;
    for(int i = 0 ; i < t*3 ; i++){
        cin>>array[i];
    }
    
    for(int i = 2 ; i< t*3 ; i = i+3){
        //cout<<array[i]<<" ";
          con++;
          st[con] = array[i];
           
        }
    int s = sizeof(st)/4;
    //cout<<s;    
    for(int i = 0 ; i< s ;i++){
        cout<<st[i];
    }
    
    for(int i = 0 ; i < t;i++){
        temp = 0;
        if()
        
        //code goes form here 
    }
    
}
