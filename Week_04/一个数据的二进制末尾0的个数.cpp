#include <bits/stdc++.h> 
using namespace std;
static const int MultiplyDeBruijnBitPosition[32] =
{
0, 1, 28, 2, 29, 14, 24, 3, 30, 22, 20, 15, 25, 17, 4, 8,
31, 27, 13, 23, 21, 19, 16, 7, 26, 12, 18, 6, 11, 5, 10, 9
};
int main(){
	unsigned int v; // find the number of trailing zeros in 32-bit v
	int r; // result goes here
	cin >> v;
	r = MultiplyDeBruijnBitPosition[((uint32_t)((v & -v) * 0x077CB531U)) >> 27];
	cout << r;
	return 0; 
}



