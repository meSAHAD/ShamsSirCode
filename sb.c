#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,c1,c2,c3,ans;
    cin>>x>>c1>>c2>>c3;
    while (x ||c1 ||c2||c3)
    {
        ans=1080 + ((x-c1 + 40) % 40 + (c2-c1 + 40) % 40 + (c2 -c3 + 40) % 40) * 9;
        cout<<ans<<endl;
        cin>>x>>c1>>c2>>c3;
    }

}
