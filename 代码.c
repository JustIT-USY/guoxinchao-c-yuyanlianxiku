/*#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}
*/
//#include <stdio.h>
//#include <stdlib.h>

//int main()
//{
  //  printf("Hello world!\n");
    /*printf("#预处理\n");
    printf("include 包含\n");
    printf("standard 标准\n");
    printf("input 输入\n");
    printf("output 输出\n");
    printf("head 头部\n");
    printf("void 空的\n");
    printf("main 主要的\n");*/

   /*//#include <stdio.h>
//#include <stdlib.h>

//int main()
//{
  //  printf("Hello world!\n");
    /*printf("#预处理\n");
    printf("include 包含\n");
    printf("standard 标准\n");
    printf("input 输入\n");
    printf("output 输出\n");
    printf("head 头部\n");
    printf("void 空的\n");
    printf("main 主要的\n");*/

   /* int x,y,z,t;
    printf("\n 请输入三个整数：");
    scanf("%d%d%d",&x,&y,&z);
    printf("\n三个数分别是：%d%d%d",x,y,z);
    if(x > y)
    {
        t=x;
        x=y;
        y=t;
    }
    else if(x > z);
    {
        t=z;
        z=x;
        x=t;
    }

    printf("\n从大到小排列：%d%d%d\n",x,y,z);*/



   /* int number;
    int sum=0;
    printf("\n请输入一个数字： ");
    scanf("%d",&number);
    if(number>0)
    {
        while(number>0)
        {
            sum = sum + number;
            number = number - 1;
        }
        printf("\n 和 = %d\n",sum);
    }
    else
    {
        printf("\n %d无效。\n");
    }
*/

   /* int number;
    int sum = 0;
    printf("\n 输入一个数字：");
    scanf("%d",&number);
    if(number>0)
    {
        while(number>0) //判断条件
        {
        sum = sum + number;     //计算思路
        number = number - 1;
        }
        printf("\n 和为：%d\n",sum);
    }
    else
    {
        printf("\n %d无效。\n",number);
    }
*/
//编辑一个让用户输入一个数字  把这个数字求和的一半
   /* int sum = 0;
    int number;
    printf("\n输入一个数字：");
    scanf("\n%d",&number);
    if(number>0)
    {
        while(number>0)
        {
        sum = sum + number;
        number = number - 2;
        }
        printf("\n您想求的和为%d ",sum);
    }
    else
    {
        printf("\n%d无效");
    }*/
/*int a,b,c;
printf("\n请输入您的第一个数：");
scanf("%d",&a);
printf("\n请输入您的第二个数：");
scanf("%d",&b);
printf("\n\n输出互换前的数：");
printf("\n第一个数为：%d",a);
printf("\n第二个数为：%d",b);
    c = a;
    a = b;
    b = c;
    printf("\n\n输出互换前的数：");
    printf("\n第一个数为：%d",a);
    printf("\n第二个数为：%d",b);*/

   /* #include<stdio.h>
    void main()
    {
    float a;//基本工资
    float b;//物价津贴
    float c;//房屋津贴
    float d;//实际工资
    printf("\n 请输入您的基本工资：");
    scanf("%f",&a);
    b = a * 40 / 100;
    c = a * 20 / 100;
    d = b + c +a;
    printf("\n物价津贴为:%7.2f",b);
    printf("\n房屋津贴为:%7.2f",c);
    printf("\n实际工资为:%7.2f\n",d);

return 0;
    }*/
    //int整形
    //short段整形
    //long长整型
    //float但精度浮点数
    //doubie双精度浮点型
    //char非数值类型

 /*   #include<stdio.h>
    void main()
    {
        char a,b;
        printf("\n请输入一个小写字母：");
        scanf("%c",&a);
        b =a - 32;
        printf("\n对应的大写字母为：%c\n",b);

    }*/
   /* #include<stdio.h>
    void main()
{
    char a,b;
    printf("\n请输入一个大写字母：");
    scanf("\n%c",&a);
    b = a +32;
    printf("\n对应的小谢字母为：%c\n",b);

}*/
/*int main()
//算长方形的面积
{
    float a=21212.5f;
    float b=41212.0f;
    float c = a * b;
    printf("长方形面积为%2f\n",c);
    return 0;
}
*/
//计算yuan的面积
/*#include<stdio.h>
void main()
{
    double a=100;
    double b = 3.14 * a * a;
    printf("圆的面积为：%lf\n",b);
}*/

