#include"stdio.h"
#include"conio.h"
#include"string.h"
#include"stdlib.h"
void look();   /*�����鿴����*/
void save();   /*�������溯��*/
void search_name();   /*�����������鿴����*/
void search_number();  /*������ѧ�Ų鿴����*/
void order();   /*����������*/
void del();    /*����ɾ������*/
int openl();  /*�����򿪺���*/
void welcome();  /*�����ҵĸ�����Ϣ����*/
void type();   /*�������뺯��*/
void see();   /*�����򿪲��鿴�ļ�����*/
int login();
void regist();
void print();
void changepas();
struct student       /*����ѧ����Ϣ�Ľṹ������*/
{
		char num[15];  /*ѧ��*/
		char name[20];  /*����*/
		char sex[4];   /*�Ա�*/
		int english;   /*Ӣ��ɼ�*/
		int math;      /*��ѧ�ɼ�*/
		int chinese;   /*���ĳɼ�*/
		float aver;    /*ƽ���ɼ�*/
		float sum;     /*�ܳɼ�*/
}stu[100];

char name[80] ,pas[80],temp[80];
char textstring[80];
int ok=0;
int n, result;             /*����һ��ȫ�ֱ���*/
void main()        /*���������û��Ĳ�������*/
{  
	system("CLS");
    system("color 1E");     /*����ı���ɫ*/
	print();
    int settle=0;
	
	scanf("%d",&settle);
	fflush(stdin);//�������
    if(settle)
	{
		regist();
		if(login()==1)
		{
			int b,flag=0;           /*�����ֲ�����*/
			while(1)                   /*ѭ�����������Ϣ*/
			{
				printf("\n\t\t\t��ӭ����ѧ���ɼ�����ϵͳ!\n");
				printf("\t\t\t-------------------------------\n");
				printf("\t\t\t1.����ѧ������Ϣ\n\n");   /*����ѧ������Ϣ*/
				printf("\t\t\t2.�鿴¼���ѧ����Ϣ\n\n");   /*�鿴¼���ѧ����Ϣ*/
				printf("\t\t\t3.�������鿴ѧ������Ϣ\n\n");  /*�������鿴ѧ������Ϣ*/
				printf("\t\t\t4.��ѧ�Ų鿴ѧ������Ϣ\n\n");  /*��ѧ�Ų鿴ѧ������Ϣ*/
				printf("\t\t\t5.��ƽ���ɼ�����\n\n");  /*����*/
				printf("\t\t\t6.ɾ��ѧ����Ϣ\n\n");  /*ɾ��ѧ����Ϣ*/
				printf("\t\t\t7.����ѧ����Ϣ\n\n");   /*����*/
				printf("\t\t\t8.���ļ�\n\n");  /*���ļ�*/
				printf("\t\t\t9.�ҵĸ�����Ϣ\n\n");  /*�ҵĸ�����Ϣ*/
				printf("\t\t\t10.�޸�����\n\n");  
				printf("\t\t\t0.�˳�\n\n");  /*�˳�*/
				printf("\t\t\t���������ѡ��:");
				scanf("%d",&b);
				switch(b)
				{
				case 1:type();break; /*���ü���ѧ����Ϣ����*/
				case 2:look();break; /*���ò鿴����*/
				case 3:search_name();break;  /*���������鿴����*/
				case 4:search_number();break;  /*����ѧ�Ų鿴����*/
				case 5:order();break; /*����������*/
				case 6:del();break;/*����ɾ������*/
				case 7:save();break;/*���ñ��溯��*/
				case 8:see();break;/*���ô��ļ�����*/
				case 9:welcome();break;/*�����ҵĸ�����Ϣ����*/
				case 10:changepas();break;/*�����ҵĸ�����Ϣ����*/
				case 0:flag=1;break;/*�˳�SWITCH���*/
				default :printf("����!");
				}
				if(flag) break;   /*���ѡ��0���˳�ѭ��*/
			}
		}
	}
    else
    {
		if(login()==1)
		{
			int b,flag=0;           /*�����ֲ�����*/
			while(1)                   /*ѭ�����������Ϣ*/
			{
				printf("\n\t\t\t��ӭ����ѧ���ɼ�����ϵͳ!\n");
				printf("\t\t\t-------------------------------\n");
				printf("\t\t\t1.����ѧ������Ϣ\n\n");   /*����ѧ������Ϣ*/
				printf("\t\t\t2.�鿴¼���ѧ����Ϣ\n\n");   /*�鿴¼���ѧ����Ϣ*/
				printf("\t\t\t3.�������鿴ѧ������Ϣ\n\n");  /*�������鿴ѧ������Ϣ*/
				printf("\t\t\t4.��ѧ�Ų鿴ѧ������Ϣ\n\n");  /*��ѧ�Ų鿴ѧ������Ϣ*/
				printf("\t\t\t5.��ƽ���ɼ�����\n\n");  /*����*/
				printf("\t\t\t6.ɾ��ѧ����Ϣ\n\n");  /*ɾ��ѧ����Ϣ*/
				printf("\t\t\t7.����ѧ����Ϣ\n\n");   /*����*/
				printf("\t\t\t8.���ļ�\n\n");  /*���ļ�*/
				printf("\t\t\t9.�ҵĸ�����Ϣ\n\n");  /*�ҵĸ�����Ϣ*/
				printf("\t\t\t10.�޸�����\n\n");  
				printf("\t\t\t0.�˳�\n\n");  /*�˳�*/
				printf("\t\t\t���������ѡ��:");
				scanf("%d",&b);
				switch(b)
				{
				case 1:type();break; /*���ü���ѧ����Ϣ����*/
				case 2:look();break; /*���ò鿴����*/
				case 3:search_name();break;  /*���������鿴����*/
				case 4:search_number();break;  /*����ѧ�Ų鿴����*/
				case 5:order();break; /*����������*/
				case 6:del();break;/*����ɾ������*/
				case 7:save();break;/*���ñ��溯��*/
				case 8:see();break;/*���ô��ļ�����*/
				case 9:welcome();break;/*�����ҵĸ�����Ϣ����*/
				case 10:changepas();break;/*�����ҵĸ�����Ϣ����*/
				case 0:flag=1;break;/*�˳�SWITCH���*/
				default :printf("����!");
				}
				if(flag) break;   /*���ѡ��0���˳�ѭ��*/
			}
		}
	}
}

