#include <bits/stdc++.h> 
using namespace std;
int n; 

void generate1(int left, int right, string s)// left �����Ÿ����� right �����Ÿ���
											// �ڵ�ǰλ�� ��������
{
	if(right >= n) // left ���� n�� ���� right���� n������Ч��������
	{
	
		cout<< s << endl;
		
		return ;
	} 
	string s1 = s + "(";
	string s2 = s + ")";
	if(left < n){		
		generate1(left + 1, right, s1);
	} 
	if(right < left){
	
		generate1(left, right + 1, s2);
	}
		
} 
int main(){
	
	cin >> n;
	generate1(0, 0, "");//  
	return 0;
}
