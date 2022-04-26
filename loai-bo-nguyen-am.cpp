#include <bits/stdc++.h>
using namespace std;
#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
typedef long long ll;
typedef long double ldb;
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vdb;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvl;
typedef vector<string> vs;
typedef set<int> si;
typedef set<long long> sl;
typedef set<double> sdb;
typedef set<string> ss;
typedef set<char> sc;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define ftb(i, a, b) for (ll i = a, _b = b; i <= _b; i++)
#define ft(i, a, b) for (ll i = a, _b = b; i < _b; i++)
#define fgb(i, a, b) for (ll i = a, _b = b; i >= _b; i--)
#define fg(i, a, b) for (ll i = a, _b = b; i > _b; i--)
#define endl "\n"

// ---------------------------------------------------------------- //

struct cmp_set
{
    bool operator()(int a, int b) { return a > b; }
};

// ---------------------------------------------------------------- //

// const int N=1e6;
// bool isPrime[N];
// int PrimeFactor[N];
// void checkPrime(){
//     memset(isPrime,true,sizeof(isPrime));
//     // memset(PrimeFactor,0,sizeof(PrimeFactor));
//     int i=2;
//     isPrime[0]=isPrime[1]=false;
//     while(i*i<=N){
//         if(isPrime[i]){
//             for(int j=i*i;j<=N;j+=i){
//                 isPrime[j]=false;
//                 // if(PrimeFactor[j]==0){
//                 //      PrimeFactor[j]=i;
//                 // }
//             }
//         }
//         i++;
//     }
// }

// ---------------------------------------------------------------- //

// int ans=0;
// void subSequence(int ar[],int index,vi subarr,int n){
//     if(index==n){
//         if(subarr.size()>0){
//             if(is_sorted(subarr.begin(),subarr.end(),cmp)){
//                 if(ans<subarr.size()){
//                     ans=subarr.size();
//                 }
//             }
//         }
//         return ;
//     } else{
//         subSequence(ar,index+1,subarr,n);
//         subarr.push_back(ar[index]);
//         subSequence(ar,index+1,subarr,n);
//     }
// }

// ---------------------------------------------------------------- //

// vl prefix_sum;
// void fill_prefix_sum(vl a,int n){
//     prefix_sum.push_back(0);
//     ft(i,0,n){
//         ll x=prefix_sum.back()+a[i];
//         prefix_sum.push_back(x);
//     }
// sum from l to r is prefix_sum[r]-prefix_sum[l-1];
// index bat dau tu 1
// }

// ---------------------------------------------------------------- //

// int binary_search(int a[],int n,int x){
//     int left=0,right=n-1;
//     while(left<=right){
//         int mid=(left+right)/2;
//         if(a[mid]==x){
//             return mid;
//         } else if(a[mid]<x){
//             left=mid+1;
//         } else{
//             right=mid-1;
//         }
//     }
//     return -1;
// }

// ---------------------------------------------------------------- //

// int mod=1e9+7;
// int di[5]={-1,-1,0,1,1};
// int dj[5]={0,1,1,1,0};
// void dfs(int a[2][100],int i,int j,int n){
//     a[i][j]=2;
//     ft(k,0,5){
//         int i1=i+di[k];
//         int j1=j+dj[k];
//         if(i1>=0&&i1<2&&j1>=0&&j1<n&&a[i1][j1]==0){
//             dfs(a,i1,j1,n);
//         }
//     }
//     return;
// }

// vvi a(n,vi (5));

// ---------------------------------------------------------------- //

// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;::;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;lxxl;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;ckKKkc;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;dKXXKd;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;::ccccccco0XXXXOoccccccc::;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;:lxO00000KXXXXXXK00000Oxl:;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;:lxOKXXXXXXXXXXXXK0xl:;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;:oOXXXXXXXXXXOo:;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;:xKXXXXXXXXXx:;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;o0XXKOkkOKXX0o;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;cOK0xl:;;:lxOKOc;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;:oxo:;;;;;;;;coxo:;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;:;;;;;;;;;;;;;;:;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
// ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;

/* ░█████╗░░█████╗░  ██████╗░██╗░░░░░░██████╗
    ██╔══██╗██╔══██╗  ██╔══██╗██║░░░░░██╔════╝
    ███████║██║░░╚═╝  ██████╔╝██║░░░░░╚█████╗░
    ██╔══██║██║░░██╗  ██╔═══╝░██║░░░░░░╚═══██╗
    ██║░░██║╚█████╔╝  ██║░░░░░███████╗██████╔╝
    ╚═╝░░╚═╝░╚════╝░  ╚═╝░░░░░╚══════╝╚═════╝░ */

// NGUYEN TRAN TRI

// ---------------------------------------------------------------- //
// int x[8]={-1,-1,-1,0,0,1,1,1};
// int y[8]={-1,0,1,-1,1,-1,0,1};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    map<char,int> d;
    d['a']=1;
    d['e']=1;
    d['i']=1;
    d['o']=1;
    d['u']=1;
    d['y']=1;
    ft(i,0,s.size()){
        s[i]=tolower(s[i]);
        if(d[s[i]]==0){
            cout<<"."<<s[i];
        }
    }
}