/*#include<stdio.h>
void main(){
double chang=12121;
double kuan=7877;
double mianji;
double zhouchang;

mianji = chang * kuan;
zhouchang = 2 * (chang + kuan);
printf("长方形的周长为：%2.1f面积为：%2f",zhouchang,mianji);


}*/
/*#include <stdlib.h>
int main()
{
   int a,b,e,f;
   scanf("%d",&a);

    e = a / 1 % 10;
    b = a / 10 % 100;


    f = b + e;
    printf("%d\n",f);
    printf("%d\n",e);
    printf("%d\n",b);
}
*/
/*#include<stdio.h>
int main()

{
    int a,b,c,d,e,f;
    scanf("%d",&a);
   111
    b = a / 1 % 10;
    c = a / 10 % 10;
    d = a / 100 % 10;
    e = a / 100 % 10;
    f = b + c + d + e;
    printf("%d\n",f);

}
*/
#include<stdio.h>
void main(){
char a;
int b,c,d;
printf("\n请输入一串字符：%c",a);
c = 0;
d = 0;
for(i = 0; i < 10; i++)
{
    a = getchar();
    if(a >= "a" && a <= "z")
    {
        c++;

    }
if(a >= "A" && a <= "Z")
    {
        d++;
    putchar(a);
    }
printf("qwqwqwqwqw");

}

}
   #include<stdio.h>
    void main()
    {
   int x,y,z,t;
    printf("\n 请输入三个整数：");
    scanf("%d%d%d",&x,&y,&z);
    printf("\n三个数分别是：%d%d%d",x,y,z);
    if(x > y)
    {
        t=x;
        x=y;
        y=t;
    }
    else if(x > z);
    {
        t=z;
        z=x;
        x=t;
    }

    printf("\n从大到小排列：%d%d%d\n",x,y,z);*/

    return 0;
}

   /*
   #include<stdio.h>
    void main()
    {
   int number;
    int sum=0;
    printf("\n请输入一个数字： ");
    scanf("%d",&number);
    if(number>0)
    {
        while(number>0)
        {
            sum = sum + number;
            number = number - 1;
        }
        printf("\n 和 = %d\n",sum);
    }
    else
    {
        printf("\n %d无效。\n");
    }    return 0;
}
*/

   /* int number;
    int sum = 0;
    printf("\n 输入一个数字：");
    scanf("%d",&number);
    if(number>0)
    {
        while(number>0) //判断条件
        {
        sum = sum + number;     //计算思路
        number = number - 1;
        }
        printf("\n 和为：%d\n",sum);
    }
    else
    {
        printf("\n %d无效。\n",number);
    }    return 0;
}
*/
//编辑一个让用户输入一个数字  把这个数字求和的一半
   /*
   #include<stdio.h>
    void main()
    {
   int sum = 0;
    int number;
    printf("\n输入一个数字：");
    scanf("\n%d",&number);
    if(number>0)
    {
        while(number>0)
        {
        sum = sum + number;
        number = number - 2;
        }
        printf("\n您想求的和为%d ",sum);
    }
    else
    {
        printf("\n%d无效");
    }    return 0;
}*/
/*
#include<stdio.h>
    void main()
    {
int a,b,c;
printf("\n请输入您的第一个数：");
scanf("%d",&a);
printf("\n请输入您的第二个数：");
scanf("%d",&b);
printf("\n\n输出互换前的数：");
printf("\n第一个数为：%d",a);
printf("\n第二个数为：%d",b);
    c = a;
    a = b;
    b = c;
    printf("\n\n输出互换前的数：");
    printf("\n第一个数为：%d",a);
    printf("\n第二个数为：%d",b);
    return 0;}*/

   /* #include<stdio.h>
    void main()
    {
    float a;//基本工资
    float b;//物价津贴
    float c;//房屋津贴
    float d;//实际工资
    printf("\n 请输入您的基本工资：");
    scanf("%f",&a);
    b = a * 40 / 100;
    c = a * 20 / 100;
    d = b + c +a;
    printf("\n物价津贴为:%7.2f",b);
    printf("\n房屋津贴为:%7.2f",c);
    printf("\n实际工资为:%7.2f\n",d);

return 0;
    }*/
    //int整形
    //short段整形
    //long长整型
    //float但精度浮点数
    //doubie双精度浮点型
    //char非数值类型

 /*   #include<stdio.h>
    void main()
    {
        char a,b;
        printf("\n请输入一个小写字母：");
        scanf("%c",&a);
        b =a - 32;
        printf("\n对应的大写字母为：%c\n",b);

    }*/
   /* #include<stdio.h>
    void main()
{
    char a,b;
    printf("\n请输入一个大写字母：");
    scanf("\n%c",&a);
    b = a +32;
    printf("\n对应的小谢字母为：%c\n",b);

}*/
/*int main()
//算长方形的面积
{
    float a=21212.5f;
    float b=41212.0f;
    float c = a * b;
    printf("长方形面积为%2f\n",c);
    return 0;
}
*/
//计算yuan的面积
/*#include<stdio.h>
void main()
{
    double a=100;
    double b = 3.14 * a * a;
    printf("圆的面积为：%lf\n",b);
}*/

