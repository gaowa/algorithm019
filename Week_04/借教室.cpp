#include<bits/stdc++.h>
int x[1000005],y[1000005],d[1000005],s[1000005],q[1000005],n,m;
int f(int a)
{
    memset(s,0,sizeof(s));
    int i,sum=0;
    for(i=1;i<=a;i++)//����ǰa������
    {
        s[x[i]]+=d[i];//�ڵ�i����������ʼ���ڴ��ǣ�+��i��������ռ������
        s[y[i]+1]-=d[i];// �ڵ�i�������Ľ������ں�һ����ǣ�-��i��������ռ������
    }
    for(i=1;i<=n;i++)
    {
        sum+=s[i];//�������i��Ľ���ռ���ܺ�
        if(sum>q[i]) return 0;//����ܺ�>������Է�������Ľ��������򶩵��޷�����
    }
    return 1;
}
int main()
{
    int i,r,l,ans=0,mid;
    scanf("%d%d",&n,&m);//n�죬m������
    for(i=1;i<=n;i++)scanf("%d",&q[i]);//ÿ������Ľ�������
    for(i=1;i<=m;i++)scanf("%d%d%d",&d[i],&x[i],&y[i]);//ÿ��������Ϣ
    l=1;r=m;
    while(l<=r)//���ִ���ÿ������
    {
        mid=(l+r)/2;
        if(f(mid)==0)//�ö����޷�����
        {
            ans=mid;
            r=mid-1;//��midǰ�������������Ķ���
        }
        else l=mid+1;
    }
    if(ans)printf("-1\n%d",ans);
    else printf("0");
    return 0;
}


