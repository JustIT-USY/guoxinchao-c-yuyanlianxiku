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
    /*printf("#Ԥ����\n");
    printf("include ����\n");
    printf("standard ��׼\n");
    printf("input ����\n");
    printf("output ���\n");
    printf("head ͷ��\n");
    printf("void �յ�\n");
    printf("main ��Ҫ��\n");*/

   /*//#include <stdio.h>
//#include <stdlib.h>

//int main()
//{
  //  printf("Hello world!\n");
    /*printf("#Ԥ����\n");
    printf("include ����\n");
    printf("standard ��׼\n");
    printf("input ����\n");
    printf("output ���\n");
    printf("head ͷ��\n");
    printf("void �յ�\n");
    printf("main ��Ҫ��\n");*/

   /* int x,y,z,t;
    printf("\n ����������������");
    scanf("%d%d%d",&x,&y,&z);
    printf("\n�������ֱ��ǣ�%d%d%d",x,y,z);
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

    printf("\n�Ӵ�С���У�%d%d%d\n",x,y,z);*/



   /* int number;
    int sum=0;
    printf("\n������һ�����֣� ");
    scanf("%d",&number);
    if(number>0)
    {
        while(number>0)
        {
            sum = sum + number;
            number = number - 1;
        }
        printf("\n �� = %d\n",sum);
    }
    else
    {
        printf("\n %d��Ч��\n");
    }
*/

   /* int number;
    int sum = 0;
    printf("\n ����һ�����֣�");
    scanf("%d",&number);
    if(number>0)
    {
        while(number>0) //�ж�����
        {
        sum = sum + number;     //����˼·
        number = number - 1;
        }
        printf("\n ��Ϊ��%d\n",sum);
    }
    else
    {
        printf("\n %d��Ч��\n",number);
    }
*/
//�༭һ�����û�����һ������  �����������͵�һ��
   /* int sum = 0;
    int number;
    printf("\n����һ�����֣�");
    scanf("\n%d",&number);
    if(number>0)
    {
        while(number>0)
        {
        sum = sum + number;
        number = number - 2;
        }
        printf("\n������ĺ�Ϊ%d ",sum);
    }
    else
    {
        printf("\n%d��Ч");
    }*/
/*int a,b,c;
printf("\n���������ĵ�һ������");
scanf("%d",&a);
printf("\n���������ĵڶ�������");
scanf("%d",&b);
printf("\n\n�������ǰ������");
printf("\n��һ����Ϊ��%d",a);
printf("\n�ڶ�����Ϊ��%d",b);
    c = a;
    a = b;
    b = c;
    printf("\n\n�������ǰ������");
    printf("\n��һ����Ϊ��%d",a);
    printf("\n�ڶ�����Ϊ��%d",b);*/

   /* #include<stdio.h>
    void main()
    {
    float a;//��������
    float b;//��۽���
    float c;//���ݽ���
    float d;//ʵ�ʹ���
    printf("\n ���������Ļ������ʣ�");
    scanf("%f",&a);
    b = a * 40 / 100;
    c = a * 20 / 100;
    d = b + c +a;
    printf("\n��۽���Ϊ:%7.2f",b);
    printf("\n���ݽ���Ϊ:%7.2f",c);
    printf("\nʵ�ʹ���Ϊ:%7.2f\n",d);

return 0;
    }*/
    //int����
    //short������
    //long������
    //float�����ȸ�����
    //doubie˫���ȸ�����
    //char����ֵ����

 /*   #include<stdio.h>
    void main()
    {
        char a,b;
        printf("\n������һ��Сд��ĸ��");
        scanf("%c",&a);
        b =a - 32;
        printf("\n��Ӧ�Ĵ�д��ĸΪ��%c\n",b);

    }*/
   /* #include<stdio.h>
    void main()
{
    char a,b;
    printf("\n������һ����д��ĸ��");
    scanf("\n%c",&a);
    b = a +32;
    printf("\n��Ӧ��Сл��ĸΪ��%c\n",b);

}*/
/*int main()
//�㳤���ε����
{
    float a=21212.5f;
    float b=41212.0f;
    float c = a * b;
    printf("���������Ϊ%2f\n",c);
    return 0;
}
*/
//����yuan�����
/*#include<stdio.h>
void main()
{
    double a=100;
    double b = 3.14 * a * a;
    printf("Բ�����Ϊ��%lf\n",b);
}*/

