#include <bits/stdc++.h> 
using namespace std;
// ���ֲ���ģ��
int nums[100086];
int target;
int binarysearch(int l, int r) {// ���ֲ���ע����������� ���������� [l, r) ����� �ҿ�������
								// ��ô���ֳ����� ������� [l,mid ) Ҳ������ҿ�  �ұ����� Ҳ�� [mid + 1, r�� Ҳ������ҿ������� 
	while(l < r){// ��������Ҳ�� l < r(l���±�����������ڣ� ���� r����������±�) 
		int mid = l + (r - l) / 2;// �³��磨���м�ķ�����ע�� 
		if(nums[mid] == target){// �ҵ�Ŀ��  
			return mid;
		}	
		else if(nums[mid] < target){// �м�ֵ��Ŀ��С����Ŀ�����а����� ���� ��߽� l = mid + 1  r = r 
			l = mid + 1;
		}
		else// ���� �� �м�ֵ��Ŀ����� Ŀ����������� ���� �ұ߽� r = mid  ע���ұ����򲻰������� 
			r = mid ;
	}
	return -1;// ÿ���ҵ�Ŀ�� �򷵻� -1 
	
}
int main(){
	// �������� ���ֲ���
	int n;
	cin >> n >> target;
	for(int i = 0; i < n; ++i)  cin >> nums[i];
	cout << binarysearch(0, n) ;// �ҿ�  n ����������±� ע�����������ҿ�  
	return 0;
}




