#include <bits/stdc++.h>
using namespace std;
void P11(){//�������ж�
    long long n;
    scanf("%lld",&n);
    if(n <= 1){
        printf("no");
        return;
    }
    long long i = 2;
    while(i <= sqrt(n)){
        long long n1 = n;
        if(n1 % i == 0){
            printf("no");
            return;
        }
    }
    printf("yes");
}
int main(){
	long long n;
	scanf("%lld", &n);// n ֻ�ܱ� 1  n ����
	for(int i = 2; i * i <= n; ++i){
		if(n % i == 0)
		{
			printf("no"); return 0;
		} 
	}
	printf("yes");


	return 0;
}
