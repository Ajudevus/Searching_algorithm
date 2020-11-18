#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void binary_search(vector<int> v,int y)
{
    int flag=0;int mid,low,high;
    low=0;
    high=v.size()-1;
    while(low<high)
    {
        mid=(low+high)/2;
        if(v[mid]==y)
        {
            flag=1;
            break;
        }
        else if(v[mid]>y)
        high=mid-1;
        else if(v[mid]<y)
        low=mid+1;
        
    }
    
        
    
    if(flag==1)
    cout<<"element found in the location "<<(mid+1)<<endl;
    else
    cout<<"Sorry !! element not found!!"<<endl;
}


int main() {
    vector<int> v;int n,x,y;
    cout<<"Enter the size of the array"<<endl;
    cin>>n;
    cout<<"Enter the array elements "<<endl;
    for(int i=0;i<n;i++)
    {cin>>x;
    v.push_back(x);
    }
    cout<<"Enter the value to search"<<endl;
    cin>>y;
    sort(v.begin(),v.end());
    binary_search(v,y);
    return 0;
}
