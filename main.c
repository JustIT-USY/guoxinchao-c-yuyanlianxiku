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