/*#include<stdio.h>
void main(){
double chang=12121;
double kuan=7877;
double mianji;
double zhouchang;

mianji = chang * kuan;
zhouchang = 2 * (chang + kuan);
printf("长方形的周长为：%2.1f面积为：%2f",zhouchang,mianji);


}*/
  /*  #include<stdio.h>
    #include<stdlib.h>
    int main()
{
    double num1,num2;

    scanf("%lf %lf",&num1,&num2);
printf("%lf\n%lf",num1,num2);


    return 0;
}
*/

/*#include<stdio.h>
int main()
{
int num1,num2,num3,num4,num5,num6;
for(;;)
{

scanf("%d",&num1);
if(num1>=10000)
{
    printf("超出");
}
    else if(num1<1000)
    {
        printf("太小");
    }
    else
    {
    num2 = num1 % 10;
    num3 = num1 / 10 % 10;
    num4 = num1 /  100 % 10;
    num5 = num1 / 1000 % 10;
    num6 = num2 + num3 + num4 + num5;

    }printf("%d",num6);
}

return 0;
}*/

/*#include<stdio.h>
int main()
{
    int num1=100;
    int sum=0,i=0;
    while(i<num1)
    {
        sum = sum + num1 -i;
        i++;
    }

    printf("  %d   ",sum);
    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int num1=10;
    int sum=0,i=0;
    do
    {
       sum = sum + num1 -i;
       i++;
    }while(i<2);

    printf("  %d   ",sum);

    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    int num1=10;
    int sum=0,i=0;
    for(i=0;i<num1;i++)
    {
        sum=sum+num1-i;


    }

    printf("  %d   ",sum);


    return 0;
}

*/
/*#include<stdio.h>
int main()
{
    int num1=13456789,sum=0,i,temp;
    for(i=0;i<8;i++)
    {
        temp=num1%10;
        num1/=10;
        sum+=temp;
    }
    printf("   %d",sum);


    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int num1,i;
    int num3 = 1;
    while(num3 == 1)
    {
        scanf("%d",&num1);
        for(i=0;i<=num1;i++)
        {
            printf("%d",i);
        }
    scanf("%d",&num3);

    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int num1,i,num2=1;
    scanf("%d",&num1);
    for(i=0;i<num1;i++)
    {
       num2=num2*(num1-i);
    }
    printf("%d",num2);

}
#include<stdio.h>
int main()
{
    int n,k=2;
    scanf("%d",&n);
    for(;;)
    {
        if(n==k)
        {

            printf("%d ",k);
            break;
        }

        else
        {
        if(n%k==0)
        {
            printf("%d ",k);
            n=n/k;
        }
        else{
            k++;
            }
        }
    }


return 0;
}



#include<stdio.h>
int main()
{
    int n,k=2;
    scanf("%d",&n);
    for(;;)
    {
        if(n==k)
        {

            printf("%d ",k);
            break;
        }
        else if(n%k==0)
        {
            n=n/k;


           printf("%d",k);
        }
        else{
           k++;
        }

        }
    }


return 0;
}
*/

/*#include<stdio.h>
int main()
{
    int num1=0,num2=0,i;
    char num3;
    for(i=0;i<10;i++)
    {

        num3 = getchar();
        if(num3>='a'&&num3<='z')
        {
            num1++;
        }
        else if(num3>='A'&&num3<='Z')
        {
            num2++;
        }
        putchar(num3);

    }
    if(num1>num2)
    {
        printf("aaaaa");
    }
    else if(num1=num2)
    {
        printf("safsf");
    }
    else{printf("afasfasfd");}

    printf("小写%d，大写%d",num1,num2);

    return 0;
}*/


/*#include<stdio.h>
int main()
{

    111110
    1111000
    11100000
    110000000
    1000000000

   int i,j,k;
   for(i=0;i<6;i++)
   {

       for(k=6;k>i;k--)
       {
           printf(" ");
       }
       for(j=0;j<i;j++)
       {
           printf(" #");
       }
       printf("\n");
   }
    for(i=0;i<6;i++)
   {


       for(j=0;j<i;j++)
       {
           printf(" ");
       }
        for(k=6;k>i;k--)
       {
           printf(" #");
       }
       printf("\n");
   }



    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int i[10];
    int j,k;
    for(j=0;j<10;j++)
    {
        i[j]=j+100;
    }
    for(k=0;k<10;k++)
    {
        printf("dayinshu[%d]=%d\n",k,i[k]);
    }


    return 0;
}
*/
/*#include<stdio.h>
int main()
{
   //int i[5]={2,3,5,7,13};
   int k=2,i=1764;

   for(;;)
    {
        if(i==k)
        {
            printf("%3d\n",k);
            break;
        }
        else if(i%k==0)
        {
            i=i/k;

            printf("%3d",k);
        }
        else
            {
                k++;
            }
    }



    return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int i[4]={};
    int j,k;

    for(j=0;j<4;j++)
    {
        scanf("%d",&i[j]);

    }

    for(k=0;k<4;k++)
    {
         printf("%3d",i[k]);
    }

   return 0;
}
*/
/*#include<stdio.h>
int main()
{
    int i;
    scanf("%d",&i);
    switch(i)
    {
    case 1:
        {
            printf("qqfqw");
            break;
        }
        case 2:
        {
            printf("qqfw");
            break;
        }case 3:

        {
            printf("qfqw");
            break;
        }
        default:
        {
            printf("fwfwfqf");
            break;
        }


    }
 return 0;
}*/
/*#include<stdio.h>
int main()
{
    12．打印出所有的“水仙花数”，
    所谓“水仙花数”是指一个三位数，
     其各位数字立方和等于该数本身
     。例如 153是一个水仙花数，因为 153＝
     （要求分别用一重循环和三重循环实现）。
    int n[5]={};
    int j,k,l,m,i=0;
    for(i=0;i<5;i++)
    {
        if(i<5)
            {
                j = (n[i] / 1) % 10;
                k = (n[i] / 10) % 10;
                l = (n[i] / 100) % 10;
            }

        else if(m=j*j*j+k*k*k+l*l*l)
            {
                printf("%d",m);
            }
    }
    return 0;
}
*/
/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

