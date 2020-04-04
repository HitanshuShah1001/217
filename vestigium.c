#Prac 1
#include<stdio.h>
int main()
{
    int a,b,i,j,c,d,n,mat[100][100],ca=0,cr=0,cb=0,count1c=0;
    scanf("%d",&d);
    int tr=0;
    for(i=0;i<d;i++)
    {
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            for(c=0;c<n;c++)
            {
                scanf("%d",&mat[j][c]);
                if(j==c)
                {
                    tr+=mat[j][c];
                } 
            }
        }
        for(j=0;j<n;j++)
        {
                       for(a=0;a<n;a++)
               {
                   for(b=a+1;b<n;b++)
                   {
                       if(mat[j][b]==mat[j][a])
                       {
                           ca=1;
                           break;
                       }
                       else
                       {
                           ca=0;
                       }
                   }
                   if(ca==1)
                   break;
               }
               cr+=ca;
                for(a=0;a<n;a++)
               {
                   for(b=a+1;b<n;b++)
                   {
                       if(mat[b][j]==mat[a][j])
                       {
                           cb=1;
                           break;
                       }
                       else
                       {
                          cb=0;
                       }
                   }
                   if(cb==1)
                   break;
               }
               count1c+=cb
        }
        printf("Case #%d: %d %d %d\n",(i+1),tr,cr,count1c);
               cr=0;
               count1c=0;
               tr=0;
    }
    return 0;
}

