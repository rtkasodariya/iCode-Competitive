#include<bits/stdc++.h>

using namespace std;

#define fin freopen("i1.txt","r",stdin)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define oo(x) do{ for(int zo=1;zo<=5;zo++) cout<<x; cout<<"\n"; }while(0);

int main(){

    double d,h,v,e;
    cin>>d>>h>>v>>e;

    double t=h/((4*v)/(acos(-1)*d*d)-e);

    if(t<0) cout<<"NO"<<endl;
    else {
        cout<<"YES"<<endl;
        cout<<fixed << setprecision(12) <<t<<endl;
    }
    return 0;
}
