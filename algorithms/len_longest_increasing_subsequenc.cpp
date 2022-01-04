//
// Created by sakin on 04-01-2022.
//

int binary_search(vector<int> v,int target)
{
    int l=0;
    int r=v.size()-1;
    while(l<r)
    {
        int mid=(l+r)/2;
        if(v[mid]==target)
        {
            return mid;
        }
        else if(v[mid]<target)
        {
            l=mid+1;
        }
        else
        {
            r=mid;
        }
    }
    return l;
}
int lengthOfLIS(vector<int>& v) {
    vector<int> temp;
    temp.push_back(v[0]);
    for(int i=1;i<v.size();i++)
    {
        if(v[i]>temp[temp.size()-1])
        {
            temp.push_back(v[i]);
        }else{
            int j=binary_search(temp,v[i]);
            temp[j]=v[i];
        }
    }
    return temp.size();}