/*#include<stdio.h>
void main(){
double chang=12121;
double kuan=7877;
double mianji;
double zhouchang;

mianji = chang * kuan;
zhouchang = 2 * (chang + kuan);
printf("�����ε��ܳ�Ϊ��%2.1f���Ϊ��%2f",zhouchang,mianji);


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
printf("\n������һ���ַ���%c",a);
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
    printf("\n ����������������");
    scanf("%d%d%d",&x,&y,&z);
    printf("\n�������ֱ��ǣ�%d%d%d",x,y,z);
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

    printf("\n�Ӵ�С���У�%d%d%d\n",x,y,z);*/

    return 0;
}

   /*
   #include<stdio.h>
    void main()
    {
   int number;
    int sum=0;
    printf("\n������һ�����֣� ");
    scanf("%d",&number);
    if(number>0)
    {
        while(number>0)
        {
            sum = sum + number;
            number = number - 1;
        }
        printf("\n �� = %d\n",sum);
    }
    else
    {
        printf("\n %d��Ч��\n");
    }    return 0;
}
*/

   /* int number;
    int sum = 0;
    printf("\n ����һ�����֣�");
    scanf("%d",&number);
    if(number>0)
    {
        while(number>0) //�ж�����
        {
        sum = sum + number;     //����˼·
        number = number - 1;
        }
        printf("\n ��Ϊ��%d\n",sum);
    }
    else
    {
        printf("\n %d��Ч��\n",number);
    }    return 0;
}
*/
//�༭һ�����û�����һ������  �����������͵�һ��
   /*
   #include<stdio.h>
    void main()
    {
   int sum = 0;
    int number;
    printf("\n����һ�����֣�");
    scanf("\n%d",&number);
    if(number>0)
    {
        while(number>0)
        {
        sum = sum + number;
        number = number - 2;
        }
        printf("\n������ĺ�Ϊ%d ",sum);
    }
    else
    {
        printf("\n%d��Ч");
    }    return 0;
}*/
/*
#include<stdio.h>
    void main()
    {
int a,b,c;
printf("\n���������ĵ�һ������");
scanf("%d",&a);
printf("\n���������ĵڶ�������");
scanf("%d",&b);
printf("\n\n�������ǰ������");
printf("\n��һ����Ϊ��%d",a);
printf("\n�ڶ�����Ϊ��%d",b);
    c = a;
    a = b;
    b = c;
    printf("\n\n�������ǰ������");
    printf("\n��һ����Ϊ��%d",a);
    printf("\n�ڶ�����Ϊ��%d",b);
    return 0;}*/

   /* #include<stdio.h>
    void main()
    {
    float a;//��������
    float b;//��۽���
    float c;//���ݽ���
    float d;//ʵ�ʹ���
    printf("\n ���������Ļ������ʣ�");
    scanf("%f",&a);
    b = a * 40 / 100;
    c = a * 20 / 100;
    d = b + c +a;
    printf("\n��۽���Ϊ:%7.2f",b);
    printf("\n���ݽ���Ϊ:%7.2f",c);
    printf("\nʵ�ʹ���Ϊ:%7.2f\n",d);

return 0;
    }*/
    //int����
    //short������
    //long������
    //float�����ȸ�����
    //doubie˫���ȸ�����
    //char����ֵ����

 /*   #include<stdio.h>
    void main()
    {
        char a,b;
        printf("\n������һ��Сд��ĸ��");
        scanf("%c",&a);
        b =a - 32;
        printf("\n��Ӧ�Ĵ�д��ĸΪ��%c\n",b);

    }*/
   /* #include<stdio.h>
    void main()
{
    char a,b;
    printf("\n������һ����д��ĸ��");
    scanf("\n%c",&a);
    b = a +32;
    printf("\n��Ӧ��Сл��ĸΪ��%c\n",b);

}*/
/*int main()
//�㳤���ε����
{
    float a=21212.5f;
    float b=41212.0f;
    float c = a * b;
    printf("���������Ϊ%2f\n",c);
    return 0;
}
*/
//����yuan�����
/*#include<stdio.h>
void main()
{
    double a=100;
    double b = 3.14 * a * a;
    printf("Բ�����Ϊ��%lf\n",b);
}*/

