#include <stdio.h>
#include <stdlib.h>
#define N 7
int main()
{
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
*/
    return 0;
}
