#include<bits/stdc++.h>
using namespace std;

int sumArray(int A[] , int s)
{
    int siz = s;
    int sum =  0;
    int ans = INT_MIN;
    for(int i = 0 ; i< siz ;i++)
    {
        sum = sum + A[i];
        if(sum < 0 ) sum = 0;
        ans = max(ans , sum);
    }
    
    return ans;
}


int main()
{
    int A []= {-2, -3, 4, -1, -2, 1, 5, -3};
    int s = sizeof(A)/sizeof(A[0]);
    cout<<sumArray(A , s);
    
    return 0;
}