/*#include<stdio.h>
void main(){
double chang=12121;
double kuan=7877;
double mianji;
double zhouchang;

mianji = chang * kuan;
zhouchang = 2 * (chang + kuan);
printf("�����ε��ܳ�Ϊ��%2.1f���Ϊ��%2f",zhouchang,mianji);


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
    printf("����");
}
    else if(num1<1000)
    {
        printf("̫С");
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

    printf("Сд%d����д%d",num1,num2);

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
    12����ӡ�����еġ�ˮ�ɻ�������
    ��ν��ˮ�ɻ�������ָһ����λ����
     ���λ���������͵��ڸ�������
     ������ 153��һ��ˮ�ɻ�������Ϊ 153��
     ��Ҫ��ֱ���һ��ѭ��������ѭ��ʵ�֣���
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

#define Max 6 //����������

int main()
{
    int i,search,day,j = 0;
    int count = 4;// ��ǰ��������Ŀ
    int choice;           //�ʵ۵�ѡ�� 1 - 4 ֮��
    char yourname[50];    //�ʵ�����
    char tempname[10];    //�����ʱ����
    char names[Max][8] = {"���¸�","�绨��","�Ǳ���","������"};   //����
    char levelnames[4][10]  = {"��ʶ","����","����","�ʺ�"};
    int level[Max] = {1,1,1,1,-1,-1};//����
    int loves[Max] = {100,100,100,100,-1,-1};//��ʼ�øж�

    //���Ŀ�ʼ��
    printf("���ϼ�ԪXXX��\n");
    Sleep(500);
    printf("��ĳ��֪�����ң��ϻʵۼݱ��ˣ��»ʵ�����λ��\n");
    Sleep(500);

    printf("����������������ţ�");
    scanf("%s",yourname);

    printf("��Ϸ������ܣ�\n");
    Sleep(500);
    printf("��Ϸ����10�죬����10����Ϸ�Զ�����\n");
    Sleep(500);
    printf("�����Դ�4λ���ӣ����¸٣��绨�ã��Ǳ��ܣ�������\n");
    Sleep(500);
    printf("����ȤζһС�£�\n");
    Sleep(500);
    printf("���ӵȼ���Ϊ����ʶ���������������ʺ�\n");
    Sleep(500);
    printf("������λ���Ӻøж�Ĭ��100\n");
    Sleep(500);
    printf("ÿ��ʵۿ�ִ��һ����������ļ�����ӡ����ơ��𷣻��ߵ����ټ�ĳ���������޳�û~~��\n");
    Sleep(500);
    printf("��ͬ��ѡ���ÿ���˵ĺøжȾ��������ı䣬һ���������������Ӻøжȵ���60����Ϸʧ��\n");
    Sleep(500);
    printf("ɶ��������ʤ������.......�һ�û�����ݶ����10���\n");
    Sleep(500);
    printf("���ͣ�\n");
    Sleep(1000);
    printf("\n\n\n����������������꣡\n\n");
    Sleep(1000);
    printf("�����»ʵ�<%s>��ʽ�ǻ�������һ���æµ����������������\n",yourname);



    for(day = 1;day <=10;day++)
    {
        printf("\n��%d�죺\n",day);
        Sleep(500);
        printf("1.��Ҫѡ����\t\t (��ļ������)\n");
        Sleep(500);
        printf("2.��ҹ�����ӣ�\t\t (��������)\n");
        Sleep(500);
        printf("3.�𷣣�\t\t (�����乬)\n");
        Sleep(500);
        printf("4.�����ټ�������\t (��»ᷢ��ʲô)\n");
        Sleep(500);
        printf("\n�����ѡ��");
        scanf("\n\n%d",&choice);
        Sleep(500);

        printf("\n\n***************************************************************\n");

        switch(choice)
        {
        case 1:
            printf("�ʵ���ּѡ����\n");
            Sleep(500);
            if(count < Max)//�����ǰ��������С�����ֵ
                {
                    printf("����´�����");
                    scanf("%s",names[count]);
                    level[count] = 0;
                    loves[count] = 90;
                    count++;
                    for(i=0;i<=count;i++)
                    {
                        loves[i] -= 10;
                    }
                    Sleep(500);
                    printf("�������Ӻøж�-10");

                }
                else if(count ==Max)
                {
                    printf("���£�Ҫע�����尡�����Ѿ�����Ϊ����\n���ʧ�ܣ���ҹ���¡�\n");
                }

            break;

        case 2:
            printf("���˷����ӵ�ʱ���ˣ�\n");
            //�ҵ�Ҫ�����ӵ�����
            printf("�������������Ҫ���ĸ������أ�");
            scanf("%s",tempname);
            //�޸�������ӵ�״̬
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
                    printf("����v587~(�������ĳ����ٶ����ˣ�����������\n���������Ӻøж�-10��");
                    break;
                }
                else if(strcmp(tempname,names[i]) !=0)
                {
                    i++;
                }
                if (i >= count)
                {printf("���£����ĺ�û��������Ӱ������������Ӻøж�-10��\n");
                    for(i=0;i<count;i++)
                    {
                        loves[i] -= 10;
                    }
                }

            }
            break;

        case 3:
            printf("ͻȻ����һ��ð�������������һ̧ͷ��������Ȼ��������ӣ����������ӵ����֣���\n");
            Sleep(500);
            printf("��Ҫɾ�����¸٣������bug�������ø���.........\n");
            Sleep(500);
            printf("���������֣�");
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
                printf("�龪һ�������˴����乬��ֻ�ǻ�������\n");
            }
            else if(i < count)
            {

                for(i = search;i < count - 1;i++)
                {
                    //names[i] = names[i+1];
                    strcpy(names[i],names[i+1]);
                    loves[i] = loves[i+1];
                    level[i] = level[i+1];
                    printf("\n�������Ѿ��������乬���������÷���\n");

                    for(i=0;i<=count;i++)
                    {
                        loves[i] += 20;
                    }
                    printf("���������Ӻøж�+20��");

                }
                count--;
                if(count <=3)
                {printf("�󹬲��ô�������û���ˣ�����Ϸʧ�ܣ�");
                    Sleep(500);Sleep(500);
                    exit(0);
                }
            }
            break;

        case 4:
            printf("��������");
            scanf("%s",tempname);
            for(i = 0;i < count;)
            {
                if(strcmp(tempname,names[i]) ==0)
                {

                    printf("ʲô��û�з�������ʵ�������������ˣ�");

                    break;
                }
                else if(strcmp(tempname,names[i]) !=0)
                {
                    i++;
                }


                if (i >= count)
                {printf("���£����ĺ�û��������Ӱ���\n");

                }

            }
            break;

        default:
            Sleep(500);Sleep(500);
            printf("����Ϸ�ԣ���������˼");
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
                    printf("�����ǣ�ȥˢ�ʵ��ˣ�����Ϸʧ�ܣ�\n");
                    printf("\n***************************************************************\n");
                    Sleep(500);
                    printf("�鿴��ǰ��״̬��\n");
                    Sleep(500);
                    printf("����\t\t����\t\t�øж�\n");

                    for (i = 0;i < count;i++)
                    {
                        printf("%s \t\t %s \t\t %d \n",names[i],levelnames[level[i]],loves[i]);
                        Sleep(500);
                    }
                    printf("\n***************************************************************\n\n\n");

                        printf("���������%d��\n",day);
                        Sleep(500);Sleep(500);Sleep(500);Sleep(500);
                        printf("��������˳�...");
                        getch();
                        exit(0);
                }
            }
            Sleep(500);Sleep(500);
            printf("\n\n��%d�����ô��������ȥ��\n",day);
            Sleep(500);Sleep(500);
            printf("\n***************************************************************\n");
            Sleep(500);
            printf("�鿴��ǰ��״̬��\n");
            Sleep(500);
            printf("����\t\t����\t\t�øж�\n");

            for (i = 0;i < count;i++)
            {
                printf("%s \t\t %s \t\t %d \n",names[i],levelnames[level[i]],loves[i]);
                Sleep(500);
            }
            printf("\n***************************************************************\n\n\n");
    }

    printf("��Ϸ������%s�������ǹ�����û��û��������\n",yourname);
    Sleep(500);Sleep(500);Sleep(500);Sleep(500);
    printf("��������˳�...");
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
    printf("��������Ҫ�ж������֣��������");
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
            printf("%d������\n,temp");
            sum=sum+temp;
            y++;
            j++;
            k=2
        }
        else if(temp!=k)
        {
            if(temp%k==0)
            {
                printf("%d��������\n",temp);
                j++;
            }
            else
                k++;
        }
        if(j==5)
            break;
    }
    avg=sum/y;
    printf("��Ϊ��%d ƽ����Ϊ��%d",sum,avg);



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
    printf("��ʼ���ļ���ɣ��ڼ���ǰ����ϸ�Ķ�����Ҫ��\n");
    printf("Ҫ�󣺸ó���ֻ�������������㣬���㰴����˳����㣬ÿ�����������ֻ��ַ���Ҫ����س�Ŷ��\n");
    printf("************************************************************************************\n");
    printf("��ʼ��\n");
    int num1,num2,num3;
    char f;
    printf("�������һ������ ");
    scanf("%d",&num1);
    for(;;)
    {
        if(f != '='){
        printf("������һ��������ţ�");}
        scanf("%s",&f);
        switch(f)
        {
        case'+':
            {
                printf("�����������");
                scanf("%d",&num2);
                num1 = num1 + num2;
                break;
            }
        case '-':
            {
                printf("�����������");
                scanf("%d",&num2);
                num1 = num1 - num2;
                break;
            }
        case '*':
            {
                printf("�����������");
                scanf("%d",&num2);
                num1 = num1 * num2;
                break;
            }

        case '/':
            {
                printf("�����������");
                scanf("%d",&num2);
                num1=num1 / num2;
                break;
            }
        case'=':
            {
                printf("�����������������Ҹ�������ĵ���Ϊ��");
                printf("%d",num1);
                break;
            }
        default:
                printf("����!");
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
        printf("������Բ�뾶��");
        scanf("%d",&i);
        s=3*i*i;
        printf("Բ���Ϊ%d\n",s);
    }
    void jisuanjuxing();
    int m,n,s;
    void jisuanjuxing()
    {
        printf("���볤��");
        scanf("%d",&n);
          printf("���볤��");
        scanf("%d",&m);
        s=m*n;
        printf("���ε����Ϊ��%d\n",s);
    }
    void jisuanchangfangxing();
    int g,f,d;
    void jisuanchangfangxing()
    {
        printf("�����볤��",g);
        scanf("%d",&g);
        printf("�������",f);
        scanf("%d",&f);
        d=f*g;
        printf("Ϊ������ĳ����ε����Ϊ��%d",d);
    }*/
   /* void chengji();
    int i,cj,pc;
    int num;
    void chengji()
    {
        for(i=0;i<10;i++)
        {
            printf("������%d���ɼ���",i+1);
            scanf("%d",&cj);
            printf("\n");
            num=num+cj;
        }
        pc=num/10;
        printf("10��ͬѧ�ĳɼ�ƽ��ֵΪ��%d",pc);
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
printf("������һ������");
scanf("%d",&k);
for(i=1;i<=7;i++)
{
    k+=i;
}
printf("�ۼӺ�Ϊ��%d",k);


    //ֻ���庯��
    //�Ƿ���Ҫ����ֵ
    //��������ʲô
    //��Ҫ���������������
  //  jiauanyuan();
    //����Բ���
   // jisuanjuxing();
    //�������Զ��庯��
   // jisuanchangfangxing();

/*oushuhe();
printf("1-100ż����Ϊ��%d\t",sun);
int n=sun;
printf("%d",n);*/