#define Max 6 //最大贵妃数量

int main()
{
    int i,search,day,j = 0;
    int count = 4;// 当前的嫔妃数目
    int choice;           //皇帝的选择 1 - 4 之间
    char yourname[50];    //皇帝名号
    char tempname[10];    //存放临时变量
    char names[Max][8] = {"郭德纲","如花妹","乔碧萝","蔡徐坤"};   //姓名
    char levelnames[4][10]  = {"初识","嫔妃","贵妃","皇后"};
    int level[Max] = {1,1,1,1,-1,-1};//级别
    int loves[Max] = {100,100,100,100,-1,-1};//初始好感度

    //正文开始：
    printf("陈氏纪元XXX年\n");
    Sleep(500);
    printf("在某不知名国家，老皇帝驾崩了，新皇帝遂上位。\n");
    Sleep(500);

    printf("请陛下输入您的名号：");
    scanf("%s",yourname);

    printf("游戏规则介绍：\n");
    Sleep(500);
    printf("游戏共有10天，超过10天游戏自动结束\n");
    Sleep(500);
    printf("开局自带4位妃子：郭德纲，如花妹，乔碧萝，蔡徐坤\n");
    Sleep(500);
    printf("（恶趣味一小下）\n");
    Sleep(500);
    printf("妃子等级分为：初识，嫔妃，贵妃，皇后\n");
    Sleep(500);
    printf("开局四位妃子好感度默认100\n");
    Sleep(500);
    printf("每天皇帝可执行一个操作：招募新妃子、翻牌、责罚或者单独召见某爱妃（神兽出没~~）\n");
    Sleep(500);
    printf("不同的选择对每个人的好感度均会有所改变，一旦有任意三个妃子好感度低于60则游戏失败\n");
    Sleep(500);
    printf("啥？你问我胜利条件.......我还没做，暂定活过10天吧\n");
    Sleep(500);
    printf("加油！\n");
    Sleep(1000);
    printf("\n\n\n吾皇万岁万岁万万岁！\n\n");
    Sleep(1000);
    printf("今日新皇帝<%s>正式登基，经过一天的忙碌，终于来到了晚上\n",yourname);



    for(day = 1;day <=10;day++)
    {
        printf("\n第%d天：\n",day);
        Sleep(500);
        printf("1.朕要选妃：\t\t (招募新妃子)\n");
        Sleep(500);
        printf("2.今夜翻牌子：\t\t (宠幸妃子)\n");
        Sleep(500);
        printf("3.责罚：\t\t (打入冷宫)\n");
        Sleep(500);
        printf("4.单独召见爱妃：\t (你猜会发生什么)\n");
        Sleep(500);
        printf("\n请陛下选择：");
        scanf("\n\n%d",&choice);
        Sleep(500);

        printf("\n\n***************************************************************\n");

        switch(choice)
        {
        case 1:
            printf("皇帝下旨选妃：\n");
            Sleep(500);
            if(count < Max)//如果当前妃子数量小于最大值
                {
                    printf("请陛下赐名：");
                    scanf("%s",names[count]);
                    level[count] = 0;
                    loves[count] = 90;
                    count++;
                    for(i=0;i<=count;i++)
                    {
                        loves[i] -= 10;
                    }
                    Sleep(500);
                    printf("其余妃子好感度-10");

                }
                else if(count ==Max)
                {
                    printf("陛下，要注意龙体啊，后宫已经人满为患！\n添加失败！今夜无事。\n");
                }

            break;

        case 2:
            printf("到了翻牌子的时候了：\n");
            //找到要翻牌子的妃子
            printf("陛下请决定今天要翻哪个妃子呢：");
            scanf("%s",tempname);
            //修改这个妃子的状态
            for(i = 0;i < count;)
            {
                if(strcmp(tempname,names[i]) ==0)
                {
                    loves[i] += 30;
                    level[i] = level[i] >= 3 ? 3 : level[i] + 1;
                    for(i=0;i<=count;i++)
                    {
                        loves[i] -= 10;
                    }
                    printf("陛下v587~(接下来的场面少儿不宜，不与描述）\n（其余妃子好感度-10）");
                    break;
                }
                else if(strcmp(tempname,names[i]) !=0)
                {
                    i++;
                }
                if (i >= count)
                {printf("陛下，您的后宫没有这个妃子啊！（所有妃子好感度-10）\n");
                    for(i=0;i<count;i++)
                    {
                        loves[i] -= 10;
                    }
                }

            }
            break;

        case 3:
            printf("突然传来一声冒犯你的声音，你一抬头，看到竟然是你的妃子（请输入妃子的名字）：\n");
            Sleep(500);
            printf("不要删除郭德纲，会出现bug，我懒得改了.........\n");
            Sleep(500);
            printf("请输入名字：");
            scanf("%s",tempname);
            for(i = 0;i < count;)
            {
                if(strcmp(tempname,names[i]) ==0)
                {
                    search = i;
                    break;
                }
                else if(strcmp(tempname,names[i]) !=0)
                {
                    i++;
                }
            }
            if (i >=count)
            {
                printf("虚惊一场，无人打入冷宫，只是幻听而已\n");
            }
            else if(i < count)
            {

                for(i = search;i < count - 1;i++)
                {
                    //names[i] = names[i+1];
                    strcpy(names[i],names[i+1]);
                    loves[i] = loves[i+1];
                    level[i] = level[i+1];
                    printf("\n该妃子已经被打入冷宫！永世不得翻身\n");

                    for(i=0;i<=count;i++)
                    {
                        loves[i] += 20;
                    }
                    printf("（其余妃子好感度+20）");

                }
                count--;
                if(count <=3)
                {printf("后宫不好带啊，都没人了！（游戏失败）");
                    Sleep(500);Sleep(500);
                    exit(0);
                }
            }
            break;

        case 4:
            printf("传爱妃：");
            scanf("%s",tempname);
            for(i = 0;i < count;)
            {
                if(strcmp(tempname,names[i]) ==0)
                {

                    printf("什么都没有发生（其实就是我懒得做了）");

                    break;
                }
                else if(strcmp(tempname,names[i]) !=0)
                {
                    i++;
                }


                if (i >= count)
                {printf("陛下，您的后宫没有这个妃子啊！\n");

                }

            }
            break;

        default:
            Sleep(500);Sleep(500);
            printf("君无戏言，陛下请三思");
            break;

        }
            for(i = 0;i < count;i++)
            {
                if(loves[i] < 60)
                {
                    j++;
                }

                if(j >= 3)
                {
                    printf("姐妹们！去刷皇帝了！（游戏失败）\n");
                    printf("\n***************************************************************\n");
                    Sleep(500);
                    printf("查看当前的状态：\n");
                    Sleep(500);
                    printf("姓名\t\t级别\t\t好感度\n");

                    for (i = 0;i < count;i++)
                    {
                        printf("%s \t\t %s \t\t %d \n",names[i],levelnames[level[i]],loves[i]);
                        Sleep(500);
                    }
                    printf("\n***************************************************************\n\n\n");

                        printf("您共存活了%d天\n",day);
                        Sleep(500);Sleep(500);Sleep(500);Sleep(500);
                        printf("按任意键退出...");
                        getch();
                        exit(0);
                }
            }
            Sleep(500);Sleep(500);
            printf("\n\n第%d天就这么马马虎虎过去了\n",day);
            Sleep(500);Sleep(500);
            printf("\n***************************************************************\n");
            Sleep(500);
            printf("查看当前的状态：\n");
            Sleep(500);
            printf("姓名\t\t级别\t\t好感度\n");

            for (i = 0;i < count;i++)
            {
                printf("%s \t\t %s \t\t %d \n",names[i],levelnames[level[i]],loves[i]);
                Sleep(500);
            }
            printf("\n***************************************************************\n\n\n");
    }

    printf("游戏结束，%s和妃子们过上了没羞没臊的生活\n",yourname);
    Sleep(500);Sleep(500);Sleep(500);Sleep(500);
    printf("按任意键退出...");
    getch();
    exit(0);

    return 0;
}
*/
/*#include<stdio.h>

int main()
{
    int nums[5]={};
    int temp;
    int i,j,y=0,k=2;
    int sum=0,avg;
    printf("请输入你要判定的数字（五个）：");
    for(i=0;i<5;i++)
    {
        scanf("%d",&nums[i]);
    }
    j=0;
    for(;;)
    {
        temp=nums[j];
        if(temp==k)
        {
            printf("%d是质数\n,temp");
            sum=sum+temp;
            y++;
            j++;
            k=2
        }
        else if(temp!=k)
        {
            if(temp%k==0)
            {
                printf("%d不是质数\n",temp);
                j++;
            }
            else
                k++;
        }
        if(j==5)
            break;
    }
    avg=sum/y;
    printf("和为：%d 平均数为：%d",sum,avg);



    return 0;
}
*/
/*
#include<stdio.h>
int main()
{
    int num1,num2,num3;
    char f;
    scanf("%d",&num1);
    for(;;)
    {

        scanf("%s",&f);
        switch(f){
        case'+':
            {
                scanf("%d",&num2);
             num1 = num1 + num2;

             break;
            }
        case '-':
            {
                 scanf("%d",&num2);
            num1=num1 - num2;
            break;
            }
        case '*':
            {
                 scanf("%d",&num2);
           num1=num1 * num2;
                 break;
            }

         case '/':
            {
                 scanf("%d",&num2);
            num1=num1 / num2;
                 break;
            }
            case'=':
            {
                printf("%d",num1);
                break;
            }
         default:
             printf("woxiao");
            break;



        }


    }






    return 0;
}*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("开始您的计算吧！在计算前请仔细阅读计算要求！\n");
    printf("要求：该程序只能运算四则运算，运算按输入顺序计算，每次输入完数字或字符都要点击回车哦！\n");
    printf("************************************************************************************\n");
    printf("开始！\n");
    int num1,num2,num3;
    char f;
    printf("请输入第一个数： ");
    scanf("%d",&num1);
    for(;;)
    {
        if(f != '='){
        printf("请输入一个运算符号：");}
        scanf("%s",&f);
        switch(f)
        {
        case'+':
            {
                printf("请输入加数：");
                scanf("%d",&num2);
                num1 = num1 + num2;
                break;
            }
        case '-':
            {
                printf("请输入减数：");
                scanf("%d",&num2);
                num1 = num1 - num2;
                break;
            }
        case '*':
            {
                printf("请输入乘数：");
                scanf("%d",&num2);
                num1 = num1 * num2;
                break;
            }

        case '/':
            {
                printf("请输入除数：");
                scanf("%d",&num2);
                num1=num1 / num2;
                break;
            }
        case'=':
            {
                printf("算完啦！算完啦！我给你算出的得数为：");
                printf("%d",num1);
                break;
            }
        default:
                printf("错误!");
                break;

        printf("\n");

        }
    }

    return 0;
}

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
#include <stdio.h>
#include <stdlib.h>
void pingjunfen();
int i,j,k,m;
void pingjunfen()
{
    for(i=0;i<10;i++)
    {
        printf("请输入第%d个同学的成绩为:",i+1);
        scanf("%d",&j);
        k=k+j;
    }
    m=k/10;
    printf("平均分为%d",m);
}
int m,n,k,i,s;//值均小于 7
int ms,ns,ks;
void qiuhe();
void qiuhe()
{
    scanf("%d",&m);
    //求m！，n！，k！
    for(i=0;i<7;i++)
    {

        k=m--;
        ms=ms+k;
    }
    printf("%d",ms);
    /*1
    2
    3
    4
    5
    6
    7*/
}
int main()
{
    //请用自定义函数的形式编程实现求
    //10 名学生 1 门课程成绩的平均分。

//pingjunfen();

//请用自定义函数的形式编程实现，
//求 s = m! + n! + k!，m、n、k 从键盘输入(值均小
//于 7)。

qiuhe();


    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define N 5
int main()
{
    /*
    循环录入5个数字，进行排序输出结果
    */
    //冒泡排序
    //16,23,34,67,54
    //降序排列
    //查找和交换
  /*  int nums[N]={16,23,34,67,54};
    int i,k,j;
    //外层循环控制轮数
    for(i=0;i<N-1;i++)
    {
        //内层循环控制次数
        for(j=0;j<N-i-1;j++)
        {
            //如果当前值小于后面值交换
            if(nums[j]<nums[j+1])
            {
            k=nums[j];
            nums[j]=nums[j+1];
            nums[j+1]=k;
            }
        }
    }
    printf("排序后的结果为：\n");
    for(i=0;i<N;i++)

    {
        printf("%d\t",nums[i]);
    }
    int nums[N]={16,23,34,67,54};
    int i,k,j;
    for(i=0;i<N-1;i++)
    {
        for(j=0;j<N-1-i;j++)
        {
            if(nums[j]>nums[j+1])
            {
                k=nums[j];
                nums[j]=nums[j+1];
                nums[j+1]=k;
            }
        }
    }
    printf("增序排列后的为：\n");
    for(i=0;i<N;i++)
    {
        printf("%d\t",nums[i]);
    }*/
    //数组删除
   /* int nums[5]={16,23,34,67,54};
    int s=5;//当前元素个数
    int k,j,i,m=5,t=5;
    printf("请输入一个你想删除的数字！");
    scanf("%d",&k);
    for(i=0;i<5;i++)
    {
        if(k=nums[i])
        {
           //记录下标
            j=i;
            break;
        }

    }
    printf("你删除的下标为%d",j);
    if(-1==s)
    {
        printf("没找到！");
    }
    else
    {
        for(m=j;m<j-1;m++)
        {
            nums[m]=nums[m+1];
        }
    }
    printf("删除后的结果为：");
    for(t=0;t<4;t++)
    {
        printf("%d\t",nums[t]);
    }*/

   /* int nums[]={16,23,34,67,54};
    int i,k,j=-1;
    printf("请输入你想删除的数字：");
    scanf("%d",&k);
    for(i=0;i<5;i++)
    {
        if(k==nums[i])
        {
           j=i;         //下标为j
           break;
        }

    }
    if(-1!=j)
    {
        for(i=j;i<5;i++)
        {
            nums[i]=nums[i+1];
        }
    }
    printf("删除后的结果为：");
    for(i=0;i<4;i++)
    {
        printf("%d\t",nums[i]);
    }
*/
   /* int nums[]= {16,23,34,67,54};
    int i,k,j=-1;
    printf("请输入你想删除的数字：");
    scanf("%d",&k);
    for(i=0; i<5; i++)
    {
        if(k==nums[i])
        {
            j=i;         //下标为j
            break;
        }

    }
    if(j!=-1)
    {
        for(i=j; i<5; i++)
        {
            nums[i]=nums[i+1];
        }
    printf("删除后的结果为：");
    for(i=0; i<4; i++)
    {
        printf("%d\t",nums[i]);
    }
    }
}*/


  /* int nums[]={8,4,2,1,23,344,12};
    int i,k,m,num1;


   for(i=0;i<7;i++)
    {
        printf("第%d个数为%d\n",i+1,nums[i]);
    }


    for(i = 0;i < 7;i++)
    {
        k += nums[i];
    }
    m = k / 7;
    printf("数组的和为%d数组的平均值为%d\n",k,m);
    //查找元素
    scanf("%d",&num1);
    for(i=0;i<7;i++)
    {


    if(num1==nums[i])
    {
        printf("找到了！\n");
        break;
    }
    }

    if(i==7){
        printf("没找到!");
    }*/
  /*  int num=1111;
    int * ptr_num=&num;
    //%p指针占位符
    printf("%p\t%p\n",ptr_num,&num);
    printf("%p\n",*ptr_num);*/
/*int num=9;
int*ptr_num=&num;
printf("%p/%p",&num,ptr_num);*/
/*int num1=1024;
int num2=2048;
int*ptr1;
int*ptr2;
ptr1=&num1;
ptr2=&num2;
printf("num1的值为%d\tnum1的地址为%p\n",num1,ptr1);
printf("num2的值为%d\tnum2的地址为%p\n",num2,ptr2);
//将变量1的值赋给变量2
//num1=num2;前后相等
*ptr1=*ptr2;
printf("num1的值为%d\tnum1的地址为%p\n",num1,ptr1);
printf("num2的值为%d\tnum2的地址为%p\n",num2,ptr2);
//直接操作指针
ptr2=ptr1;
printf("num1的值为%d\tnum1的地址为%p\n",num1,ptr1);
printf("num2的值为%d\tnum2的地址为%p\n",num2,ptr2);
*ptr2=1111;
printf("num1的值为%d\tnum1的地址为%p\n",num1,ptr1);
printf("num2的值为%d\tnum2的地址为%p\n",num2,ptr2);
//两个变量指向同一块内存，数值无法修改，还是那块内存
ptr1=NULL;*///指针为空，不用的时候要把指针变空
/*
1指针就是一个变量
2用来存放地址
两个运算符
int num=10；
int*ptr_num;
赋值ptr_num=&num;
*ptr_num查找值
int*tr_bun2;
ptr_num2=ptr_num;//两个指针指向了同一个内存
*ptr_num2=99;
等价：num=99；
*/

//数组是一块连续空间
//数组名是之快连续空间的首地址
/*double score[5]={12,23,46,657,35};
double * ptr_score;
//printf("数组首地址：%p\t数组收购元素地址：%p",score,&score[0]);
//数组首地址就是数组首元素地址
//ptr_score=&score[0];
ptr_score=score;//等价
//指针参与运算
int i;
//访问数组元素
for(i=0;i<5;i++)
{
   // printf("%.2lf\n",ptr_score[i]);
    printf("%.2lf\n",*(ptr_score+i));//指针访问数组,指针位置不动
   // printf("%.2lf\n",*ptr_score++);
}

//重置指针位置
//ptr_score=score;
*/
/*int score[]={12,23,45,56,67};
int*ptr_score=score;
int i;
for(i=0;i<5;i++)
{
    printf("第%d元素\t元素值为%d\t地址为：%p\n",i+1,*ptr_score,ptr_score);
    ptr_score++;
}*/
//指针++操作访问数组
/*int nums[]={12,23,34,45,56,67,78};
int i;
int*ptr_nums=nums;
for(i=0;i<7;i++)
{
    printf("第%d个元素\t元素为%d\t元素地址为：%p\n",i+1,*ptr_nums,ptr_nums);
    ptr_nums++;
}*/
/*int nums[]={12,23,34,45,56,67,78};
int i;
int*ptr_nums=nums;
for(i=0;i<7;i++)
{
    printf("第%d个元素\t元素为%d\t元素地址为：%p\n",i+1,*ptr_nums+i,ptr_nums+i);

}*/
    //数组逆序，数组收尾交换
  /*  int nums[]={12,223,343,1,2,354};
    int temp;//临时变量
    int i,j;
    for(i=0;i<3;i++)
    {
        //第i个值与第n-i-1个值交换
        temp=nums[i];
        nums[i]=nums[i-1];
        nums[6-i-1]=temp;
    }
    for(j=0;j<6;j++)
    {
        printf("%d\t",*(nums+j));
    }//错误
*/
  /*  int nums[6]={12,223,343,1,2,354};
    int temp;
    int i;
    int*ptr_nums=nums;
    int*ptr_num1=nums+6-1;
    while(ptr_nums!=ptr_num1)
    {
        temp=*ptr_nums;
        *ptr_nums=*ptr_num1;
        ptr_num1=temp;
        ptr_nums++;
        ptr_num1--;
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        printf("%d\t%d",*(ptr_nums+i),*(ptr_num1-i));
    }
*//*
int nums[5]={12,23,34,45,56};
int*ptr_nums;
int i;
ptr_nums=&nums[0];
printf("打印出数组的首地址：%p\n",ptr_nums);
for(i=0;i<5;i++)
{
   printf("数组第%d个元素为：%d\t",i+1,nums[i]);
}

for(i=0;i<5;i++)
{
    printf("数组的第%d个元素的地址为：%p\t",i+1,*(nums+i));
}

*、
/*
int nums[5]={12,2323,3434,54454,5656};
int*ptr_nums;
ptr_nums=&nums[0];
int i;
for(i=0;i<5;i++)
{
    printf("数组的第%d位数为：%d\t",i+1,ptr_nums[i]);
}
//指针代替数组
*/
/*
int i;
int nums[5]={121,232,343,44646,5757};
int*ptr_nums;
ptr_nums=&nums[0];
ptr_nums = nums;
for(i=0;i<5;i++)
{

    printf("%d\t",*ptr_nums++);
}
//指针访问前重置指针用*ptr_nums++
*/
//12,23,45,56,67
//23,34,45,56,45
//76,77,88,99,00
//二维数组外层循环控制行，内层循环控制列（行，列）
int i,j;
int nums[3][5]={
                {12,23,45,56,67},
                {23,34,45,56,45},
                {76,77,88,98,00},
                };
                for(i=0;i<3;i++)
                {
                        for(j=0;j<5;j++)
                        {
                           //printf("%0.2d\t",nums[i][j]);
                           //printf("%0.2d\t",*(nums[i]+j));
                           printf("%0.2d\t",*(*(nums+i)+j));
                        }
                        printf("\n");
                }
    printf("**********************************\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",nums[0][i]);
    }
/*
指针与数组的小结：
&取变量的地址
*根据地址取值-顺藤摸瓜
指针不能赋常量
访问一维数组
nums[i]
ptr_nums=nums[0];
访问二维数组
nums[i][j]
*(*(nums+i)+j)
*/
//函数：
//封装了很多内置程序
/*   内置函数
     由C语言系统提供
     需要程序前包含函数头文件
     只定义函数
     不带参数
     带参数（可以带返回值也可以不带返回值）

*/

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("开始您的计算吧！在计算前请仔细阅读计算要求！\n");
    printf("要求：该程序只能运算四则运算，运算按输入顺序计算，每次输入完数字或字符都要点击回车哦！\n");
    printf("************************************************************************************\n");
    printf("开始！\n");
    int num1,num2,num3;
    char f;
    printf("请输入第一个数： ");
    scanf("%d",&num1);
    for(;;)
    {
        if(f != '='){
        printf("请输入一个运算符号：");}
        scanf("%s",&f);
        switch(f)
        {
        case'+':
            {
                printf("请输入加数：");
                scanf("%d",&num2);
                num1 = num1 + num2;
                break;
            }
        case '-':
            {
                printf("请输入减数：");
                scanf("%d",&num2);
                num1 = num1 - num2;
                break;
            }
        case '*':
            {
                printf("请输入乘数：");
                scanf("%d",&num2);
                num1 = num1 * num2;
                break;
            }

        case '/':
            {
                printf("请输入除数：");
                scanf("%d",&num2);
                num1=num1 / num2;
                break;
            }
        case'=':
            {
                printf("算完啦！算完啦！我给你算出的得数为：");
                printf("%d",num1);
                break;
            }
        default:
                printf("错误!");
                break;

        printf("\n");

        }
    }

    return 0;
}
