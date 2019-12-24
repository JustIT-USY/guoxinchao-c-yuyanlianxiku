#include <stdio.h>
#include<ctype.h>

/*void jiauanyuan();
    int i,s;
    void jiauanyuan()
    {
        printf("请输入圆半径：");
        scanf("%d",&i);
        s=3*i*i;
        printf("圆面积为%d\n",s);
    }
    void jisuanjuxing();
    int m,n,s;
    void jisuanjuxing()
    {
        printf("输入长宽：");
        scanf("%d",&n);
          printf("输入长：");
        scanf("%d",&m);
        s=m*n;
        printf("矩形的面积为：%d\n",s);
    }
    void jisuanchangfangxing();
    int g,f,d;
    void jisuanchangfangxing()
    {
        printf("请输入长：",g);
        scanf("%d",&g);
        printf("请输入宽：",f);
        scanf("%d",&f);
        d=f*g;
        printf("为您计算的长方形的面积为：%d",d);
    }*/
   /* void chengji();
    int i,cj,pc;
    int num;
    void chengji()
    {
        for(i=0;i<10;i++)
        {
            printf("请输入%d个成绩：",i+1);
            scanf("%d",&cj);
            printf("\n");
            num=num+cj;
        }
        pc=num/10;
        printf("10名同学的成绩平均值为：%d",pc);
    }
    int sun,j;
    void oushuhe();
    void oushuhe()
    {
        for(j=1;j<=100;j++)
        {
            if(j%2==0)
                sun++;
        }
        return sun;
    }*/




int main()
{

   // chengji();
int i,j,k=0;
printf("请输入一个数：");
scanf("%d",&k);
for(i=1;i<=7;i++)
{
    k+=i;
}
printf("累加和为：%d",k);


    //只定义函数
    //是否需要返回值
    //函数名是什么
    //需要给这个函数参数吗？
  //  jiauanyuan();
    //调用圆面积
   // jisuanjuxing();
    //以上是自定义函数
   // jisuanchangfangxing();

/*oushuhe();
printf("1-100偶数和为：%d\t",sun);
int n=sun;
printf("%d",n);*/

/*
     内置函数
     由C语言系统提供
     需要程序前包含函数头文件
     只定义函数
     不带参数
     带参数（可以带返回值也可以不带返回值）
     0表示假    非0表示真
*/
/*
int i;
    //常用的内置函数
    printf("%d\n",isupper('a'));
    //查看里面的数是否是大写字母
    printf("%d\n",islower('a'));
    //查看是否是小写字母
    printf("%d\n",isalpha(97));
    //返回值是否是字母
    printf("%d\n",isdigit('9'));
    //返回值是否是数字
    //传入的数字如果是数字或者字母要用单引号
    //如果不用单引号就代表的是ascii码
    printf("%c\n",50);
    //打印50对应的ascii码
    for(i=0;i<127;i++)
    {
        printf("%c,",i);
    }
    //打印所有的ascii码
    //转换大小写
    printf("大写：%c,",toupper('a'));

    int i;
    printf("%d\n",isupper('a'));
    printf("%d\n",islower('a'));
    printf("%d\n",islower('A'));
    printf("%d\n",isalpha('2'));
    //零为假其他数字为真
    printf("%d\n",isdigit('8'));
    //判断是否为数字
    printf("%d\n",isdigit(96));
    //输入的直接是数字    那么表示的是ascii码
    //输入的值会按照ascii表示的字符输入
    printf("50对应的ascii码为%c\n",50);
    for(i=0;i<127;i++)
    {
        printf("%c\t",i);
    }
    printf("\n");
    printf("*****************************************************************\n");
    printf("%c\n",toupper('a'));//转换大写*/
    /*
    int *nums;
    nums=(int*)malloc(20);
    //nums=(int*)malloc(sizeof(int)*5);!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    //给指针分配20字节内存
    //为指针分配了内存后指针变成了数组！！！！
    //等价于int nums[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("请输入%d个元素",i+1);
        scanf("%d",nums+i);
    }
    printf("数组元素为：\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",*(nums+i));
    }
    free(nums);//释放分配的内存空间
    */














































































































    return 0;
}
