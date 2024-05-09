               /*     ------>ALL THE BEST Nishu<-----         */    
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define nishUwU ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);                                             
#define TC int hurr;cin >> hurr;while (hurr--)
#define ff first
#define ss second
/*DEBUG PART_________________________________________________________________________________________________*/
void _print(int a) {cerr<<a<<" ";}
void _print(ll a) { cerr<<a; }
void _print(bool a) {cerr<<a;}
void _print(float a) {cerr<<a;}
void _print(string a) {cerr<<a;}
void _print(double a) {cerr<<a;}
void _print(char a) {cerr<<a;}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(vector<pair<T, V>> v) { cerr << "[ ";for (pair<T, V> i : v) {_print(i);cerr << " ";  }cerr << "]";}
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " "; _print(x); cerr<<endl;
#else
#define debug(x)
#endif 
/*DEBUG PART_____________________________________________________________________________________________________*/








int main() {

nishUwU


#ifndef ONLINE_JUDGE 
freopen("error.txt", "w", stderr); 
#endif
vector<ll> arr(27,0);
string s;cin>>s;
debug(s);
ll n = s.length();
for(ll i=0;i<n;i++){
    arr[s[i]-'A']++;
}
debug(n);
 char lc;
ll oc=0;
for(ll i=0;i<27;i++){
    if(arr[i]&1){
        lc = i + 'A';
        oc++;
    }
}
debug(arr);
debug(oc);

string bs ="";
if(n&1 && oc==1){
    debug("me");
    for(ll i=0;i<27;i++){
        if(arr[i]>0 && (arr[i]&1)==0){
            debug(i);
            for(ll j=0;j<(arr[i]/2);j++){
                bs.push_back(i + 'A');
            }
        }else if(arr[i]>0 && (arr[i]&1)){
            for(ll j=0;j<(arr[i]/2);j++){
                bs.push_back(i + 'A');
            }
        }                                   
    }
    string fs = "";
    fs+=bs;
    reverse(bs.begin(),bs.end());
    fs.push_back(lc);
    fs+=bs;
    cout<<fs<<"\n";

}else if(oc>=1){
    cout<<"NO SOLUTION\n";
}else{
for(ll i=0;i<27;i++){
        if(arr[i]>0 && (arr[i]&1)==0){
            debug(i);
            for(ll j=0;j<(arr[i]/2);j++){
                bs.push_back(i + 'A');
            }
        }
    }
    string fs = "";
    fs+=bs;
    reverse(bs.begin(),bs.end());
    fs+=bs;
    cout<<fs<<"\n";
}




    return 0;
}
