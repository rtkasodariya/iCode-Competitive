#include<bits/stdc++.h>

using namespace std;

#define fin freopen("i1.txt","r",stdin)
#define pb(x) push_back(x)
#define mp(x,y) make_pair(x,y)
#define fastio ios_base::sync_with_stdio(false); cin.tie(0);
#define ll long long
#define oo(x) do{ for(int zo=1;zo<=5;zo++) cout<<x; cout<<"\n"; }while(0);

int main(){

    ll t;
    cin>>t;

    while(t--) {
        ll n;
        cin>>n;

        ll a[n],b[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        for(ll i=0;i<n;i++) cin>>b[i];

        ll ans=n;

        for(ll i=0;i<n;i++){
            if(i==0) {
                if(b[i]>a[i]) ans--;
            }
            else {
                if(b[i]>(a[i]-a[i-1])) ans--;
            }

        }

        cout<<ans<<endl;

    }

    return 0;
}