/*
     ���ú���
     ��C����ϵͳ�ṩ
     ��Ҫ����ǰ��������ͷ�ļ�
     ֻ���庯��
     ��������
     �����������Դ�����ֵҲ���Բ�������ֵ��
     0��ʾ��    ��0��ʾ��
*/
/*
int i;
    //���õ����ú���
    printf("%d\n",isupper('a'));
    //�鿴��������Ƿ��Ǵ�д��ĸ
    printf("%d\n",islower('a'));
    //�鿴�Ƿ���Сд��ĸ
    printf("%d\n",isalpha(97));
    //����ֵ�Ƿ�����ĸ
    printf("%d\n",isdigit('9'));
    //����ֵ�Ƿ�������
    //�����������������ֻ�����ĸҪ�õ�����
    //������õ����žʹ������ascii��
    printf("%c\n",50);
    //��ӡ50��Ӧ��ascii��
    for(i=0;i<127;i++)
    {
        printf("%c,",i);
    }
    //��ӡ���е�ascii��
    //ת����Сд
    printf("��д��%c,",toupper('a'));

    int i;
    printf("%d\n",isupper('a'));
    printf("%d\n",islower('a'));
    printf("%d\n",islower('A'));
    printf("%d\n",isalpha('2'));
    //��Ϊ����������Ϊ��
    printf("%d\n",isdigit('8'));
    //�ж��Ƿ�Ϊ����
    printf("%d\n",isdigit(96));
    //�����ֱ��������    ��ô��ʾ����ascii��
    //�����ֵ�ᰴ��ascii��ʾ���ַ�����
    printf("50��Ӧ��ascii��Ϊ%c\n",50);
    for(i=0;i<127;i++)
    {
        printf("%c\t",i);
    }
    printf("\n");
    printf("*****************************************************************\n");
    printf("%c\n",toupper('a'));//ת����д*/
    /*
    int *nums;
    nums=(int*)malloc(20);
    //nums=(int*)malloc(sizeof(int)*5);!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    //��ָ�����20�ֽ��ڴ�
    //Ϊָ��������ڴ��ָ���������飡������
    //�ȼ���int nums[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("������%d��Ԫ��",i+1);
        scanf("%d",nums+i);
    }
    printf("����Ԫ��Ϊ��\n");
    for(i=0;i<5;i++)
    {
        printf("%d\t",*(nums+i));
    }
    free(nums);//�ͷŷ�����ڴ�ռ�
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


    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#define N 5
int main()
{
    /*
    ѭ��¼��5�����֣���������������
    */
    //ð������
    //16,23,34,67,54
    //��������
    //���Һͽ���
  /*  int nums[N]={16,23,34,67,54};
    int i,k,j;
    //���ѭ����������
    for(i=0;i<N-1;i++)
    {
        //�ڲ�ѭ�����ƴ���
        for(j=0;j<N-i-1;j++)
        {
            //�����ǰֵС�ں���ֵ����
            if(nums[j]<nums[j+1])
            {
            k=nums[j];
            nums[j]=nums[j+1];
            nums[j+1]=k;
            }
        }
    }
    printf("�����Ľ��Ϊ��\n");
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
    printf("�������к��Ϊ��\n");
    for(i=0;i<N;i++)
    {
        printf("%d\t",nums[i]);
    }*/
    //����ɾ��
   /* int nums[5]={16,23,34,67,54};
    int s=5;//��ǰԪ�ظ���
    int k,j,i,m=5,t=5;
    printf("������һ������ɾ�������֣�");
    scanf("%d",&k);
    for(i=0;i<5;i++)
    {
        if(k=nums[i])
        {
           //��¼�±�
            j=i;
            break;
        }

    }
    printf("��ɾ�����±�Ϊ%d",j);
    if(-1==s)
    {
        printf("û�ҵ���");
    }
    else
    {
        for(m=j;m<j-1;m++)
        {
            nums[m]=nums[m+1];
        }
    }
    printf("ɾ����Ľ��Ϊ��");
    for(t=0;t<4;t++)
    {
        printf("%d\t",nums[t]);
    }*/

   /* int nums[]={16,23,34,67,54};
    int i,k,j=-1;
    printf("����������ɾ�������֣�");
    scanf("%d",&k);
    for(i=0;i<5;i++)
    {
        if(k==nums[i])
        {
           j=i;         //�±�Ϊj
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
    printf("ɾ����Ľ��Ϊ��");
    for(i=0;i<4;i++)
    {
        printf("%d\t",nums[i]);
    }
*/
   /* int nums[]= {16,23,34,67,54};
    int i,k,j=-1;
    printf("����������ɾ�������֣�");
    scanf("%d",&k);
    for(i=0; i<5; i++)
    {
        if(k==nums[i])
        {
            j=i;         //�±�Ϊj
            break;
        }

    }
    if(j!=-1)
    {
        for(i=j; i<5; i++)
        {
            nums[i]=nums[i+1];
        }
    printf("ɾ����Ľ��Ϊ��");
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
        printf("��%d����Ϊ%d\n",i+1,nums[i]);
    }


    for(i = 0;i < 7;i++)
    {
        k += nums[i];
    }
    m = k / 7;
    printf("����ĺ�Ϊ%d�����ƽ��ֵΪ%d\n",k,m);
    //����Ԫ��
    scanf("%d",&num1);
    for(i=0;i<7;i++)
    {


    if(num1==nums[i])
    {
        printf("�ҵ��ˣ�\n");
        break;
    }
    }

    if(i==7){
        printf("û�ҵ�!");
    }*/
  /*  int num=1111;
    int * ptr_num=&num;
    //%pָ��ռλ��
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
printf("num1��ֵΪ%d\tnum1�ĵ�ַΪ%p\n",num1,ptr1);
printf("num2��ֵΪ%d\tnum2�ĵ�ַΪ%p\n",num2,ptr2);
//������1��ֵ��������2
//num1=num2;ǰ�����
*ptr1=*ptr2;
printf("num1��ֵΪ%d\tnum1�ĵ�ַΪ%p\n",num1,ptr1);
printf("num2��ֵΪ%d\tnum2�ĵ�ַΪ%p\n",num2,ptr2);
//ֱ�Ӳ���ָ��
ptr2=ptr1;
printf("num1��ֵΪ%d\tnum1�ĵ�ַΪ%p\n",num1,ptr1);
printf("num2��ֵΪ%d\tnum2�ĵ�ַΪ%p\n",num2,ptr2);
*ptr2=1111;
printf("num1��ֵΪ%d\tnum1�ĵ�ַΪ%p\n",num1,ptr1);
printf("num2��ֵΪ%d\tnum2�ĵ�ַΪ%p\n",num2,ptr2);
//��������ָ��ͬһ���ڴ棬��ֵ�޷��޸ģ������ǿ��ڴ�
ptr1=NULL;*///ָ��Ϊ�գ����õ�ʱ��Ҫ��ָ����
/*
1ָ�����һ������
2������ŵ�ַ
���������
int num=10��
int*ptr_num;
��ֵptr_num=&num;
*ptr_num����ֵ
int*tr_bun2;
ptr_num2=ptr_num;//����ָ��ָ����ͬһ���ڴ�
*ptr_num2=99;
�ȼۣ�num=99��
*/

