#include "header.h"
int i,j=0,c=0,c1=0,c2=0,t=0,z=100000000,x=1000000000,ii,jj;
char mpass[30],muser[30],check[10000],check2[10000],bo[100],muser2[30],writer[100];
char boo[100],book[100],book1[100],a[10000],b[10000],d[100],user[40],check1[100];
char book2[100];
char ch1,ch;
char mfile[100];
void filename(char *name)
{
    strcpy(mfile,name);
    strcat(mfile,".txt");
}
FILE *create(char *mode)
{
    FILE *fp;
    fp=fopen(mfile,mode);
    return fp;
}
class Start_End{
public:
    void Start();
    void End();
};
void Start_End::Start(){
    system("cls");
    system("color 0C");
    cout<<"\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t!!!>>Welcome<<!!!\n";
    cout<<"\n\n\n\t\t\t\t\t\t!! To My Apps !!\n\n\n\t\t\t\t\t\t\t";
    while(x)
    {
        while(z)
        {
            z--;
        }
        x--;
    }
    system("cls");
}
void Start_End::End(){
    system("cls");
    cout<<"\n\tDeveloper..\n\n";
    cout<<"\t\tSK.Arman Hossain\n";
    cout<<"\t\tDept of Computer Science and Engineering\n";
    cout<<"\t\tUniversity of Barisal\n";
    cout<<"\n\n\t\t\t\t!! Thank You !! \n\t\t\t !!!For Visiting My Apps!!!\n\n\n\n";
}
void initialize(){
      for(i=0; i<=100; i++)
        {
            muser[i]='\0';
            muser2[i]='\0';
            mpass[i]='\0';
            book[i]='\0';
            check1[i]='\0';
            boo[i]='\0';
            user[i]='\0';
            mfile[i]='\0';
            d[i]='\0';
        }
        for(i=0; i<=10000; i++)
        {int sl=sub_str.size(),j;
    for(int i=0;str[i]!='\0';i++){
        for( j=0;j<sl;j++){
            if(str[i+j]!=sub_str[j])
                break;
            if(sl==j+1){
                cout<<"match found"<<endl;
               break;
            }
        }
      if(sl==j+1)
            break;
    }
    if(sl!=j+1)
            cout<<"no match found"<<endl;
            check[i]='\0';
            check2[i]='\0';
            b[i]='\0';
            a[i]='\0';
        }
}
class account{
public:
    void signup();
    int signin();
};
void account::signup(){
    cout<<"\n\t\t\tSign Up:\n";
        cout<<"\n  Create Your Username and Password....\n";
        cout<<"\n\tUsername:";
        getch();
        j=0;
        while(1)
        {
            ch=getch();
            if(ch==ENTER)
            {
                muser[j]='\0';
                printf("\n");
                break;
            }
            else if(ch==BKSP)
            {

                if(j>0)
                {
                    printf("\b \b");
                    j--;
                }
//                else if(j==0)
//                {
//                    system("cls");
//                    goto start4;
//                }
            }
            else
            {
                printf("%c",ch);
                muser[j]=ch;
                j++;
            }
        }

        i=0;

        cout<<"\tPassword:";
        while(1)
        {
            ch=getch();
            if(ch==ENTER)
            {
                mpass[i]='\0';
                cout<<"\n";
                break;
            }
            else if(ch==BKSP)
            {

                if(i>0)
                {
                    cout<<"\b \b";
                    i--;
                }
            }
            else if(ch==SPACE)
            {
                cout<<"*";
                mpass[i]=ch;
                i++;
            }
            else
            {
                cout<<"*";
                mpass[i]=ch;
                i++;
            }
        }
        if(i>3&&j>3&&i<=20&&j<=20)
        {

            FILE *fp;
            fp=fopen("alluser.txt","r");
            fgets(check,10000,fp);
            if(fp==NULL)
            {
                c2=1;
            }
            fclose(fp);
            strcpy(muser2,muser);
            c1=strlen(muser);
            if(c1==4)
            {
                muser2[c1]='4';
            }
            else if(c1==5)
            {
                muser2[c1]='5';
            }
            else if(c1==6)
            {
                muser2[c1]='6';
            }
            else if(c1==7)
            {
                muser2[c1]='7';
            }
            else if(c1==8)
            {
                muser2[c1]='8';
            }
            else if(c1==9)
            {
                muser2[c1]='9';
            }
            else if(c1==10)
            {
                muser2[c1]='1';
                muser2[c1+1]='0';

            }
            else if(c1==11)
            {
                muser2[c1]='1';
                muser2[c1+1]='1';
            }
            else if(c1==12)
            {
                muser2[c1]='1';
                muser2[c1+1]='2';
            }
            else if(c1==13)
            {
                muser2[c1]='1';
                muser2[c1+1]='3';
            }
            else if(c1==14)
            {
                muser2[c1]='1';
                muser2[c1+1]='4';
            }
            else if(c1==15)
            {
                muser2[c1]='1';
                muser2[c1+1]='5';
            }
            else if(c1==16)
            {
                muser2[c1]='1';
                muser2[c1+1]='6';
            }
            else if(c1==17)
            {
                muser2[c1]='1';
                muser2[c1+1]='7';
            }
            else if(c1==18)
            {
                muser2[c1]='1';
                muser2[c1+1]='8';
            }
            else if(c1==19)
            {
                muser2[c1]='1';
                muser2[c1+1]='9';
            }
            else if(c1==20)
            {
                muser2[c1]='2';
                muser2[c1+1]='0';
            }
            for(i=0; check[i]!='\0'; i++)
            {
                c=0;
                for(j=0; muser2[j]!='\0'; j++)
                {
                    if(muser2[j]==check[j+i])
                    {
                        c++;
                        if(c==c1)
                        {
                            t=c;
                            break;
                        }
                    }
                    if(c==c1)
                    {
                        break;
                    }
                }
            }
            if(c1!=t||c2==1)
            {
                //system("color 0B");
                strcpy(user,muser);
                strcat(user,mpass);
                int p;
                p=strlen(user);
                FILE *fp9;
                filename(user);
                fp9=create("a");
                fclose(fp9);
                FILE *fp;
                fp=fopen("alluser.txt","a");
                fprintf(fp,"%s",muser2);
                fclose(fp);
                fp=fopen("idpass.txt","a");
                fprintf(fp,"%s%d",user,p);
                fclose(fp);
                strcat(user,"r");
                filename(user);
                fp9=create("a");
                fclose(fp9);
                system("cls");
                //system("color 0B");
                z=3,i=10000000;
                while(z--)
                {
                    cout<<"\n\tCreating";
                    for(i=0; i<100000000; i++)
                    {

                    }
                    cout<<" . ";
                    i=100000000;

                    while(i--)
                    {
                        if(i==1)printf(" . ");
                    }
                    i=100000000;

                    while(i--)
                    {
                        if(i==1)cout<<" . ";
                    }
                    i=100000000;
                    cout<<" . ";
                    while(i--)
                    {
                    }
                    i=100000000;
                    cout<<" . ";
                    while(i--)
                    {
                    }
                    i=100000000;
                    system("cls");
                }
                system("cls");
                //system("color 0A");

                cout<<"\n\n\n\t\t\t\t\t !!!>>Congrats<<!!!\n";
                cout<<"\n\n\n\t\t\t\t!! You are successfully Registered !!\n";
                z=1,i=10000000;
                while(z--)
                {

                    for(i=0; i<100000000; i++)
                    {

                    }

                    i=100000000;

                    while(i--)
                    {

                    }
                    i=100000000;
                    while(i--)
                    {

                    }
                    i=100000000;
                    while(i--)
                    {
                    }
                    i=100000000;
                    while(i--)
                    {
                    }
                    i=100000000;
                    while(i--)
                    {
                    }
                    i=100000000;
                    while(i--)
                    {
                    }
                    i=100000000;

                }
                system("cls");
                z=2,i=10000000;
                while(z--)
                {
                    cout<<"\n\tLogging";
                    for(i=0; i<100000000; i++)
                    {

                    }
                    cout<<" . ";
                    i=100000000;

                    while(i--)
                    {
                        if(i==1)
                            cout<<" . ";
                    }
                    i=100000000;

                    while(i--)
                    {
                        if(i==1)
                            cout<<" . ";
                    }
                    i=100000000;
                    cout<<" . ";
                    while(i--)
                    {
                    }
                    i=100000000;
                    cout<<" . ";
                    while(i--)
                    {
                    }
                    i=100000000;
                    system("cls");
                }
                //goto start2;
               // return 0;
            }
            else
            {
                system("cls");
                z=5,i=10000000;
                while(z--)
                {
                    cout<<"\n\tCreating";
                    for(i=0; i<100000000; i++)
                    {

                    }
                    cout<<" . ";
                    i=100000000;

                    while(i--)
                    {
                        if(i==1)
                            cout<<" . ";
                    }
                    i=100000000;

                    while(i--)
                    {
                        if(i==1)
                            cout<<" . ";
                    }
                    i=100000000;
                    cout<<" . ";
                    while(i--)
                    {
                    }
                    i=100000000;
                    cout<<" . ";
                    while(i--)
                    {
                    }
                    i=100000000;
                    system("cls");
                }

                system("cls");
                cout<<"\tAlready an Account!!!!...\n\n";
                cout<<"\tPlease Try With Another Username..\n\n";
                //goto start3;
            }
        }
        else
        {
            system("cls");
            z=5,i=10000000;
            while(z--)
            {
                cout<<"\n\tCreating";
                for(i=0; i<100000000; i++)
                {

                }
                cout<<" . ";
                i=100000000;

                while(i--)
                {
                    if(i==1)
                        cout<<" . ";
                }
                i=100000000;

                while(i--)
                {
                    if(i==1)
                        cout<<" . ";
                }
                i=100000000;
                cout<<" . ";
                while(i--)
                {
                }
                i=100000000;
                cout<<" . ";
                while(i--)
                {
                }
                i=100000000;
                system("cls");
            }

            system("cls");
            cout<<"\nUser Id And Password Should be  Atleast 4 Character And Not More Than 20 Charecter!!..\n\n";
            //goto start3;
        }
    }
