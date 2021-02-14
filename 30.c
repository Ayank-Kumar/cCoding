#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void menudriven()
{
        printf("\nENTER YOUR FOLLOWING CHOICE\n");
        printf("1 ==> ADD RECORD\n");
        printf("2 ==> LIST RECORD\n");
        printf("3 ==> INSERT RECORD\n");
        printf("0 ==> EXIT\n");
}
int main()
{
        FILE *fp,*fp1;
        char another = 'y';
        int choice,ch,a;
        int line,count = 1;
        struct emp
        {
                char name[40];
                int age;
                float bs;
        };
        struct emp e;
        char empname[40];
        long int recsize,file,pos;
        fp = fopen("EMP","rb+");
        if(fp == NULL)
        {
                fp = fopen("EMP","wb+");
                if(fp==NULL)
                {
                        puts("CANNOT OPEN FILE");
                        exit(1);
                }
        }
        recsize = sizeof(e);
//        file = sizeof(fp);
        printf("recsize = %d\n",recsize);
//        printf("file = %d\n",file);
        while(1)
        {
                menudriven();
                printf("ENTER  YOUR CHOICE\n");
                scanf("%d",&choice);
                 switch(choice)
        {
                case 1:
                        fseek(fp,0,SEEK_END) ;
                        while(another == 'y')
                        {
                                printf("\n enter name,age and Basic Salary\n");
                                scanf("%s %d %f",e.name,&e.age,&e.bs);
                                fwrite(&e,recsize,1,fp);
                                printf("\n ADD ANOTHER RECORD (Y/N)");
                                while((ch = fgetc(stdin))!= EOF && ch != '\n');
                                scanf("%c",&another);

                        }
                        break;
                case 2:
                        rewind(fp);
                        while(fread(&e,recsize,1,fp)==1)
                        printf("\n %s %d %f",e.name,e.age,e.bs);
                        break;
                case 3:
                        while(another == 'y')
                        {
                    printf("\nEnter the line no. In which it has to be inserted = ");
                      scanf("%d",&line);
                                fp1  = fopen("TEMP1","wb");
                                rewind(fp);
                                while(fread(&e,recsize,1,fp) == 1)
                                {
                                   if(count==line)
                                   {
                                   printf("\n enter name,age and Basic Salary\n");
                                    scanf("%s %d %f",e.name,&e.age,&e.bs);
                                      fwrite(&e,recsize,1,fp1);
                                   }
                                        fseek(fp1,recsize,SEEK_CUR);
                                        printf("fp =  %s %d %f\n",e.name,e.age,e.bs);
                                        fwrite(&e,recsize,1,fp1);
                                        count++;
                                }
                                fclose(fp);
                                fclose(fp1);
                                 remove("EMP");
                                rename("TEMP1","EMP");
                                fp = fopen("EMP","rb+");
                                printf("Add another record(Y/N)");
                                while((ch = fgetc(stdin))!= EOF && ch != '\n');
                                scanf("%c",&another);
                        }
                        break;
                case 0:
                        fclose(fp);
                        exit(0);
                }
        }
}
