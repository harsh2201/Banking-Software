#include<iostream>
#include<fstream>
#include<string.h>
#include<stdio.h>
#include<conio.h>
#include<sstream>
#include<stdlib.h>
#include<ctime>
using namespace std;
string d;
int num;

void clrscr()
{
    char a;
    a=getchar();
    if(a==10)
    {
        system("CLS");
    }
}
void printline(int w)       //function to print = symbol
{
    while(w--)
    {
        cout<<"=";
    }
}
void showmenu()
{
    printline(211);         //will print the special symbol 168 times
    cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t=::CHARUSAT BANK MENU::="<<endl<<endl<<endl; //will print the title in the middle
    printline(211);         //will print the special symbol 168 times
    cout<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //              ::LOGIN SECTION::             // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl<<endl;
    cout<<"\t\t\t\t\t\tLOGIN AS:: "<<endl<<endl;
    cout<<"\t\t\t\t\t\tPlease Choose From The Below Options:-"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 1. ADMIN"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 2. USER"<<endl;
}
int adminmenu()
{
    system("CLS");
    char a;
    printline(211);         //will print the special symbol 168 times
    cout<<endl<<endl<<endl<<"\t\t\t\t  \t\t\t\t\t\t=::CHARUSAT BANK ADMIN MENU::="<<endl<<endl<<endl; //will print the title in the middle
    printline(211);         //will print the special symbol 168 times
    cout<<"\t\t\t\t\t\t----------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t   -->You have logged in successfully   "<<endl;
    cout<<"\t\t\t\t\t\t----------------------------------------"<<endl<<endl;
    cout<<"\t\t\t\t\t\t\tPlease choose from the below options:-"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 1. VIEW ACCOUNT"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 2. WITHDRAW MONEY"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 3. MODIFY ACCOUNT DETAIL"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 4. PAY CHEQUE"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 5. VIEW BALANCE"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 6. ADD ACCOUNT"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 7. DELETE ACCOUNT"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 8. CREDIT MONEY"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 9. PASSBOOK"<<endl;
    cout<<"\t\t\t\t\t\t\t\t10. LOGIN HISTORY"<<endl;
    cout<<"\t\t\t\t\t\t\t\t11. EXIT"<<endl;
    choice:
    cout<<endl<<endl<<"\t\t\t\t\t\t\t\tEnter Your Choice (1||2||3||4||5||6||7||8||9||10||11:) ";
    int c2;
    cin>>c2;
    if(!(c2>=1 && c2<=11))
    {
        cout<<"\t\t\t\t\t\t *** You Have Entered The Wrong Choice.Please Enter Again ***."<<endl;
        goto choice;
    }
    return c2;
}
int usermenu()
{
    system("CLS");
    char a;
    printline(211);         //will print the special symbol 211 times
    cout<<endl<<endl<<endl<<"\t\t\t\t \t\t \t\t\t\t=::CHARUSAT BANK USER MENU::="<<endl<<endl<<endl; //will print the title in the middle
    printline(211);         //will print the special symbol 211 times
    cout<<"\t\t\t\t\t\t----------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t  -->You have logged in successfully"    <<endl;
    cout<<"\t\t\t\t\t\t----------------------------------------"<<endl<<endl;
    cout<<"\t\t\t\t\t\t\tPlease choose from the below options:-"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 1. VIEW ACCOUNT"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 2. WITHDRAW MONEY"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 3. MODIFY ACCOUNT DETAIL"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 4. PAY CHEQUE"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 5. VIEW BALANCE"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 6. PASSBOOK"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 7. CREDIT MONEY"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 8. LOGIN HISTORY"<<endl;
    cout<<"\t\t\t\t\t\t\t\t 9. EXIT"<<endl;
    choice:
    cout<<endl<<endl<<"\t\t\t\t\t\t\t\tEnter Your Choice (1||2||3||4||5||6||7||8||9:) ";
    int c2;
    cin>>c2;
    if(!(c2>=1 && c2<=9))
    {
        cout<<"\t\t\t\t\t\t *** You Have Entered The Wrong Choice.Please Enter Again ***."<<endl;
        goto choice;
    }
    return c2;

}
int viewloginhistory(string uname)
{
    system("CLS");
    printline(211);         //will print the special symbol 168 times
    cout<<endl<<endl<<endl<<"\t\t\t\t   \t\t\t\t\t\t\t\t=::CHARUSAT BANK ::="<<endl<<endl<<endl; //will print the title in the middle
    printline(211);
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //              LOGIN HISTORY                 // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl<<endl;
    string s;
    std::time_t t=std::time(0);
    tm* now=localtime(&t);
    ifstream fin("D://project/login history.txt", ios :: in);
    cout<<"\t\t\t\t\t\t\t\t\t"<<uname<<endl;
    while(fin)
    {
        fin>>s;
        if(s.compare(uname)==0)
        {
            getline(fin,s);
            cout<<"\t\t\t\t\t\t\t\t\t"<<s<<endl;
        }
    }
    cout<<"\t\t\t\t\t\t\t\t\t Press Any Key TO Continue : ";
            if(getch())
            return adminmenu();
}
void loginhistory(string uname)
{
    std::time_t t=std::time(0);
    tm* now=localtime(&t);
    ofstream fout("D://project/login history.txt", ios :: out | ios :: app);
    fout<<uname<<" ";
    fout<<"\t\t"<<" "<<"Date:"<<now->tm_mday<<"/"<<(now->tm_mon+1)<<"/"<<(now->tm_year+1900)<<" ";
    fout<<"Time:"<<now->tm_hour<<":"<<(now->tm_min)<<":"<<(now->tm_sec)<<endl;

}