int login(){
    printf("��¼����\n");
    printf("�������˺�");
    scanf("%s",name);
    printf("����������");
    scanf("%s",pas); /*�������ƺ�����*/
    strcat(name,pas);//�ϲ��ַ�
    strcat(name,"\n");//���ӻ����ַ�
	int len = 0;
	
    FILE *fp = fopen("user.txt", "r");
    if(NULL == fp)
    {
        printf("failed to open dos.txt\n");
        return 1;
    }
	
    while(!feof(fp))
    {
        memset(textstring, 0, sizeof(textstring));
        fgets(textstring, sizeof(textstring) - 1, fp); // ������\n
        if(strcmp(name,textstring)==0){//�ж��ַ��Ƿ����
			ok=1;
			break;
        }
    }
	fclose(fp);
    if(ok)
	{
		
		printf("��¼OK");
		return 1;
		//menu();
		
	}
    else{
		printf("��¼ʧ��");
		return 0;}
    
}
void changepas(){
	char newpas[80];
	FILE *fp=fopen("user.txt","wb");
	printf("�޸����룺\n");
    printf("�������û��˺�");
    scanf("%s",name);
    printf("������ԭ����");
    scanf("%s",pas); /*�������ƺ�����*/
	printf("������������");
    scanf("%s",newpas); /*�������ƺ�����*/
	fputs(name,fp);
    fputs(newpas,fp);/*�����ƺ����������ַ�����ʽд���ļ�*/
    fputs("\n",fp);
    
	fclose(fp);
	getch();
}
void print() {
    printf("   _______________________________________\n");
    printf("   |                                      |\n");
    printf("   |                                      |\n");
    printf("   |                ��ѡ��                |\n");
    printf("   |                                      |\n");
    printf("   |                                      |\n");
    printf("   |                                      |\n");
    printf("   |                                      |\n");
    printf("   |         ����ע��������밴 0         |\n");
    printf("   |                                      |\n");
    printf("   |         �������û������밴 1         |\n");
    printf("   |                                      |\n");
    printf("   |                                      |\n");
    printf("   |                                      |\n");
    printf("   |______________________________________|\n");
	printf("������");
}
void regist(){
    FILE *fp=fopen("user.txt","w");/*��дģʽ("w")���ļ�user.txt,���������,���Զ�����*/
    printf("�������˺�");
    gets(name);
    printf("����������");
    gets(pas); /*�������ƺ�����*/
    fputs(name,fp);
    fputs(pas,fp);/*�����ƺ��������ַ�����ʽд���ļ�*/
    fputs("\n",fp);
    fflush(stdin);//�������
    fclose(fp);/*�ر��ļ�*/
}

