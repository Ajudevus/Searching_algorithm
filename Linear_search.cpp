#include <iostream>
#include<vector>
using namespace std;
void search(vector<int> v,int y)
{
    int flag=0;int  i=0;
    for(i;i<v.size();i++)
    {
        if(v[i]==y)
        {
            flag=1;
            break;
        }
        
    }
    if(flag==1)
    cout<<"element found in the location "<<(i+1)<<endl;
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
    search(v,y);
    return 0;
}
