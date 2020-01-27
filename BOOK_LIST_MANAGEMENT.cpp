//Sk Ali Arman
//17CSE-046
#include "header.h"
#include "arman.h"
int main ()
{
    int i,j=0,c=0,c1=0,c2=0,t=0,z=100000000,x=1000000000,ii,jj;
    char mpass[30],muser[30],check[10000],check2[10000],bo[100],muser2[30],writer[100];
    char boo[100],book[100],book1[100],a[10000],b[10000],d[100],user[40],check1[100];
    char book2[100];
    char ch1,ch;
    Start_End se;
    se.Start();
    //system("color 2E");
start4:
    //system("color 2F");
    cout<<"\n\tHave You An Account ?\n\n";
    cout<<"\t\tYes ? Press 1\n";
    cout<<"\t\tNo ? Press 2\n\n\t\tPress:";
    ch=getch();
    account le;
    if(ch=='2')
    {
        system("cls");
 start3:
        initialize();
        le.signup();
    }
    else if(ch=='1')
    {
start5:
        system("cls");

start:
       initialize();
       le.signin();
        i=0;
        //  system("color 0F");
            system("cls");
            //  system("color 0A");
            account sl;
            if(sl.signin()){
            checking();
            system("cls");
            logging();
            system("cls");
start2:
            system("color 0B");
            strcpy(book,muser);
            strcat(book,mpass);

            cout<<" Hi "<<muser<<endl;

            cout<<"\n\t\t** MAIN MENU **\n\n";
            cout<<"\t 1.Add Your Book  \n";
            cout<<"\t 2.Add Your Friend's Book \n";
            cout<<"\t 3.Show Your Book List\n";
            cout<<"\t 4.Show Your Friend's Book List \n";
            cout<<"\t 5.Show All user's Book List\n";
            cout<<"\t 6.Search Book\n";
            cout<<"\t 7.Delete Book List \n";
            cout<<"\t 8.Chat With Friend \n";
            cout<<"\t 9.About Developer....\n";
            cout<<"\t k.Control Key\n";
            cout<<"\t 0.EXIT.\n\n";
            cout<<"\n\t Press Any One of them...";
            ch=getch();
            if(ch=='1')
            {

                system("cls");
                // system("color 0A");
                printf("  %s\n\nEnter your book list....\n\n",muser);
                cout<<"Book Name              Writer Name\n\n";
                FILE *fp3;
                FILE *fp;
                fp=fopen("fbooklist.txt","a");
                filename(book);
                fp3=create("a");
                while(gets(a))
                {
                    if(a[0]=='\0')
                        break;
                    fputs(a,fp3);
                    fputs(a,fp);
                    cout<<"\t\t\t";
                    gets(writer);
                    fprintf(fp,"(%s) by ",muser);
                    fprintf(fp3,"(%s) by ",muser);
                    fputs(writer,fp3);
                    fputs(writer,fp);
                    fprintf(fp3,"\n");
                    fprintf(fp,"\n");
                }
                fclose(fp3);
                fclose(fp);
                system("cls");
                cout<<"\n\n\n\n\n\t\t\t!!Added Successfully!!\n";
                z=100000000;
                x=1000000000;
                while(x)
                {
                    while(z)
                    {
                        z--;
                    }
                    x--;
                }
                system("cls");
                goto start2;
            }
            if(ch=='2')
            {
                system("cls");
                // system("color 0A");
                printf("  %s\n\nFriend's book          Friend's Name         Writer Name\n\n",muser);
                FILE *fp;
                FILE *fp3;
                strcpy(book1,book);
                strcat(book1,"f");
                filename(book1);
                fp3=create("a");
                fp=fopen("fbooklist.txt","a");
                while(gets(a))
                {
                    if(a[0]=='\0')
                        break;
                    printf("\t\t\t");
                    gets(d);
                    fputs(a,fp);
                    fprintf(fp,"(%s) by ",d);
                    fputs(a,fp3);
                    fprintf(fp3,"(%s) by ",d);
                    printf("\t\t\t\t\t   ");
                    gets(writer);
                    fputs(writer,fp);
                    fputs(writer,fp3);
                    fprintf(fp,"\n");
                    fprintf(fp3,"\n");

                }
                fclose(fp);
                fclose(fp3);
                system("cls");
                cout<<"\n\n\n\n\n\t\t\t!!Added Successfully!!\n";
                z=100000000;
                x=1000000000;
                while(x)
                {
                    while(z)
                    {
                        z--;
                    }
                    x--;
                }
                system("cls");
                goto start2;
            }
    else if(ch=='3')
            {
                system("cls");
                // system("color 0A");
                FILE *fp3;
                i=1,j=1;

                filename(book);
                fp3=create("r");
                printf("%s\n\n",muser);
                printf("\tYour  Book List :\n\n");
                while(fgets(a,1000,fp3))
                {
                    printf("%d.",i);
                    puts(a);
                    i++;
                }
                fclose(fp3);
                printf("\n\tPress Backspace to Back Previous page :");
                ch1=getch();
                if(ch1==ENTER)
                {
                    system("cls");
                    goto start2;
                }
                else if(ch1==BKSP)
                {
                    system("cls");
                    goto start2;
                }
                else if(ch1=='0')
                {
                    system("cls");
                    cout<<"\n\tDeveloper..\n\n";
                    cout<<"\t\tSK.Arman Hossain\n";
                    cout<<"\t\tDept of Computer Science and Engineering\n";
                    cout<<"\t\tUniversity of Barisal\n";
                    cout<<"\n\n\t\t\t\t!! Thank You !! \n\t\t\t !!!For Visiting My Apps!!!\n\n\n\n";
                    getchar();
                    return 0;
                }
                else
                {
                    system("cls");
                    goto start2;
                }
            }

    else if(ch=='4')
            {
                system("cls");
                // system("color 0A");
                FILE *fp3;
                i=1,j=1;

                strcpy(book1,book);
                strcat(book1,"f");
                filename(book1);
                fp3=create("r");
                cout<<muser<<"\n\n";
                cout<<"\tYour Friend's Books List :\n\n";
                while(fgets(a,1000,fp3))
                {
                    printf("%d.",i);
                    puts(a);
                    i++;
                }
                fclose(fp3);
                cout<<"\n\tPress Backspace to Back Previous page :";
                ch1=getch();
                if(ch1==ENTER)
                {
                    system("cls");
                    goto start2;
                }
                else if(ch1==BKSP)
                {
                    system("cls");
                    goto start2;
                }
                else if(ch1=='0')
                {
                    system("cls");
                    cout<<"\n\tDeveloper..\n\n";
                    cout<<"\t\tSK.Arman Hossain\n";
                    cout<<"\t\tDept of Computer Science and Engineering\n";
                    cout<<"\t\tUniversity of Barisal\n";
                    cout<<"\n\n\t\t\t\t!! Thank You !! \n\t\t\t !!!For Visiting My Apps!!!\n\n\n\n";
                    getch();
                    return 0;
                }
                else
                {
                    system("cls");
                    goto start2;
                }
            }
            else if(ch=='5')
            {
                system("cls");
                // system("color 0A");
                FILE *fp3;
                i=1,j=1;
                fp3=fopen("fbooklist.txt","r");
                printf("%s\n\n",muser);
                cout<<"\tAll Friend's Book List :\n\n";
                while(fgets(a,1000,fp3))
                {
                    printf("%d.",i);
                    puts(a);
                    i++;
                }
                fclose(fp3);
                cout<<"\n\tPress Backspace to Back Previous page :";
                ch1=getch();
                if(ch1==ENTER)
                {
                    system("cls");
                    goto start2;
                }
                else if(ch1==BKSP)
                {
                    system("cls");
                    goto start2;
                }
                else if(ch1=='0')
                {
                    system("cls");
                    cout<<"\n\tDeveloper..\n\n";
                    cout<<"\t\tSK.Arman Hossain\n";
                    cout<<"\t\tDept of Computer Science and Engineering\n";
                    cout<<"\t\tUniversity of Barisal\n";
                    cout<<"\n\n\t\t\t\t!! Thank You !! \n\t\t\t !!!For Visiting My Apps!!!\n\n\n\n";
                    getch();
                    return 0;
                }
                else
                {
                    system("cls");
                    goto start2;
                }
            }
            else if(ch=='6')
            {
                system("cls");
                char sear[1000],che[1000];
                int l,z=1,Chek;;
                cout<<"\nYou can search by Friend's Name/Writer Name/Book Name:\n\n  Enter:";
                gets(che);
                l=strlen(che);
                FILE *fp;
                fp=fopen("fbooklist.txt","r");
                cout<<"\n";
                while(fgets(sear,1000,fp))
                {
                    for(ii=0; sear[ii]!='\0'; ii++)
                    {
                        Chek=0;
                        for(jj=0; che[jj]!='\0'; jj++)
                        {
                            if(che[jj]==sear[jj+ii]||che[jj]==sear[jj+ii]-32||che[jj]==sear[jj+ii]+32)
                            {
                                Chek++;
                                if(Chek==l)
                                {
                                    printf("\t%d.",z);
                                    puts(sear);
                                    // printf("\n");
                                    z++;
                                    break;
                                }
                            }
                        }
                    }
                }
                fclose(fp);
                cout<<"\nPress any key to back main menu..:";
                getch();
                system("cls");
                goto start2;

            }
else if(ch=='7')
            {
                system("cls");
                // system("color 0A");
            start6:
                printf("%s\n\n\t1.Press 1 To Delete Your Book List\n",muser);
                cout<<"\t2.Press 2 To Delete Your Friend's Book List\n";
                cout<<"\n\n\tPress:";
                ch=getch();
                if(ch=='1')
                {
                    system("cls");
          start11:
                    cout<<"\n\tAre you sure ?? \n\tWant to delete list ?";
                    cout<<"\n\n\tYes ? press 1";
                    cout<<"\n\n\tNo ? press 2";
                    cout<<"\n\n\tPress:";
                    ch=getch();
                    if(ch=='1')
                    {
                        FILE *fp3;
                        filename(book);
                        fp3=create("w");
                        fprintf(fp3," ");
                        fclose(fp3);
                    }
                    else if(ch=='2')
                    {
                        system("cls");
                        goto start6;
                    }
                    else if(ch==BKSP)
                    {
                        system("cls");
                        goto start6;
                    }
                    else if(ch=='0')
                    {
                        return 0;
                    }

                    else
                    {
                        system("cls");
                        cout<<"   Invalid Digit!!\n\n";
                        goto start11;
                    }
                }
                else if(ch=='2')
                {
                    system("cls");
start71:
                    cout<<"\n\tAre you sure ?? \n\tWant to delete list ?";
                    cout<<"\n\n\tYes ? press 1";
                    cout<<"\n\n\tNo ? press 2";
                    cout<<"\n\n\tPress:";
                    ch=getch();
                    if(ch=='1')
                    {
                        strcpy(bo,book);
                        strcat(bo,"f");
                        FILE *fp3;
                        filename(bo);
                        fp3=create("w");
                        fprintf(fp3," ");
                        fclose(fp3);
                    }
                    else if(ch=='2')
                    {
                        system("cls");
                        goto start6;
                    }
                    else if(ch==BKSP)
                    {
                        system("cls");
                        goto start6;
                    }
                    else if(ch=='0')
                    {
                        return 0;
                    }

                    else
                    {
                        system("cls");
                        cout<<"   Invalid Digit!!\n\n";
                        goto start71;
                    }
                }
                else if(ch==BKSP)
                {
                    system("cls");
                    goto start2;
                }
                else if(ch=='0')
                {
                    system("cls");
                    cout<<"\n\tDeveloper..\n\n";
                    cout<<"\t\tSK.Arman Hossain\n";
                    cout<<"\t\tDept of Computer Science and Engineering\n";
                    cout<<"\t\tUniversity of Barisal\n";
                    cout<<"\n\n\t\t\t\t!! Thank You !! \n\t\t\t !!!For Visiting My Apps!!!\n\n\n\n";
                    return 0;
                }
                else
                {
                    system("cls");
                    cout<<"\n\t\tInvalid digit\n";
                    goto start6;
                }
                system("cls");
                z=2,i=10000000;
                while(z--)
                {
                    system("color 0A");

                    cout<<"\n\tDeleting";
                    for(i=0; i<100000000; i++)
                    {

                    }
                    printf(" . ");
                    i=100000000;

                    while(i--)
                    {
                        if(i==1)
                            printf(" . ");
                    }
                    i=100000000;

                    while(i--)
                    {
                        if(i==1)
                            printf(" . ");
                    }
                    i=100000000;
                    printf(" . ");
                    while(i--)
                    {

                    }
                    i=100000000;
                    printf(" . ");
                    while(i--)
                    {

                    }
                    i=100000000;
                    system("cls");
                }
                system("cls");
                cout<<"\n\n\n\n\n\t\t\t!!Deleted Successfully!!\n";
                z=100000000;
                x=1000000000;
                while(x)
                {
                    while(z)
                    {
                        z--;
                    }
                    x--;
                }
                system("cls");
                goto start2;
            }

else if(ch=='8'){
        cout<<"\t"<<muser<<"\n\n\t1.For See Message:"<<endl;
        cout<<"\n\n\t1.For Send Message:"<<endl;
        cout<<"Press :";
        ch=getch();
        if(ch=='1'){

        }
        else if(ch=='2'){

        }
        else if(ch==BKSP){

        }
        else if(ch==ENTER){

        }
        else if(ch=='0'){

        }
        else {

        }



}



else if(ch=='9')
        {
            system("cls");
            start1a:
                cout<<"\n\tDeveloper..\n\n";
                cout<<"\t\tSK.Arman Hossain\n";
                cout<<"\t\tDept of Computer Science and Engineering\n";
                cout<<"\t\tUniversity of Barisal\n";
                cout<<"\n\t Press Backspace for Back_";
                ch1=getch();
                if(ch1==ENTER)
                {
                    system("cls");
                    goto start2;
                }
                else if(ch1==BKSP)
                {
                    system("cls");
                    goto start2;
                }
                else if(ch1=='0')
                {
                    return 0;
                }
                else{
                        system("cls");
                    cout<<"\n\t\tWrong keyword\n"<<endl;
                    goto start1a;
                }










        }
        else if(ch=='k')
        {
start10:
            system("cls");
            cout<<"\n\tUse 0 For Exit\n";
            cout<<"\tUse Backspace For Back \n";
            cout<<"\tUse Enter button to End Command(If Necessary)\n";
            cout<<"\tUse Recommanded Key For Command\n";

            cout<<"\n\tPress Backspace to Back Previous page :";
            ch=getch();
            if(ch==BKSP)
            {
                system("cls");
                goto start2;
            }
            else if(ch=='0')
            {

            }
            else
            {
                system("cls");
                goto start10;
            }
        }
        else if(ch==BKSP)
        {
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
            {
                check[i]='\0';
                check2[i]='\0';
                b[i]='\0';
                a[i]='\0';

            }
            system("cls");
            goto start5;
        }
        else
        {
            system("cls");
            cout<<"\t\tYou Entered Invalid Digit !!!\n";
            goto start2;
        }
    }
    else
    {
        system("cls");
        z=5,i=10000000;
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
        for(i=0; i<=100; i++)
        {
            muser[i]='\0';
            muser[i]='\0';
            mpass[i]='\0';
            book[i]='\0';
            check1[i]='\0';
            boo[i]='\0';
            user[i]='\0';
            mfile[i]='\0';
            d[i]='\0';
        }
        for(i=0; i<=10000; i++)
        {
            check[i]='\0';
            check2[i]='\0';
            b[i]='\0';
            a[i]='\0';
        }
        i=0;
        cout<<"cls";
        cout<<"\n\tUsername or Password Is Incorrect..\n";
        cout<<"\tPlease Enter Correct Password or Username.....\n";
        goto start;
    }
}
else if(ch==BKSP||ch=='0')
{
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
    {
        check[i]='\0';
        check2[i]='\0';
        b[i]='\0';
        a[i]='\0';

    }
    system("cls");
    cout<<"\n\n\n\n\n\n\t\t\t\t\t\tThank You";
    cout<<"\n\t\t\t\t\t   For Using My Apps\n\n\n\n\n\n";
    return 0;
}
else
{
    system("cls");
    cout<<"\n\t\t\t\t!!! Warning !!!\n\n";
    cout<<"\t\tYou Entered a Invalid Digit\n";
    cout<<"\t\tPlease Press a Valid Digit(ex:1/2)\n";
    goto start4;
}
    se.End();
    return 0;
}
