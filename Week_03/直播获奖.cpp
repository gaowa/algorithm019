#include <bits/stdc++.h>
using namespace std;
int a[1000];
int main() {
    
    int n, m;
    scanf("%d%d", &n, &m);// 竞赛时 不要用 cin cout  
    for (int i = 1; i <= n; i++) {
        int x;
        scanf("%d", &x);
        a[x]++;// 开始计数排序 
        int t = max(1, i * m / 100);
        int s = 0;
        for (int j = 600; j >= 0; j--) {// 计数排序 从大到小的显示 
            s += a[j];
            if (s >= t) {
                printf("%d ", j);
                break;
            }
        }
    }
    return 0;
}