int login(string uname,string pw, int c)
{
    int flag=0,c3,c4;
    string a,b;
    cout<<endl;
    if(c==1)
    {
        ifstream fin("d://project/admin.txt");
        while(fin)
        {
            fin>>a;
            fin>>b;
            if(a.compare(uname)==0 && b.compare(pw)==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {

            cout<<endl<<endl<<"\t\t\t\t***You Have Entered The wrong Username Or Password Please Correct It***"<<endl;

        }
        else
        {
            loginhistory(uname);
            return adminmenu();
        }
    }

   else if(c==2)
    {
        int flag1=0;
        ifstream fin("d://project/user.txt");
        while(fin)
        {
            fin>>a;
            fin>>b;
            if(a.compare(uname)==0 && b.compare(pw)==0)
            {
                flag1=1;
                break;
            }

        }
        if(flag1==0)
        {

            cout<<endl<<endl<<"\t\t\t\t***You Have Entered The Wrong Username Or Password Please Correct It***"<<endl;

        }
        else
        {
            loginhistory(uname);
            c4=usermenu();
            return c4;

        }

    }
    else
    {

        cout<<"\t\t\t\t\t\t\t\t**You Have Entered The Wrong Choice** :"<<endl;

    }
}
int view_account_detail(string d)
{
    det:
    system("CLS");
    printline(211);         //will print the special symbol 168 times
    cout<<endl<<endl<<endl<<"\t\t\t\t   \t\t\t\t\t\t\t\t=::CHARUSAT BANK ::="<<endl<<endl<<endl; //will print the title in the middle
    printline(211);
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //          ACCOUNT DETAIL SECTION            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl<<endl;
    int i,j;
    ifstream fin;
    fin.open("d://project/userdetail.txt",ios::in);
    string a,b,c;
    for(i=0;i>=0;i++)
    {
        fin>>a>>b;
        if(d.compare(b)==0)
        {

            cout<<"\t\t\t\t\t\t\t\t"<<a<<" "<<b<<endl;
            for(j=1;j<=4;j++)
            {
                fin>>c>>d;
                cout <<"\t\t\t\t\t\t\t\t"<< c <<" "<< d << endl;
            }
            break;
        }

    }
    cout<<"\t\t\t\t\t\t\t\tPress 'y' To Continue And 'n' To Go To Menu ";
    char ch;
            cin>>ch;
            if(ch=='y' || ch=='Y')
            {
                cout<<endl;
                goto det;
            }
            else
               return usermenu();
}
int view_account_detail()
{
    det:
    system("CLS");
    printline(211);         //will print the special symbol 168 times
    cout<<endl<<endl<<endl<<"\t\t\t\t   \t\t\t\t\t\t\t\t=::CHARUSAT BANK ::="<<endl<<endl<<endl; //will print the title in the middle
    printline(211);
    int i,j;
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //          ACCOUNT DETAIL SECTION            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl<<endl;
    string uname;
    char ch;
    cout << "\t\t\t\t\t\t\t\tEnter Username:- ";
    cin>>uname;
    ifstream fin("d://project/userdetail.txt");
    string a,b,c,d;
    while(fin)
    {
        fin>>a>>b;
        if(uname.compare(b)==0)
        {
            cout<<"\t\t\t\t\t\t\t\t"<<a<<" "<<b<<endl;
            for(j=1;j<=4;j++)
            {
                fin>>c>>d;
                cout <<"\t\t\t\t\t\t\t\t"<< c<<" "<< d << endl;
            }
            break;
        }

    }
    cout<<"\t\t\t\t\t\t\t\tPress 'y' To Continue And 'n' To Go to Menu ";
            cin>>ch;
            if(ch=='y' || ch=='Y')
            {
                cout<<endl;
                goto det;
            }
            else
                return adminmenu();
}
void passwd(char *ar,int max)
{
    char ch;
    int x=0;
    while(1)
    {
        ch=getch();
        if(ch==13)
        {
            ar[x]='\0';
            break;
        }
        if(ch==8 && ch!=0)
        {
            cout<<"\b\b";
            if(x<=max && x>0)
                x--;
        }
        else if(x<max && ch!=8)
        {
            cout<<"*";
            ar[x]=ch;
            x++;
        }
    }
}


int add_account()
{
    add:
    system("CLS");
    printline(211);         //will print the special symbol 168 times
    cout<<endl<<endl<<endl<<"\t\t\t\t   \t\t\t\t\t\t\t\t=::CHARUSAT BANK ::="<<endl<<endl<<endl; //will print the title in the middle
    printline(211);
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //             ADD ACCOUNT SECTION            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl<<endl;
    string a,b,c,d,e,f;
    fstream fin;
    fin.open("d://project/userdetail.txt",ios::in|ios::ate|ios::out);
    ifstream fout("d://project/user.txt");
    cout<<"\t\t\t\t\t\t\t\tEnter Your First Name: ";
    cin>>a;
    cout<<"\t\t\t\t\t\t\t\tEnter Your Last Name: ";
    cin>>b;
    usname:
    cout<<"\t\t\t\t\t\t\t\tEnter Username : ";
    cin>>d;
    while(fout)
    {
        fout>>f;
        if(d.compare(f)==0)
        {
            cout<<" ****Username Allready Exists. Please Take Another Username.**** "<<endl<<endl;
            goto usname;
        }
    }

    cout<<"\t\t\t\t\t\t\t\tEnter Your Adhaar Card Number: ";
    cin>>c;
    cout<<"\t\t\t\t\t\t\t\tGenerate Your Password : ";
    cin>>e;
    fin.seekp(0,ios::end);
    fin<<"* "<<d<<endl;
    fin<<"ACCOUNT DETAILS:- "<<endl;
    fin<<"name: "<<a<<"_"<<b<<endl;
    fin<<"Adhaar_no:- "<<c<<endl;
    fin<<"Balance:- 100"<<endl;
    fin.close();
    fstream f1;
    f1.open("d://project/user.txt",ios::in|ios::ate|ios::out);
    f1<<d<<endl;
    f1<<e<<endl;
    f1.close();
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t-------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t\t You have Successfully Added New account       "<<endl;
    cout<<"\t\t\t\t\t\t\t\t-------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\tPress 'y' To Continue And 'n' To Go To Menu : ";
            char ch;
            cin>>ch;
            if(ch=='y' || ch=='Y')
            {
                cout<<endl;
                goto add;
            }
            else
                return adminmenu();
}
int readpassbook(string username)
{
    system("CLS");
    printline(211);         //will print the special symbol 168 times
    cout<<endl<<endl<<endl<<"\t\t\t\t   \t\t\t\t\t\t\t\t=::CHARUSAT BANK ::="<<endl<<endl<<endl; //will print the title in the middle
    printline(211);
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                 PASSBOOK                   // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl<<endl;
    string a;
    int j=1;
    std::time_t t=std::time(0);
    tm* now=localtime(&t);
    fstream fin("D://project/entry.txt", ios :: in);
    while(fin)
    {
        fin>>a;
        if(a.compare(username)==0)
        {
            cout<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\tTransaction "<<j<<":"<<endl;
            j++;
            for(int i=0;i<5;i++)
            {
                fin>>a;
                cout<<"\t\t\t\t\t\t\t\t\t\t\t"<<a;
                getline(fin,a);
                cout<<a<<endl;
            }
            cout<<endl;
        }
    }
    cout<<"\t\t\t\t\t\t\t\t\t\t\tCurrent Date is:"<<now->tm_mday<<"/"<<(now->tm_mon+1)<<"/"<<(now->tm_year+1900)<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t\tCurrent time is:"<<now->tm_hour<<":"<<(now->tm_min)<<":"<<(now->tm_sec)<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\tPress any key to continue...";
    getch();
    return adminmenu();
}
void passbook(int c,string username,long int bal,long int mainbal)
{
    std::time_t t=std::time(0);
    tm* now=localtime(&t);
    fstream fout("D://project/entry.txt", ios :: out | ios :: app);
    if(c==1)
    {
        fout<<"Username: "<<username<<endl;
        fout<<"The main Balance is:"<<mainbal<<endl;
        fout<<"Amount debited is:"<<bal<<endl;
        mainbal=mainbal-bal;
        fout<<"The main balance is now:"<<mainbal<<endl;
        fout<<"Date is:"<<now->tm_mday<<"/"<<(now->tm_mon+1)<<"/"<<(now->tm_year+1900)<<endl;
        fout<<"Time is:"<<now->tm_hour<<":"<<(now->tm_min)<<":"<<(now->tm_sec)<<endl;
    }
    else if(c==2)
    {
        fout<<"Username: "<<username<<endl;
        fout<<"The main Balance is:"<<mainbal<<endl;
        fout<<"Amount credited is:"<<bal<<endl;
        mainbal=mainbal+bal;
        fout<<"The main balance is now:"<<mainbal<<endl;
        fout<<"Date is:"<<now->tm_mday<<"/"<<(now->tm_mon+1)<<"/"<<(now->tm_year+1900)<<endl;
        fout<<"Time is:"<<now->tm_hour<<":"<<(now->tm_min)<<":"<<(now->tm_sec)<<endl;
    }
}
int withdraw_money(string uname)
{
    with:
    system("CLS");
    printline(211);         //will print the special symbol 168 times
    cout<<endl<<endl<<endl<<"\t\t\t\t   \t\t\t\t\t\t\t\t=::CHARUSAT BANK ::="<<endl<<endl<<endl; //will print the title in the middle
    printline(211);
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //          MONEY WITHDRAW SECTION            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl<<endl;
    string a,d,c,e,b,f;
    int mainbal,bal;
    ifstream fin("d://project/userdetail.txt");
    ofstream fout("d://project/temp2.txt");
    while(fin)
    {
        fin>>a>>e;
        fout<<a<<" "<<e<<endl;
    }
    fout.close();
    fin.close();
    ifstream f1("d://project/temp2.txt");
    ofstream f2("d://project/userdetail.txt");
    while(f1)
    {
        f1>>c>>b;
        f2<<c<<" "<<b<<endl;
        if(b.compare(uname)==0)
        {
            while(1)
            {
                f1>>d>>f;

                if(d.compare("Balance:-")==0)
                {

                stringstream geek(f);
                geek>>mainbal;
                cout<<"\t\t\t\t\t\t\t\t\tEnter The Amount You Want To Withdraw : ";
                cin>>bal;
                passbook(1,uname,bal,mainbal);
                mainbal=(mainbal-bal);
                cout<<endl<<endl;
                cout<<"\t\t\t\t\t\t\t\t\t\tYour Current Balance Is : "<<mainbal<<endl;
                f2<<"Balance:-"<<" "<<mainbal<<endl;
                break;
                }
                f2<<d<<" "<<f<<endl;
            }

        }

    }
    f1.close();
    f2.close();
    cout<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t-------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t    You Have Successfully Withdrawed Money       "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t-------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\tPress 'y' To Continue And 'n' To Go To Menu : ";
            char ch;
            cin>>ch;
            if(ch=='y' || ch=='Y')
            {
                cout<<endl;
                goto with;
            }
            else
            {
                if(num==1)
                return adminmenu();
                else
                return usermenu();
            }
}
void withdraw_money(string uname, int bal)
{

    string a,d,c,e,b,f;
    int mainbal;
    ifstream fin("d://project/userdetail.txt");
    ofstream fout("d://project/temp2.txt");
    while(fin)
    {
        fin>>a>>e;
        fout<<a<<" "<<e<<endl;
    }
    fout.close();
    fin.close();
    ifstream f1("d://project/temp2.txt");
    ofstream f2("d://project/userdetail.txt");
    while(f1)
    {
        f1>>c>>b;
        f2<<c<<" "<<b<<endl;
        if(b.compare(uname)==0)
        {
            while(1)
            {
                f1>>d>>f;

                if(d.compare("Balance:-")==0)
                {
                stringstream geek(f);
                geek>>mainbal;
                //cout<<"enter the amount you want to withdraw :";
                //cin>>bal;
                mainbal=(mainbal-bal);
                f2<<"Balance:-"<<" "<<mainbal<<endl;
                break;
                }
                f2<<d<<" "<<f<<endl;
            }

        }

    }
    f1.close();
    f2.close();
}
int credit(string uname)
{
    pay:
    system("CLS");
    printline(211);         //will print the special symbol 168 times
    cout<<endl<<endl<<endl<<"\t\t\t\t   \t\t\t\t\t\t\t\t=::CHARUSAT BANK ::="<<endl<<endl<<endl; //will print the title in the middle
    printline(211);
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //          MONEY CREDIT SECTION              // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl<<endl;
    string a,d,c,e,b,f;
    int mainbal,bal;
    cout<<"\t\t\t\t\t\t\t\tEnter The Amount You Want to Credit: ";
    cin>>bal;
    ifstream fin("d://project/userdetail.txt");
    ofstream fout("d://project/temp2.txt");
    while(fin)
    {
        fin>>a>>e;
        fout<<a<<" "<<e<<endl;
    }
    fout.close();
    fin.close();
    ifstream f1("d://project/temp2.txt");
    ofstream f2("d://project/userdetail.txt",ios::out);
    while(f1)
    {
        f1>>c>>b;
        f2<<c<<" "<<b<<endl;
        if(b.compare(uname)==0)
        {
            cout<<endl<<"\t\t\t\t\t\t\t\t "<<b<<endl<<endl;
            while(1)
            {
                f1>>d>>f;

                if(d.compare("Balance:-")==0)
                {
                stringstream geek(f);
                geek>>mainbal;
                passbook(2,uname,bal,mainbal);
                mainbal=(mainbal+bal);
                cout<<"\t\t\t\t\t\t\t\tYour Current Balance is : "<<mainbal<<endl;
                f2<<"Balance:-"<<" "<<mainbal<<endl;
                break;
                }
                f2<<d<<" "<<f<<endl;
            }

            }

    }
    f1.close();
    f2.close();
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t-------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t        Your Transection is Successful           "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t-------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\tPress 'y' to Continue and 'n' to go to Menu : ";
            char ch;
            cin>>ch;
            if(ch=='y' || ch=='Y')
            {
                cout<<endl;
                goto pay;
            }
            else
            {
                if(num==1)
                return adminmenu();
                else
                return usermenu();
            }
}
void credit(string uname, int bal)
{

    string a,d,c,e,b,f;
    int mainbal;
    ifstream fin("d://project/userdetail.txt");
    ofstream fout("d://project/temp2.txt");
    while(fin)
    {
        fin>>a>>e;
        fout<<a<<" "<<e<<endl;
    }
    fout.close();
    fin.close();
    ifstream f1("d://project/temp2.txt");
    ofstream f2("d://project/userdetail.txt",ios::out);
    while(f1)
    {
        f1>>c>>b;
        f2<<c<<" "<<b<<endl;
        if(b.compare(uname)==0)
        {
            while(1)
            {
                f1>>d>>f;

                if(d.compare("Balance:-")==0)
                {
                cout<<"\t\t\t\t\t\t\t\t\t\t"<<b<<endl;
                stringstream geek(f);
                geek>>mainbal;
                //cout<<"enter the amount you want to withdraw :";
                //cin>>bal;
                mainbal=(mainbal+bal);
                f2<<"Balance:-"<<" "<<mainbal<<endl;
                break;
                }
                f2<<d<<" "<<f<<endl;
            }

        }

    }
    f1.close();
    f2.close();

}
int pay_cheque(string unamew)
{
    pay:
    system("CLS");

    printline(211);         //will print the special symbol 168 times
    cout<<endl<<endl<<endl<<"\t\t\t\t   \t\t\t\t\t\t\t\t=::CHARUSAT BANK ::="<<endl<<endl<<endl; //will print the title in the middle
    printline(211);
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //              PAYMENT SECTION               // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl<<endl;
    string unamec;
    int bal;
    cout<<endl<<"\t\t\t\t\t\t\t\tEnter the username of recipient:- ";
    cin>>unamec;
    cout<<endl<<"\t\t\t\t\t\t\t\tEnter the amount to be paid:- ";
    cin>>bal;
    withdraw_money(unamew,bal);
    credit(unamec,bal);
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t-------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t       Your Transection is Successful            "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t-------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\tPress 'y' to Continue and 'n' to go to Menu : ";
            char ch;
            cin>>ch;
            if(ch=='y' || ch=='Y')
            {
                cout<<endl;
                goto pay;
            }
            else
            {
                if(num==1)
                    return adminmenu();
                else
                    return usermenu();
            }
}
int delete_account()
{

    del:
    system("CLS");

    printline(211);         //will print the special symbol 168 times
    cout<<endl<<endl<<endl<<"\t\t\t\t   \t\t\t\t\t\t\t\t=::CHARUSAT BANK ::="<<endl<<endl<<endl; //will print the title in the middle
    printline(211);
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //          DELETE ACCOUNT SECTION            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl<<endl;
    string a,uname,b,c,d;
    char ch;
    ifstream fin;
    fin.open("d://project/userdetail.txt");
    ofstream f2("d://project/temp.txt",ios::out);
    fin.seekg(0,ios::beg);
    //cout<<fin.tellg()<<endl;
    cout<<"\t\t\t\t\t\t\t\tEnter Username You Want To Delete : ";
    cin>>uname;
    while(fin)
    {
        fin>>a>>b;

        if(b.compare(uname)==0)
        {
            break;
        }
        else

        {
            cout<<"\t\t\t\t\t\t\t\t **Username do not exist** "<<endl;
            cout<<"\t\t\t\t\t\t\t\tPress 'y' to Continue And 'n' To go To Menu : ";
            char ch;
            cin>>ch;
            if(ch=='y' || ch=='Y')
            {
                cout<<endl;
                goto del;
            }
            else
                return adminmenu();
        }
    }
     while(fin)
    {
        fin>>a>>b;

        if(b.compare(uname)==0)
        {
            for(int i=0;i<4;i++)
            {
                fin>>c>>d;
            }
            continue;
        }
        f2<<a<<" "<<b<<endl;
    }

    f2.close();
    fin.close();
    ofstream fout("d://project/userdetail.txt");
    ifstream fin1("d://project/temp.txt");
    while(fin1)
    {
        fin1>>a>>b;
        fout<<a<<" "<<b<<endl;
    }
    fout.close();
    fin1.close();
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t-------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t You Have Successfully Deleted This Account      "<<endl;
    cout<<"\t\t\t\t\t\t\t-------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\tPress 'y' To continue And 'n' To Go To Menu : ";
           char ch1;
           cin>>ch1;
            if(ch1=='y' || ch1=='Y')
            {
                cout<<endl;
                goto del;
            }
            else
                return adminmenu();

}
int view_balance(string uname)
{
    bal:
    system("CLS");

    printline(211);         //will print the special symbol 168 times
    cout<<endl<<endl<<endl<<"\t\t\t\t   \t\t\t\t\t\t\t\t=::CHARUSAT BANK ::="<<endl<<endl<<endl; //will print the title in the middle
    printline(211);
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //           VIEW BALANCE SECTION             // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl<<endl;
    ifstream fin("d://project/userdetail.txt");
    string a,b;
    while(1)
    {
        fin>>a;
        if(a.compare(uname)==0)
        {
            while(fin)
            {
                fin>>b;
                if (b.compare("Balance:-")==0)
                {
                    fin>>a;
                    cout <<"\t\t\t\t\t\t\t\t\t\tYour Current Balance Is:- " << a;
                    break;
                }
            }
            break;
        }
    }
    cout<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\tPress 'y' To Continue And 'n' To Go To Menu : ";
           char ch1;
           cin>>ch1;
            if(ch1=='y' || ch1=='Y')
            {
                cout<<endl;
                goto bal;
            }
            else
                return adminmenu();

}
int modify(string uname)
{
    modi:
    system("CLS");

    printline(211);         //will print the special symbol 168 times
    cout<<endl<<endl<<endl<<"\t\t\t\t   \t\t\t\t\t\t\t\t=::CHARUSAT BANK ::="<<endl<<endl<<endl; //will print the title in the middle
    printline(211);
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //           MODIFICATION SECTION             // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //                                            // "<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\t //////////////////////////////////////////////// "<<endl<<endl;
    string a,b,c,mod,d,e;
    int flag=0,ch;
    ifstream fin("d://project/userdetail.txt");
    ofstream fout("d://project/temp2.txt");
    cout << "\t\t\t\t\t\t\t\tEnter what to modify:- " << endl;
    cout << "\t\t\t\t\t\t\t\t1. Name \n";
    cout << "\t\t\t\t\t\t\t\t2. Adhaar no. \n";
    cout << "\t\t\t\t\t\t\t\t3. Balance" << endl<<endl;
    cout << "\t\t\t\t\t\t\t\tEnter Your Choice: ";
    cin>>ch;
    while(fin)
    {
        fin >> a >> b;
        fout << a << " " << b << endl;
        if(uname.compare(b)==0)
            break;
    }
    switch (ch)
    {
        case 1:
            mod="name:";
            break;
        case 2:
            mod="Adhaar_no:-";
            break;
        case 3:
            mod="Balance:-";
            break;
    }
    while(fin)
    {
        fin >> a >> b;
        if(mod.compare(a)==0 && flag==0)
        {
            if(mod=="name:")
            {
                cout<<endl<<"\t\t\t\t\t\t\t\tenter first name: ";
                cin>>c;
                cout<<endl<<"\t\t\t\t\t\t\t\tenter last name: ";
                cin>>d;
                flag=1;
                fout<<a<<" "<<c<<"_"<<d<<endl;
            }
            else
            {
                cout<<endl<<"\t\t\t\t\t\t\t\tEnter new "<<mod<<" ";
                cin>>e;
                fout << a << " " << e << endl;
                flag=1;
             }
             continue;
        }
        fout << a <<" " << b <<endl;
    }
    fin.close();
    fout.close();
    ifstream ft("d://project/temp2.txt");
    ofstream fu("d://project/userdetail.txt");
    while(ft)
    {
        ft >> a >> b;
        fu<< a << " " << b << endl;
    }
    ft.close();
    fu.close();
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t-------------------------------------------------"<<endl;
    cout<<"\t\t\t\t\t\t\t you have successfully modified the details :)    "<<endl;
    cout<<"\t\t\t\t\t\t\t-------------------------------------------------"<<endl;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\tpress 'y' to continue and 'n' to go to menu : ";
           char ch1;
           cin>>ch1;
            if(ch1=='y' || ch1=='Y')
            {
                cout<<endl;
                goto modi;
            }
            else
            {
                if(num==1)
                return adminmenu();
                else
                return usermenu();
            }

}
void exit()
{
    system("CLS");
    printline(209);
    cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t=::THANK YOU FOR USING OUR SERVICES::="<<endl<<endl<<endl;
    printline(209);
    cout<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t\t\t\t\t\t\t\t///////////////////////////////////////////////////////////////////"<<endl;
    cout<<"\t\t\t\t\t\t\t\t///////////////////////////////////////////////////////////////////"<<endl;
    cout<<"\t\t\t\t\t\t\t\t///                                                             ///"<<endl;
    cout<<"\t\t\t\t\t\t\t\t/// *********************                                       ///"<<endl;
    cout<<"\t\t\t\t\t\t\t\t///     PREPARED BY :)                                          ///"<<endl;
    cout<<"\t\t\t\t\t\t\t\t/// *********************                                       ///"<<endl;
    cout<<"\t\t\t\t\t\t\t\t///                                                             ///"<<endl;
    cout<<"\t\t\t\t\t\t\t\t/// 1.) POOJAN DHARAIYA  (17CE027)                              ///"<<endl;
    cout<<"\t\t\t\t\t\t\t\t/// 2.) KARAN KATHIRIYA  (17CE042)                              ///"<<endl;
    cout<<"\t\t\t\t\t\t\t\t/// 3.) HARSH JOBANPUTRA (17CE039)                              ///"<<endl;
    cout<<"\t\t\t\t\t\t\t\t/// 4.) VIDHYA KOTHADIA  (17CE048)                              ///"<<endl;
    cout<<"\t\t\t\t\t\t\t\t///                                                             ///"<<endl;
    cout<<"\t\t\t\t\t\t\t\t///////////////////////////////////////////////////////////////////"<<endl;
    cout<<"\t\t\t\t\t\t\t\t///////////////////////////////////////////////////////////////////"<<endl;

}
int main()
{
    int c1,c;
    char ps[50];
    system("COLOR f0");
    printline(209);
    cout<<endl<<endl<<endl<<"\t\t\t\t\t\t\t\t\t\t\t=::WELOCOME TO CHARUSAT BANK::="<<endl<<endl<<endl; //will print the title in the middle
    printline(209);
    clrscr();
    showmenu();
    lgin:
    cout<<endl<<"\t\t\t\t\t\t\tEnter your choice (1 or 2) : ";
    cin>>c;
    if(c!=1 && c!=2)
    {
        cout<<"\t\t\t\t\t\t\t**You have entered the wrong choice. Please correct it ** "<<endl;
        goto lgin;
    }
    num=c;
    string uname;
    ab:
    cout<<endl<<"\t\t\t\t\t\t\t\tEnter your username : ";
    cin>>uname;
    cout<<endl;
    cout<<"\t\t\t\t\t\t\t\tEnter the password : ";
    passwd(ps,10);
    cout<<endl;
    c1=login(uname, ps ,c);
    if(c==1)
    {
        loop:
    switch(c1)
        {
        case 1:
            c1=view_account_detail();
            goto loop;
        case 2:
            c1=withdraw_money(uname);
            goto loop;
        case 3:
            c1=modify(uname);
            goto loop;
        case 4:
            c1=pay_cheque(uname);
            goto loop;
        case 5:
            c1=view_balance(uname);
            goto loop;
        case 6:
            c1=add_account();
            goto loop;
        case 7:
            c1=delete_account();
            goto loop;
        case 8:
            c1=credit(uname);
            goto loop;
        case 9:
            c1=readpassbook(uname);
            goto loop;
        case 10:
            c1=viewloginhistory(uname);
            goto loop;
        case 11:
            exit();
            break;
        default:
            goto ab;
        }
    }
    else
    {
        loop2:
        switch(c1)
        {
        case 1:
            c1=view_account_detail(uname);
            goto loop2;
        case 2:
            c1=withdraw_money(uname);
            goto loop2;
        case 3:
            c1=modify(uname);
            goto loop2;
        case 4:
            c1=pay_cheque(uname);
            goto loop2;
        case 5:
            c1=view_balance(uname);
            goto loop2;
        case 6:
            c1=readpassbook(uname);
            goto loop2;
        case 7:
            c1=credit(uname);
            goto loop2;
        case 8:
            c1=viewloginhistory(uname);
            goto loop2;
        case 9:
               exit();
            break;
        default:
            goto ab;
            break;
        }
    }

    return 0;
}