int account::signin(){
    cout<<"\n\t\tLog in:\n";
        cout<<"\n\tUsername:";
        while(1)
        {
            ch=getch();
            if(ch==ENTER)
            {
                muser[i]='\0';
                printf("\n");
                break;
            }
            else if(ch==BKSP)
            {

                if(i>0)
                {
                    cout<<"\b \b";
                    i--;
                }
            }
            else
            {
                printf("%c",ch);
                muser[i]=ch;
                i++;
            }z=2,i=10000000;
            while(z--)
            {

                cout<<"\n\n\n\tLogging";
                for(i=0; i<100000000; i++)
                {

                }
                cout<<" . ";
                i=100000000;

                while(i--)
                {
                    if(i==1)
                        cout<<" . ";
                }
                i=100000000;

                while(i--)
                {
                    if(i==1)
                        cout<<" . ";
                }
                i=100000000;
                cout<<" . ";
                while(i--)
                {

                }
                i=100000000;
                cout<<" . ";
                while(i--)
                {

                }
                i=100000000;
                system("cls");
            }
        }

        i=0;
        cout<<"\tPassword:";
        while(1)
        {
            ch=getch();
            if(ch==ENTER)
            {
                mpass[i]='\0';
                printf("\n");
                break;
            }
            else if(ch==BKSP)
            {

                if(i>0)
                {
                    i--;
                    cout<<"\b \b";
                }
            }
            else if(ch==SPACE)
            {
                cout<<"*";
                mpass[i]=ch;
                i++;
            }
            else
            {
                cout<<"*";
                mpass[i]=ch;
                i++;
            }
        }

        strcpy(check1,muser);
        strcat(check1,mpass);
        strcpy(book,check1);
        int q;
        q=strlen(check1);
        if(q==8)
        {
            check1[q]='8';
        }
        else if(q==9)
        {
            check1[q]='9';
        }
        else if(q==10)
        {
            check1[q]='1';
            check1[q+1]='0';

        }
        else if(q==11)
        {
            check1[q]='1';
            check1[q+1]='1';
        }
        else if(q==12)
        {
            check1[q]='1';
            check1[q+1]='2';
        }
        else if(q==13)
        {
            check1[q]='1';
            check1[q+1]='3';
        }
        else if(q==14)
        {
            check1[q]='1';
            check1[q+1]='4';
        }
        else if(q==15)
        {
            check1[q]='1';
            check1[q+1]='5';
        }
        else if(q==16)
        {
            check1[q]='1';
            check1[q+1]='6';
        }
        else if(q==17)
        {
            check1[q]='1';
            check1[q+1]='7';
        }
        else if(q==18)
        {
            check1[q]='1';
            check1[q+1]='8';
        }
        else if(q==19)
        {
            check1[q]='1';
            check1[q+1]='9';
        }
        else if(q==20)
        {
            check1[q]='2';
            check1[q+1]='0';
        }
        else if(q==21)
        {
            check1[q]='2';
            check1[q+1]='1';
        }
        else if(q==22)
        {
            check1[q]='2';
            check1[q+1]='2';
        }
        else if(q==23)
        {
            check1[q]='2';
            check1[q+1]='3';
        }
        else if(q==24)
        {
            check1[q]='2';
            check1[q+1]='4';
        }
        else if(q==25)
        {
            check1[q]='2';
            check1[q+1]='5';
        }
        else if(q==26)
        {
            check1[q]='2';
            check1[q+1]='6';
        }
        else if(q==27)
        {
            check1[q]='2';
            check1[q+1]='7';
        }
        else if(q==28)
        {
            check1[q]='2';
            check1[q+1]='8';
        }
        else if(q==29)
        {
            check1[q]='2';
            check1[q+1]='9';
        }
        else if(q==30)
        {
            check1[q]='3';
            check1[q+1]='0';
        }
        else if(q==31)
        {
            check1[q]='3';
            check1[q+1]='1';
        }
        else if(q==32)
        {
            check1[q]='3';
            check1[q+1]='2';
        }
        else if(q==33)
        {
            check1[q]='3';
            check1[q+1]='3';
        }
        else if(q==34)
        {
            check1[q]='3';
            check1[q+1]='4';
        }
        else if(q==35)
        {
            check1[q]='3';
            check1[q+1]='5';
        }
        else if(q==36)
        {
            check1[q]='3';
            check1[q+1]='6';
        }
        else if(q==37)
        {
            check1[q]='3';
            check1[q+1]='7';
        }
        else if(q==38)
        {
            check1[q]='3';
            check1[q+1]='8';
        }
        else if(q==39)
        {
            check1[q]='3';
            check1[q+1]='9';
        }
        else if(q==40)
        {
            check1[q]='4';
            check1[q+1]='0';
        }

        c=0,c1=0,c2=0,t=0;
        FILE *fp;
        fp=fopen("idpass.txt","r");
        fgets(check2,10000,fp);
        fclose(fp);
        c1=strlen(check1);
        for(i=0; check2[i]!='\0'; i++)
        {
            c=0;
            for(j=0; check1[j]!='\0'; j++)
            {
                if(check1[j]==check2[j+i])
                {
                    c++;
                    if(c==c1)
                    {
                        t=c;
                        break;
                    }
                }
                if(c==c1)
                {
                    break;
                }
            }
        }

        if(c1==t&&c1>7)
        {
            return 1;
        }
        else
            return 0;
}
void checking(){
     z=2,i=10000000;
            while(z--)
            {

                cout<<"\n\tChecking";
                for(i=0; i<100000000; i++)
                {

                }
                cout<<" . ";
                i=100000000;

                while(i--)
                {
                    if(i==1)
                        cout<<" . ";
                }
                i=100000000;

                while(i--)
                {
                    if(i==1)
                        cout<<" . ";
                }
                i=100000000;
                cout<<" . ";
                while(i--)
                {

                }
                i=100000000;
                cout<<" . ";
                while(i--)
                {

                }
                i=100000000;
                system("cls");
            }
}
void logging(){
    z=2,i=10000000;
            while(z--)
            {

                cout<<"\n\n\n\tLogging";
                for(i=0; i<100000000; i++)
                {

                }
                cout<<" . ";
                i=100000000;

                while(i--)
                {
                    if(i==1)
                        cout<<" . ";
                }
                i=100000000;

                while(i--)
                {
                    if(i==1)
                        cout<<" . ";
                }
                i=100000000;
                cout<<" . ";
                while(i--)
                {

                }
                i=100000000;
                cout<<" . ";
                while(i--)
                {

                }
                i=100000000;
                system("cls");
            }
}
