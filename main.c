#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
#include <string.h>
#define WENJIAN "D:\\tc2.txt"
int main()
{/*
void cunpan();
Ŀ�����꣺���һ���ɽ���ͣ��������ĳ���
�߱�������ͣ�������������ܣ������ϵͳ����Ͳ˵�
���������ͣ��λ�á����á�ͣ��ʱ����Ϣ����ӡ�ɾ��ͣ����¼��
Ҫ�����󣺳���߱��˵����ܻ���ϸ����ʾ����
���߱�����ͣ����Ϣ�������ӡ�ɾ���Ĺ��ܡ�
��������ѭ�����������ṹ��Ĳ���������������Ҫ��һ���Զ���ṹ��
���ܳ�����������150�У��������Ҫ��ʽ���ۡ�
����Ҫ����ϸ��ע�ͼ���Ҫ��˵���ĵ�������������ݺ��ĵ�����Ҫ���ָ��Ի����˼�롣
����˵������Ҫ����ʵ�ֳ���ͣ����Ϣ�������ӡ�ɾ���Ĺ��ܣ�
����˵��������ϸ���������������ɫ��*//*
int mobil,email,b,v;
void tingcheshijian();
void tingcheshijian()
{
    printf("ͣ��ʱ�䰴���������\n����24Сʱʱ�����\n�������Сʱ�����������\n");
    printf("������ͣ������ʱ��Ϊ%d",mobil);
    scanf("%d",&mobil);
    printf("���뿪ͣ������ʱ��Ϊ%d",email);
    scanf("%d",&email);
    b=email-mobil;
    v=b*5;
    printf("����ͣ������Ϊ��%d",v);
    Sleep(1500);
}

struct tongxunlu
{
    //���Ľṹ�壬����ͨѶ¼�����ݽṹ
	int number;
	char sex;
	char name[50];
	char tel[50];
	char mobil[50];
	int QQ;
	char email[50];
	char beizhu[50];
}
TXLs[70];//�ṹ�����ݣ����ڴ��б���ͨѶ¼���ݣ��70��
int lentxl=0;//��ǰ�ṹ������ĳ���

//�������뺯�������ڴӼ������ڴ���������
void jianpanshuru(){
	struct tongxunlu newtxl[20];//�µĽṹ�����飬���ڴӼ��̽�����ʱ���ݣ����ս�����Ӳ���ļ�
	int len=0;
	int i;
	char flag;
	FILE * fp;

	system("cls");//����
	for(i=0;1;i++){
            /*�������š��������ĵڼ�̨��
            ��������������ƺš�
            �绰����������
            ������ֻ�Ϊ�����������ʱ��
            �����qq����λ
            �����email���뿪ͣ������ʱ��
            ����ı�ע������ı�ע
            ��������2��ͨѶ¼���������복����Ϣ*//*
		len++;
		printf("������ڼ�̨��:");
		scanf("%d",&newtxl[i].number);
		printf("�����복�ƺ�:");
		scanf("%s",newtxl[i].name);
		printf("�����복������:");
		scanf("%d",newtxl[i].tel);
		printf("�����복�������ʱ��(�����������)��");
		scanf("%s",newtxl[i].mobil);
		printf("�����복λ:");
		scanf("%d",&newtxl[i].QQ);
		printf("�������뿪ͣ����ʱ��(�����������):");
		scanf("%s",newtxl[i].email);
		printf("�����뱸ע:");
		scanf("%s",newtxl[i].beizhu);
		printf("ϣ���˳��������롰Q�������������������복����Ϣ��\n");
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
	printf("�밴�س������������档\n");
	getchar();
	getchar();
}
//���̺��������ڴ���ͨѶ¼���ݱ��浽Ӳ���ļ���
void cunpan(){
	FILE * fp;
	int i;
	system("cls");
	if(lentxl==0){
		printf("��δ���̣�û�����ݣ��޷�����!\n");
		printf("�밴�س������������档\n");
		getchar();
		getchar();
		return;
	}
	if((fp=fopen(WENJIAN,"w"))==NULL){
		printf("���ļ�������!\n");
		return;
	}
	for(i=0;i<lentxl;i++){
		fprintf(fp,"%d\t%s\t%s\t%s\t%d\t%s\t%s\t\n",TXLs[i].number,
			TXLs[i].name,TXLs[i].tel,TXLs[i].mobil,TXLs[i].QQ,TXLs[i].email,TXLs[i].beizhu);
	}
	printf("���̳ɹ�!\n");
	fclose(fp);
	printf("�밴�س������������档\n");
	getchar();
	getchar();
}
//���̺�������Ӳ�����ļ����ݶ����ڴ�
void dupan(){
	FILE * fp;
	int i;
	system("cls");
	if((fp=fopen(WENJIAN,"r"))==NULL){
		printf("���ļ�������!\n");
		return;
	}
	for(i=0;!feof(fp);i++){
		fscanf(fp,"%d\t%s\t%s\t%s\t%d\t%s\t%s\t\n",&TXLs[i].number,
			TXLs[i].name,TXLs[i].tel,TXLs[i].mobil,&TXLs[i].QQ,TXLs[i].email,TXLs[i].beizhu);
		lentxl++;
	}
	printf("���̳ɹ�!\n");
	fclose(fp);
	printf("�밴�س������������档\n");
	getchar();
	getchar();
}
//��ʾ������������ʾ�ڴ���ͨѶ¼����
void xianshi(){
	int i;
	system("cls");
	if(lentxl==0){
		printf("��δ���̣������������ݡ�\n");
		return;
	}
	printf("�ڼ�̨��\t���ƺ�\t��������\t���������ʱ��\t��λ\t�뿪ͣ����ʱ��\t��ע\t\n");
	for(i=0;i<lentxl;i++){
		printf("%d\t%s\t%s\t%s\t%d\t%s\t%s\t\n",TXLs[i].number,
			TXLs[i].name,TXLs[i].tel,TXLs[i].mobil,TXLs[i].QQ,TXLs[i].email,TXLs[i].beizhu);
	}
	printf("\n\n\n");
	printf("�밴�س������������档\n");
	getchar();
	getchar();
}
//�޸ĺ������޸ĵ�ǰ�ڴ���ͨѶ¼��������
void xiugai(){
	int num,i,flag=0;
	char fc;
	if(lentxl==0){
		printf("��δ���̣�û�����ݣ��޷��޸�!\n");
		return;
	}
	printf("��������Ҫ�޸ĵ���Ϣ�ڼ�̨����\n");
	scanf("%d",&num);
	for(i=0;i<lentxl;i++){
		if(num==TXLs[i].number){
			printf("�ڼ�̨��\t���ƺ�\t��������\t���������ʱ��\t��λ\t�뿪ͣ����ʱ��\t��ע\t\n");
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
		printf("����������ڼ�̨��:");
		scanf("%s",TXLs[i].name);
		printf("���������복�ƺ�:");
		scanf("%d",TXLs[i].tel);
		printf("���������복������:");
		scanf("%s",TXLs[i].mobil);
		printf("���������복������ʱ��:");
		scanf("%d",&TXLs[i].QQ);
		printf("�����������뿪ͣ������ʱ��:");
		scanf("%s",TXLs[i].email);
		printf("���������뱸ע:");
		scanf("%s",TXLs[i].beizhu);
	}else{
		printf("�����ҵ����ݲ����ڣ��Ƿ�ϣ�������������ݣ����밴��Y�������밴�����������\n");
		getchar();
		scanf("%c",&fc);
		printf("%c",fc);
		if(fc=='Y'){
			TXLs[i].number=num;
		printf("����������ڼ�̨��:");
		scanf("%s",TXLs[i].name);
		printf("���������복�ƺ�:");
		scanf("%d",TXLs[i].tel);
		printf("���������복������:");
		scanf("%s",TXLs[i].mobil);
		printf("���������복������ʱ��:");
		scanf("%d",&TXLs[i].QQ);
		printf("�����������뿪ͣ������ʱ��:");
		scanf("%s",TXLs[i].email);
		printf("���������뱸ע:");
			scanf("%s",TXLs[i].beizhu);
		}
	}

	printf("�밴�س����������̡�\n");
	getchar();
	getchar();
}

void tingcheshijian();


//��Ȩ��������ʾ����İ�Ȩ��Ϣ
void banquan(){
	system("cls");
	printf("\n\n***************************************************************\n\n");
	printf("++++++++++++++++@ ��ӭʹ��ͣ��������ϵͳv2.0 @+++++++++++++++++\n");
	printf("++++++++++++++++@        ���ߣ��޼���        @+++++++++++++++++\n");
	printf("++++++++++++++++@          2014-12-18         @+++++++++++++++++\n");
	printf("\n\n***************************************************************\n\n");
	printf("�밴�س������������档\n");
	getchar();
	getchar();
}

/*����������Ҫ���ܣ���ʾ�˵��������û����룬������Ӧ����*//*
main()
{

    int flag;
	while(flag!=0)
	{
		system("cls");
		printf("\n\n  ++++++++++++++++@ ��ӭʹ��ͣ��������ϵͳv2.0 @+++++++++++++++++\n\n");
		printf("\t\t    0: �˳�\n");
		printf("\t\t    1: ��������\n");
		printf("\t\t    2: ��Ϊ�����ļ�\n");
		printf("\t\t    3: ��ȡ�����ļ�\n");
		printf("\t\t    4: ��ʾ\n");
		printf("\t\t    5: �޸�����\n");
		printf("\t\t    6: ��Ȩ��Ϣ\n");
		printf("\t\t    7: ����ͣ������\n");
		putchar('\n');
		printf("    ******      +++++++++++++++++++++++++++++++++++++++++       ******");
		printf("\n");
		printf("��������Ӧ���ֽ���ѡ��Ĳ���:");
		scanf("%d",&flag);
		switch(flag){
		case 0: printf("��ӭ�´�ʹ�ã��ټ���\n");exit(0);//�����˳�����
		case 1: jianpanshuru();break;
		case 2: cunpan();break;
		case 3: dupan();break;
		case 4: xianshi();break;
		case 5: xiugai();cunpan();break;
		case 6: banquan();break;
		case 7: tingcheshijian();break;
		default:printf("û������˵�����������롣\n");
		}
	}
}


   */


    /*int a[7]={12,45,78,89,65,26,51};
    int i;
    int nums;
    int num1=-1;
    printf("������������ӵ����֣�");
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

    //����ɾ��   �����±�  ������
    //���±������һ�����ָ���ǰһ����
    //�����ܳ���-1
   /* int a[6]={12,15,48,78,98,56};
    int nums;
    int i;
    int num1=-1,num2;

    printf("����һ������ɾ�������֣�");
    scanf("%d",&nums);
    //�����±�
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
        printf("û�ҵ���");
    }
    else if(i!=5)
    {
        for(i=0;i<5;i++)
        {
            a[i]=a[i+1];
        }
    }

    printf("ɾ����Ľ��Ϊ��\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",a[i]);
    }
    //��ȷ������ɾ��
	int a[6]={12,15,48,78,98,56};
    int nums;//���������
    int i;//ѭ������
    int num1=-1;//�Ƿ��������
    printf("����һ������ɾ�������֣�");
    scanf("%d",&nums);
    for(i=0;i<6;i++)//ѭ��
    {   //Ѱ���±�
        if(nums==a[i])
        {//�±���ֵ
        	num1++;
        	break;
        }
    }
    if(num1==-1)
    {
        printf("û�ҵ���");
    }//��������
    else if(i!=5)
    {//��һ��ֵ����ǰһ��
        for(i;i<5;i++)
        {
            a[i]=a[i+1];
        }
    //���鳤�ȼ�һ���ӡ
    printf("ɾ����Ľ��Ϊ��\n");
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
        printf("û�ҵ���");
    }
    else
    {
        for(i==num2;i<nums;i++)
        {
            a[i]=a[i-1];
        }
    }
*/
//��ά����
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
printf("\n��ǰ���ݣ�\n");
for(i=1;i<=n;i++){
printf("��%d��:a=%d,b=%d\n",i,c[i].a,c[i].b);
}
printf("\n\n");
}//���
void setnum(){
int i;
printf("����n,��ʾ����n������:\n");
scanf("%d",&n);
for(i=1;i<=n;i++){
printf("�����%d�����ݵ�����ֵa��b,�ÿո����:\n",i);
scanf("%d%d",&c[i].a,&c[i].b);
}
}//��������
void remove(){
int i,j;
printf("����i,��ʾҪɾ����i����:\n");
scanf("%d",&i);
for(j=i;j<=n-1;j++){
c[j]=c[j+1];
}//ѭ�����ǣ��ú�һ������ǰһ��������j���ֵȡn-1
n--;//�ṹ���е�Ԫ�ؼ���1��
}//ɾ������
void chang(){
int i,aa,bb;
printf("����i,a,b,��ʾҪ����i�������޸ĳ�a��b:\n");
scanf("%d%d%d",&i,&aa,&bb);
c[i].a=aa;
c[i].b=bb;//ֱ�Ӹ�ֵ�޸�
}//�޸�����
main(){
int m;
while(1){
printf("����:1-�������ݣ�2-�޸����ݣ�3-ɾ������\n 4-������ݣ�0-�˳�\n");
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
        printf("�������%d��ͬѧ�ĳɼ�Ϊ:",i+1);
        scanf("%d",&j);
        k=k+j;
    }
    m=k/10;
    printf("ƽ����Ϊ%d",m);
}
int m,n,k,i,s;//ֵ��С�� 7
int ms,ns,ks;
void qiuhe();
void qiuhe()
{
    scanf("%d",&m);
    //��m����n����k��
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
    //�����Զ��庯������ʽ���ʵ����
    //10 ��ѧ�� 1 �ſγ̳ɼ���ƽ���֡�

//pingjunfen();

//�����Զ��庯������ʽ���ʵ�֣�
//�� s = m! + n! + k!��m��n��k �Ӽ�������(ֵ��С
//�� 7)��

qiuhe();
*/





























    return 0;
}
