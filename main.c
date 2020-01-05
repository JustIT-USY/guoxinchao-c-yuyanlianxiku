#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#define WENJIAN "D:\\tc2.txt"
int main()
{/*
void cunpan();
目　　标：设计一个可进行停车场管理的程序，
具备基本的停车场车辆管理功能：如输出系统标题和菜单
，输出车辆停放位置、费用、停留时间信息表，添加、删除停车记录。
要　　求：程序具备菜单功能或详细的提示功能
，具备车辆停放信息输出、添加、删除的功能。
熟练掌握循环、函数、结构体的操作，程序中至少要有一个自定义结构体
。总程序量不少于150行，输出数据要格式美观。
程序要有详细的注释及必要的说明文档，程序设计内容和文档内容要体现个性化设计思想。
特殊说明：需要独立实现车辆停放信息输出、添加、删除的功能，
并在说明书中详细阐述，体现设计特色。*//*
int mobil,email,b,v;
void tingcheshijian();
void tingcheshijian()
{
    printf("停车时间按照整点计算\n按照24小时时间计算\n超过半个小时按照整点计算\n");
    printf("您进入停车场的时间为%d",mobil);
    scanf("%d",&mobil);
    printf("您离开停车场的时间为%d",email);
    scanf("%d",&email);
    b=email-mobil;
    v=b*5;
    printf("您的停车费用为：%d",v);
    Sleep(1500);
}

struct tongxunlu
{
    //核心结构体，定义通讯录的数据结构
	int number;
	char sex;
	char name[50];
	char tel[50];
	char mobil[50];
	int QQ;
	char email[50];
	char beizhu[50];
}
TXLs[70];//结构体数据，在内存中保存通讯录数据，最长70人
int lentxl=0;//当前结构体数组的长度

//键盘输入函数，用于从键盘向内存输入数据
void jianpanshuru(){
	struct tongxunlu newtxl[20];//新的结构体数组，用于从键盘接收临时数据，最终将存入硬盘文件
	int len=0;
	int i;
	char flag;
	FILE * fp;

	system("cls");//清屏
	for(i=0;1;i++){
            /*输入的序号、今天进入的第几台车
            输入的姓名、车牌号、
            电话、车主姓名
            输入的手机为、车辆进入的时间
            输入的qq、车位
            输入的email、离开停车场的时间
            输入的备注。输入的备注
            继续输入2新通讯录、继续输入车辆信息*//*
		len++;
		printf("请输入第几台车:");
		scanf("%d",&newtxl[i].number);
		printf("请输入车牌号:");
		scanf("%s",newtxl[i].name);
		printf("请输入车主姓名:");
		scanf("%d",newtxl[i].tel);
		printf("请输入车辆进入的时间(按照整点计算)：");
		scanf("%s",newtxl[i].mobil);
		printf("请输入车位:");
		scanf("%d",&newtxl[i].QQ);
		printf("请输入离开停车场时间(按照整点计算):");
		scanf("%s",newtxl[i].email);
		printf("请输入备注:");
		scanf("%s",newtxl[i].beizhu);
		printf("希望退出，请输入“Q”，按其它键继续输入车辆信息。\n");
		getchar();
		scanf("%c",&flag);
		if(flag=='Q')
			break;
	}

	fp=fopen(WENJIAN,"a");

	for(i=0;i<len;i++){
		fprintf(fp,"%d\t%s\t%s\t%s\t%d\t%s\t%s\t\n",newtxl[i].number,
			newtxl[i].name,newtxl[i].tel,newtxl[i].mobil,newtxl[i].QQ,newtxl[i].email,newtxl[i].beizhu);
	}
	fclose(fp);
	printf("请按回车键返回主界面。\n");
	getchar();
	getchar();
}
//存盘函数，将内存中通讯录数据保存到硬盘文件中
void cunpan(){
	FILE * fp;
	int i;
	system("cls");
	if(lentxl==0){
		printf("尚未读盘，没有数据，无法存盘!\n");
		printf("请按回车键返回主界面。\n");
		getchar();
		getchar();
		return;
	}
	if((fp=fopen(WENJIAN,"w"))==NULL){
		printf("该文件不存在!\n");
		return;
	}
	for(i=0;i<lentxl;i++){
		fprintf(fp,"%d\t%s\t%s\t%s\t%d\t%s\t%s\t\n",TXLs[i].number,
			TXLs[i].name,TXLs[i].tel,TXLs[i].mobil,TXLs[i].QQ,TXLs[i].email,TXLs[i].beizhu);
	}
	printf("存盘成功!\n");
	fclose(fp);
	printf("请按回车键返回主界面。\n");
	getchar();
	getchar();
}
//读盘函数，将硬盘中文件数据读入内存
void dupan(){
	FILE * fp;
	int i;
	system("cls");
	if((fp=fopen(WENJIAN,"r"))==NULL){
		printf("该文件不存在!\n");
		return;
	}
	for(i=0;!feof(fp);i++){
		fscanf(fp,"%d\t%s\t%s\t%s\t%d\t%s\t%s\t\n",&TXLs[i].number,
			TXLs[i].name,TXLs[i].tel,TXLs[i].mobil,&TXLs[i].QQ,TXLs[i].email,TXLs[i].beizhu);
		lentxl++;
	}
	printf("读盘成功!\n");
	fclose(fp);
	printf("请按回车键返回主界面。\n");
	getchar();
	getchar();
}
//显示函数，用于显示内存中通讯录数组
void xianshi(){
	int i;
	system("cls");
	if(lentxl==0){
		printf("尚未读盘，数组中无数据。\n");
		return;
	}
	printf("第几台车\t车牌号\t车主姓名\t车辆进入的时间\t车位\t离开停车场时间\t备注\t\n");
	for(i=0;i<lentxl;i++){
		printf("%d\t%s\t%s\t%s\t%d\t%s\t%s\t\n",TXLs[i].number,
			TXLs[i].name,TXLs[i].tel,TXLs[i].mobil,TXLs[i].QQ,TXLs[i].email,TXLs[i].beizhu);
	}
	printf("\n\n\n");
	printf("请按回车键返回主界面。\n");
	getchar();
	getchar();
}
//修改函数，修改当前内存中通讯录数组数据
void xiugai(){
	int num,i,flag=0;
	char fc;
	if(lentxl==0){
		printf("尚未读盘，没有数据，无法修改!\n");
		return;
	}
	printf("请输入想要修改的信息第几台车：\n");
	scanf("%d",&num);
	for(i=0;i<lentxl;i++){
		if(num==TXLs[i].number){
			printf("第几台车\t车牌号\t车主姓名\t车辆进入的时间\t车位\t离开停车场时间\t备注\t\n");
			printf("%d\t%s\t%s\t%s\t%d\t%s\t%s\t\n",TXLs[i].number,
				TXLs[i].name,TXLs[i].tel,TXLs[i].mobil,TXLs[i].QQ,TXLs[i].email,TXLs[i].beizhu);
			flag=0;
			break;
		}
		else{
			flag=1;
		}
	}
	if(flag==0){
		printf("请重新输入第几台车:");
		scanf("%s",TXLs[i].name);
		printf("请重新输入车牌号:");
		scanf("%d",TXLs[i].tel);
		printf("请重新输入车主姓名:");
		scanf("%s",TXLs[i].mobil);
		printf("请重新输入车辆进入时间:");
		scanf("%d",&TXLs[i].QQ);
		printf("请重新输入离开停车场的时间:");
		scanf("%s",TXLs[i].email);
		printf("请重新输入备注:");
		scanf("%s",TXLs[i].beizhu);
	}else{
		printf("您查找的数据不存在，是否希望插入该序号数据？是请按“Y”，否请按其他任意键。\n");
		getchar();
		scanf("%c",&fc);
		printf("%c",fc);
		if(fc=='Y'){
			TXLs[i].number=num;
		printf("请重新输入第几台车:");
		scanf("%s",TXLs[i].name);
		printf("请重新输入车牌号:");
		scanf("%d",TXLs[i].tel);
		printf("请重新输入车主姓名:");
		scanf("%s",TXLs[i].mobil);
		printf("请重新输入车辆进入时间:");
		scanf("%d",&TXLs[i].QQ);
		printf("请重新输入离开停车场的时间:");
		scanf("%s",TXLs[i].email);
		printf("请重新输入备注:");
			scanf("%s",TXLs[i].beizhu);
		}
	}

	printf("请按回车键继续存盘。\n");
	getchar();
	getchar();
}

void tingcheshijian();


//版权函数，显示程序的版权信息
void banquan(){
	system("cls");
	printf("\n\n***************************************************************\n\n");
	printf("++++++++++++++++@ 欢迎使用停车场管理系统v2.0 @+++++++++++++++++\n");
	printf("++++++++++++++++@        作者：罗继杨        @+++++++++++++++++\n");
	printf("++++++++++++++++@          2014-12-18         @+++++++++++++++++\n");
	printf("\n\n***************************************************************\n\n");
	printf("请按回车键返回主界面。\n");
	getchar();
	getchar();
}

/*主函数，主要功能：显示菜单，接收用户输入，调用相应函数*//*
main()
{

    int flag;
	while(flag!=0)
	{
		system("cls");
		printf("\n\n  ++++++++++++++++@ 欢迎使用停车场管理系统v2.0 @+++++++++++++++++\n\n");
		printf("\t\t    0: 退出\n");
		printf("\t\t    1: 键盘输入\n");
		printf("\t\t    2: 存为磁盘文件\n");
		printf("\t\t    3: 读取磁盘文件\n");
		printf("\t\t    4: 显示\n");
		printf("\t\t    5: 修改数据\n");
		printf("\t\t    6: 版权信息\n");
		printf("\t\t    7: 计算停车费用\n");
		putchar('\n');
		printf("    ******      +++++++++++++++++++++++++++++++++++++++++       ******");
		printf("\n");
		printf("请输入相应数字进行选择的操作:");
		scanf("%d",&flag);
		switch(flag){
		case 0: printf("欢迎下次使用，再见！\n");exit(0);//程序退出函数
		case 1: jianpanshuru();break;
		case 2: cunpan();break;
		case 3: dupan();break;
		case 4: xianshi();break;
		case 5: xiugai();cunpan();break;
		case 6: banquan();break;
		case 7: tingcheshijian();break;
		default:printf("没有这个菜单项，请重新输入。\n");
		}
	}
}


   */


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
*//*
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
*/





























    return 0;
}