void welcome() /*�ҵĸ�����Ϣ����*/
{
		system("CLS");
		printf("\n\n\t\t------------������Ϣ------------");  /*����Ļ�����һ����Ϣ*/
		printf("\n\n\n\n\t\t����:###");
		printf("\t\t\tSex:#\n");
		printf("\t\t����:#\n");
		printf("\n\t\t\t--------ѧϰ����--------\n\n\n");
		printf("\t\tСѧ:######\n\n");
		printf("\t\t����:#####\n\n");
		printf("\t\tS����:######\n\n");
		printf("\t\t��ѧ:######\n\n");
		printf("\n\n\t\t����������ػ�ӭ��Ļ!");
		getch();    /*�����������������*/
}
void type()  /*�������ѧ����Ϣ����*/
{	
		system("CLS");
		int i;    /*����ֲ�����*/
		printf("\t\t������������ѧ����Ϣ����:");
		scanf("%d",&n);
		for(i=0;i<n;i++)      /*����ÿ��ѧ������Ϣ*/
		{
			printf("\n\t\t\t----------------\n");
			printf("\t\t\tѧ��:");
			scanf("%s",&stu[i].num);   /*����ѧ��*/
			printf("\t\t\t����:");
			scanf("%s",&stu[i].name);  /*��������*/
			printf("\t\t\t�Ա�:");
			scanf("%s",&stu[i].sex);   /*�����Ա�*/
			printf("\t\t\tӢ��:");
			scanf("%d",&stu[i].english);  /*����Ӣ��ɼ�*/
			printf("\t\t\t��ѧ:");
			scanf("%d",&stu[i].math);   /*������ѧ�ɼ�*/
			printf("\t\t\t����:");
			scanf("%d",&stu[i].chinese);  /*�������ĳɼ�*/
stu[i].aver=((float)stu[i].english+(float)stu[i].math+(float)stu[i].chinese)/3;/*����ƽ���ɼ�*/
stu[i].sum=(float)stu[i].english+(float)stu[i].math+(float)stu[i].chinese;/*�����ܳɼ�*/
			printf("\t\t\tƽ���ɼ�=%4.1f\n",stu[i].aver);  /*���ƽ���ɼ�*/
			printf("\t\t\t�ܳɼ�=%4.1f\n",stu[i].sum);    /*����ܳɼ�*/
		}
		printf("\n\n\t\t\t����������ز˵�!!");
		getch();
		save();
}
void save()  /*���������ļ�����*/
{	
		system("CLS");
FILE *fp;    /*�����ļ���ָ��*/
		int i;
		if((fp=fopen("student.txt","wb"))==NULL)   /*������ļ�*/
		{
			printf("���ܴ��ļ���\n");    
			return;                            /*��ֹ����*/
		}
		for(i=0;i<n;i++)    /*��student�ļ���д����Ϣ*/
			if(fwrite(&stu[i],sizeof(struct student),1,fp)!=1)
				printf("�ļ�д�����\n");
		fclose(fp);      /*�ر��ļ�*/
		printf("\n\n\n\n\t\t\tѧ����Ϣ����ɹ�!\n");
		printf("\n\n\n\n\t\t\t����������ز˵�!!");
		getch();
}
void look()   /*����鿴����*/
{	
		system("CLS");
		int i;
		//n=openl();    /*����openl����*/
		printf("\tѧ��\t����\t�Ա�\tӢ��\t��ѧ\t����\tƽ���ɼ�\t�ܳɼ�\n");
		for(i=0;i<n;i++)    /*������е�ѧ����Ϣ*/
		{
			printf("%10s\t%s\t%2s\t%d\t%d\t%d\t%3.1f\t\t%6.1f\n",stu[i].num,stu[i].name,
			stu[i].sex,stu[i].english,stu[i].math,stu[i].chinese,stu[i].aver,stu[i].sum);
		}
		printf("\n\n\n\t\t\t����������ز˵�");
		getch();
}
void search_name()  /*�������鿴����*/
{	
		system("CLS");
		int i;
		char name[20];  /*�����ַ�����*/
		printf("\t\t\t������ѧ������:\n");
		scanf("%s",name);
		printf("\tѧ��\t����\t�Ա�\tӢ��\t��ѧ\t����\tƽ���ɼ�\t�ܳɼ�\n");
		for(i=0;i<n;i++)
		if(strcmp(stu[i].name,name)==0)    /*�������������ṹ���е��������бȽ�*/
		{
			printf("%10s\t%s\t%2s\t%d\t%d\t%d\t%3.1f\t\t%6.1f\n",stu[i].num,stu[i].name,
				stu[i].sex,stu[i].english,stu[i].math,stu[i].chinese,stu[i].aver,stu[i].sum);
			printf("\n\n\n\t\t\t����������ز˵�");
		}
		getch();
}
void search_number()  /*���尴ѧ�Ų鿴����*/
{	
		system("CLS");
		int i;
		char number[15];    /*�����ַ�����*/
		printf("\t\t\t������ѧ��:\n");
		scanf("%s",number);
		printf("\tѧ��\t����\t�Ա�\tӢ��\t��ѧ\t����\tƽ���ɼ�\t�ܳɼ�\n");
		for(i=0;i<n;i++)
		if(strcmp(stu[i].num,number)==0)    /*�������ѧ����ṹ���е�ѧ�Ž��бȽ�*/
		printf("%10s\t%s\t%2s\t%d\t%d\t%d\t%3.1f\t\t%6.1f\n",stu[i].num,stu[i].name,
			stu[i].sex,stu[i].english,stu[i].math,stu[i].chinese,stu[i].aver,stu[i].sum);
		printf("\n\n\n\t\t\t����������ز˵�");
		getch();
}
void order()  /*����������*/
{
		system("CLS");
		int i,j;
		char a;
		struct student temp;    /*�����ṹ�����*/
		printf("\tѧ��\t����\t�Ա�\tӢ��\t��ѧ\t����\tƽ���ɼ�\t�ܳɼ�\n");
		for(i=0;i<n;i++)  /*�����ݽ�������*/
		{
			for(j=i+1;j<n;j++)
				if(stu[i].sum<stu[j].sum)
			{
				temp=stu[i];
				stu[i]= stu[j];
				stu[j]=temp;
			}
			printf("%10s\t%s\t%2s\t%d\t%d\t%d\t%3.1f\t\t%6.1f\n",stu[i].num,stu[i].name,
				stu[i].sex,stu[i].english,stu[i].math,stu[i].chinese,stu[i].aver,stu[i].sum);
		}
		getch();
		printf("�Ƿ񱣴棿(y or n)");
		getchar();
		scanf("%c",&a);
		if(a=='y')  /*�Ƿ񱣴��������ļ�*/
			save();
		else
			printf("�˳�");
		getch();
}
void del() /*����ɾ��ѧ����Ϣ����*/
{
		int i;
		char a;
		char name[20];
		system("CLS");
		printf("\t\t\t����ѧ������:\n");
		scanf("%s",name);
		system("CLS");
		printf("\tѧ��\t����\t�Ա�\tӢ��\t��ѧ\t����\tƽ���ɼ�\t�ܳɼ�\n");
		for(i=0;i<n;i++)
			if(strcmp(stu[i].name,name)==0)
			{
			printf("%10s\t%s\t%2s\t%d\t%d\t%d\t%3.1f\t\t%6.1f\n",stu[i].num,stu[i].name,
				stu[i].sex,stu[i].english,stu[i].math,stu[i].chinese,stu[i].aver,stu[i].sum);
				getch();
				printf("���ɾ��?(y or n)");
				getchar();
				scanf("%c",&a);
				if(a=='y')  /*�Ƿ�ɾ������Ϣ*/
				{
					for(;i<n;i++)
					stu[i]=stu[i+1];
					n=n-1;
					printf("���Ѿ�ɾ����Ϣ");
				}
				else
					printf("�˳�");
					getch();
			}
			save();
}
int openl()  /*������ļ�����*/
{	
system("CLS");
		int i;
		FILE *fp;
		if((fp=fopen("student.txt","rb"))==NULL)
		{
			printf("Cannot open file.\n");
			exit(0);
		}
		for(i=0;!feof(fp);i++)
			fread(&stu[i],sizeof(struct student),1,fp);
		fclose(fp);
		return(i-1);
}
void see()   /*�򿪲��鿴�ļ�*/
{	
		system("CLS");
		int i;
		n=openl();
		printf("�ļ��򿪳ɹ�!\n");
		printf("��������鿴!\n");
		getch();
		printf("\tѧ��\t����\t�Ա�\tӢ��\t��ѧ\t����\tƽ���ɼ�\t�ܳɼ�\n");
		for(i=0;i<n;i++)    /*������е�ѧ����Ϣ*/
		{
			printf("%10s\t%s\t%2s\t%d\t%d\t%d\t%3.1f\t\t%6.1f\n",stu[i].num,stu[i].name,
				stu[i].sex,stu[i].english,stu[i].math,stu[i].chinese,stu[i].aver,stu[i].sum);

		}
		printf("\n\n\n\t\t\t����������ز˵�");
		getch();
}