//������һ�������ռ�
//��������֮�������ռ���׵�ַ
/*double score[5]={12,23,46,657,35};
double * ptr_score;
//printf("�����׵�ַ��%p\t�����չ�Ԫ�ص�ַ��%p",score,&score[0]);
//�����׵�ַ����������Ԫ�ص�ַ
//ptr_score=&score[0];
ptr_score=score;//�ȼ�
//ָ���������
int i;
//��������Ԫ��
for(i=0;i<5;i++)
{
   // printf("%.2lf\n",ptr_score[i]);
    printf("%.2lf\n",*(ptr_score+i));//ָ���������,ָ��λ�ò���
   // printf("%.2lf\n",*ptr_score++);
}

//����ָ��λ��
//ptr_score=score;
*/
/*int score[]={12,23,45,56,67};
int*ptr_score=score;
int i;
for(i=0;i<5;i++)
{
    printf("��%dԪ��\tԪ��ֵΪ%d\t��ַΪ��%p\n",i+1,*ptr_score,ptr_score);
    ptr_score++;
}*/
//ָ��++������������
/*int nums[]={12,23,34,45,56,67,78};
int i;
int*ptr_nums=nums;
for(i=0;i<7;i++)
{
    printf("��%d��Ԫ��\tԪ��Ϊ%d\tԪ�ص�ַΪ��%p\n",i+1,*ptr_nums,ptr_nums);
    ptr_nums++;
}*/
/*int nums[]={12,23,34,45,56,67,78};
int i;
int*ptr_nums=nums;
for(i=0;i<7;i++)
{
    printf("��%d��Ԫ��\tԪ��Ϊ%d\tԪ�ص�ַΪ��%p\n",i+1,*ptr_nums+i,ptr_nums+i);

}*/
    //��������������β����
  /*  int nums[]={12,223,343,1,2,354};
    int temp;//��ʱ����
    int i,j;
    for(i=0;i<3;i++)
    {
        //��i��ֵ���n-i-1��ֵ����
        temp=nums[i];
        nums[i]=nums[i-1];
        nums[6-i-1]=temp;
    }
    for(j=0;j<6;j++)
    {
        printf("%d\t",*(nums+j));
    }//����
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
printf("��ӡ��������׵�ַ��%p\n",ptr_nums);
for(i=0;i<5;i++)
{
   printf("�����%d��Ԫ��Ϊ��%d\t",i+1,nums[i]);
}

for(i=0;i<5;i++)
{
    printf("����ĵ�%d��Ԫ�صĵ�ַΪ��%p\t",i+1,*(nums+i));
}

*��
/*
int nums[5]={12,2323,3434,54454,5656};
int*ptr_nums;
ptr_nums=&nums[0];
int i;
for(i=0;i<5;i++)
{
    printf("����ĵ�%dλ��Ϊ��%d\t",i+1,ptr_nums[i]);
}
//ָ���������
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
//ָ�����ǰ����ָ����*ptr_nums++
*/
//12,23,45,56,67
//23,34,45,56,45
//76,77,88,99,00
//��ά�������ѭ�������У��ڲ�ѭ�������У��У��У�
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
ָ���������С�᣺
&ȡ�����ĵ�ַ
*���ݵ�ַȡֵ-˳������
ָ�벻�ܸ�����
����һά����
nums[i]
ptr_nums=nums[0];
���ʶ�ά����
nums[i][j]
*(*(nums+i)+j)
*/
//������
//��װ�˺ܶ����ó���
/*   ���ú���
     ��C����ϵͳ�ṩ
     ��Ҫ����ǰ��������ͷ�ļ�
     ֻ���庯��
     ��������
     �����������Դ�����ֵҲ���Բ�������ֵ��

*/

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("��ʼ���ļ���ɣ��ڼ���ǰ����ϸ�Ķ�����Ҫ��\n");
    printf("Ҫ�󣺸ó���ֻ�������������㣬���㰴����˳����㣬ÿ�����������ֻ��ַ���Ҫ����س�Ŷ��\n");
    printf("************************************************************************************\n");
    printf("��ʼ��\n");
    int num1,num2,num3;
    char f;
    printf("�������һ������ ");
    scanf("%d",&num1);
    for(;;)
    {
        if(f != '='){
        printf("������һ��������ţ�");}
        scanf("%s",&f);
        switch(f)
        {
        case'+':
            {
                printf("�����������");
                scanf("%d",&num2);
                num1 = num1 + num2;
                break;
            }
        case '-':
            {
                printf("�����������");
                scanf("%d",&num2);
                num1 = num1 - num2;
                break;
            }
        case '*':
            {
                printf("�����������");
                scanf("%d",&num2);
                num1 = num1 * num2;
                break;
            }

        case '/':
            {
                printf("�����������");
                scanf("%d",&num2);
                num1=num1 / num2;
                break;
            }
        case'=':
            {
                printf("�����������������Ҹ�������ĵ���Ϊ��");
                printf("%d",num1);
                break;
            }
        default:
                printf("����!");
                break;

        printf("\n");

        }
    }

    return 0;
}
