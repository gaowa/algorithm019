#include<bits/stdc++.h>
int x[1000005],y[1000005],d[1000005],s[1000005],q[1000005],n,m;
int f(int a)
{
    memset(s,0,sizeof(s));
    int i,sum=0;
    for(i=1;i<=a;i++)//处理前a个订单
    {
        s[x[i]]+=d[i];//在第i个订单的起始日期打标记，+第i个订单的占用天数
        s[y[i]+1]-=d[i];// 在第i个订单的结束日期后一天打标记，-第i个订单的占用天数
    }
    for(i=1;i<=n;i++)
    {
        sum+=s[i];//计算出第i天的教室占用总和
        if(sum>q[i]) return 0;//如果总和>该天可以分配出来的教室数，则订单无法满足
    }
    return 1;
}
int main()
{
    int i,r,l,ans=0,mid;
    scanf("%d%d",&n,&m);//n天，m个订单
    for(i=1;i<=n;i++)scanf("%d",&q[i]);//每天可租借的教室数量
    for(i=1;i<=m;i++)scanf("%d%d%d",&d[i],&x[i],&y[i]);//每个订单信息
    l=1;r=m;
    while(l<=r)//二分处理每个订单
    {
        mid=(l+r)/2;
        if(f(mid)==0)//该订单无法满足
        {
            ans=mid;
            r=mid-1;//在mid前面找满足条件的订单
        }
        else l=mid+1;
    }
    if(ans)printf("-1\n%d",ans);
    else printf("0");
    return 0;
}


