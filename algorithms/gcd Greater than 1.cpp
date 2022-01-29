#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    n=3;
    long arr[3][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];}}


    long dp[3+1][3]={0};
    for(int i=0;i<3;i++)
    {
        long m1=0,m2=0,m3=0;
        for(int j=0;j<3;j++){
            if((j/(3/3))==0){
                m1=max(m1,arr[i][j]);}
            else if((j/(3/3))==1){
                m2=max(m2,arr[i][j]);}
            else if((j/(3/3))==2){
                m3=max(m3,arr[i][j]);}

        dp[i+1][0]=max(dp[i][1],dp[i][2])+m1;
        dp[i+1][1]=max(dp[i][0],dp[i][2])+m2;
        dp[i+1][2]=max(dp[i][1],dp[i][0])+m3;}
    }

    cout<<max(max(dp[n][0],dp[n][1]),dp[n][2])<<"\n";

    return 0;
}