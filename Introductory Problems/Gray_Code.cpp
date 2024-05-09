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






    ll  n;cin>>n;
    vector<vector<string>> v(16);
    string s1 = "0";
    string s2 = "1";
    v[0].push_back(s1);
    v[0].push_back(s2);
    ll z = 0; 
    for(ll i=1;i<16;i++){
        for(auto &j:v[i-1] ){
            if(z&1){
        v[i].push_back(j+s1);
        v[i].push_back(j+s2);
            }else{
        v[i].push_back(j+s2);
        v[i].push_back(j+s1);
            }
            z++;
        }
    }
    for(auto &i:v[n-1]){
        cout<<i<<"\n";
    }













    return 0;
}
