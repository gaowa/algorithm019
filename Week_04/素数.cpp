// ����һ�������� �ж����Ƿ�Ϊ���� // 2 3 5 7 ֻ�ܱ� 1 �� ������������ 
#include <bits/stdc++.h> 
using namespace std;

int main(){
	int n;
	scanf("%d", &n) ;
	for(int i = 2; i * i <= n; ++i){
		if(n % i == 0)  {
			cout << "����";return 0;
		}
	}
	cout << "����";
	return 0;
}
