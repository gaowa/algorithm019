#include <bits/stdc++.h>
using namespace std;
int a[1000];
int main() {
    
    int n, m;
    scanf("%d%d", &n, &m);// ����ʱ ��Ҫ�� cin cout  
    for (int i = 1; i <= n; i++) {
        int x;
        scanf("%d", &x);
        a[x]++;// ��ʼ�������� 
        int t = max(1, i * m / 100);
        int s = 0;
        for (int j = 600; j >= 0; j--) {// �������� �Ӵ�С����ʾ 
            s += a[j];
            if (s >= t) {
                printf("%d ", j);
                break;
            }
        }
    }
    return 0;
}
