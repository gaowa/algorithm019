#include <bits/stdc++.h>
using namespace std;
const int maxn=5e5+5;
int l, n, m, L, R, stone[maxn];
bool check(int dis){
    int t=0, cnt=0;
    for (int i=1; i<n; ++i){
        t+=stone[i]-stone[i-1];
        if (t<dis) ++cnt; else t=0;
        if (l-stone[i+1]<dis){
            cnt+=n-i-2; break; }
    }
    if (cnt>m) return false;
    else return true;
}
int main(){
    scanf("%d%d%d", &l, &n, &m);
    for (int i=1; i<=n; ++i) scanf("%d", &stone[i]);
    sort(stone+1, stone+n);
    stone[0]=0; stone[++n]=l; ++n;
    L=0, R=l; int mid;
    while (L<R){
        mid=(L+R)>>1;
        if (check(mid)) L=mid+1; else R=mid;
    }
    printf("%d", L-1);
    return 0;
}


