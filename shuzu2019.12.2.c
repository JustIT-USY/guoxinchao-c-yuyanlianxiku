#include <stdio.h>
#include <stdlib.h>
#define N 7
int main()
{
    /*int a[7]={12,45,78,89,65,26,51};
    int i;
    int nums;
    int num1=-1;
    printf("请输入你想添加的数字：");
    scanf("%d",&nums);
    if(i=8)
    {
        a[8]=nums;
    }
      a[7]=a[7+1];
    for(i=0;i<8;i++)
    {
        printf("%d\t",a[i]);
    }
*/

    //数组删除   查找下标  和数字
    //从下标起后面一个数字覆盖前一个数
    //数组总长度-1
   /* int a[6]={12,15,48,78,98,56};
    int nums;
    int i;
    int num1=-1,num2;

    printf("输入一个你想删除的数字：");
    scanf("%d",&nums);
    //查找下标
    for(i=0;i<5;i++)
    {
        if(num1==a[i])
        {
        num2++;
        break;
        }
    }
    if(-1 == num1)
    {
        printf("没找到！");
    }
    else if(i!=5)
    {
        for(i=0;i<5;i++)
        {
            a[i]=a[i+1];
        }
    }

    printf("删除后的结果为：\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    //正确的数组删除
	int a[6]={12,15,48,78,98,56};
    int nums;//输入的数字
    int i;//循环变量
    int num1=-1;//是否有这个数
    printf("输入一个你想删除的数字：");
    scanf("%d",&nums);
    for(i=0;i<6;i++)//循环
    {   //寻找下标
        if(nums==a[i])
        {//下标数值
        	num1++;
        	break;
        }
    }
    if(num1==-1)
    {
        printf("没找到！");
    }//在数组内
    else if(i!=5)
    {//后一个值赋给前一个
        for(i;i<5;i++)
        {
            a[i]=a[i+1];
        }
    //数组长度减一后打印
    printf("删除后的结果为：\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
	}
*/

  /*  int nums=7;
    double num1;
    int num2 = -1;
    int i;
    double a[]={1551,5656,8484,7575,1515,2626,1515};
    scanf("%2f",&num1);
    for(i=0;i<nums;i++)
    {
        if(num1==a[i])
        {
            num2=i;
            break;
        }
    }
    if(-1 == num2)
    {
        printf("没找到！");
    }
    else
    {
        for(i==num2;i<nums;i++)
        {
            a[i]=a[i-1];
        }
    }
*/
//二维数组
int a[4][4]={
                {152,253,354,455},
                {122,243,364,425},
                {123,235,347,453},
                {124,236,348,444}
            };
int i,j;

for(i=0;i<4;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d\n",a[i][j]);
        }
        printf("\n");
    }

/*
#include<stdio.h>
typedef struct Node{
int a,b;
}node;
node c[100];
int n;
void print(){
int i;
printf("\n当前数据：\n");
for(i=1;i<=n;i++){
printf("第%d组:a=%d,b=%d\n",i,c[i].a,c[i].b);
}
printf("\n\n");
}//输出
void setnum(){
int i;
printf("输入n,表示共有n组数据:\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("输入第%d组数据的两个值a、b,用空格隔开:\n",i);
scanf("%d%d",&c[i].a,&c[i].b);
}
}//设置数据
void remove(){
int i,j;
printf("输入i,表示要删除第i数据:\n");
scanf("%d",&i);
for(j=i;j<=n-1;j++){
c[j]=c[j+1];
}//循环覆盖，让后一个覆盖前一个，所以j最大值取n-1
n--;//结构体中的元素减少1个
}//删除数据
void chang(){
int i,aa,bb;
printf("输入i,a,b,表示要将第i组数据修改成a、b:\n");
scanf("%d%d%d",&i,&aa,&bb);
c[i].a=aa;
c[i].b=bb;//直接赋值修改
}//修改数据
main(){
int m;
while(1){
printf("输入:1-输入数据，2-修改数据，3-删除数据\n 4-输出数据，0-退出\n");
scanf("%d",&m);
if(m==0) break;
else if(m==1) setnum();
else if(m==2) chang();
else if(m==3) remove();
else if(m==4) print();
}
}
*/
    return 0;
}
