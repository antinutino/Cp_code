#include<bits/stdc++.h>
using namespace std;
int n;
#define ll long long
ll ar[300000];
bool binary(ll mid, ll c)
{ ll sum=0;bool b=false;
    for(int i=0;i<n;i++)
        {  if((ar[i]+2*mid)>1000000000)
           { b=true;
             break;}
           else
            sum+=(ar[i]+2*mid)*(ar[i]+2*mid);
        }
        if(b==true)
            return false;
       else if(sum<=c)
            return true;
        else
            return false;

}

int main()
{

    int t;cin>>t;
    while(t--)
    { ll l=1,h=1e9,mid;
        cin>>n;
        ll c;cin>>c;
        for(int i=0;i<n;i++)
        {cin>>ar[i];
        }
        // the code has the result:
        //T T T T T F F F F F F F F 
        while(h-l>1)
        {  mid=(l+h)/2;
            bool check=binary(mid,c);
            if(check==true)
            {
                  l=mid;
            }
          else
                {
                h=mid-1;
                }
        }
        if(binary(h,c))
        cout<<h<<endl;
        else
            cout<<l<<endl;

    }
}
