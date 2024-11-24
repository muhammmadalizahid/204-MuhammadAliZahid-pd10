#include<iostream>
#include<windows.h>
#include<conio.h>
#include<string>
using namespace std;
void printHeader();
void gotoxy(int x, int y);
string userFood();
void greetinguser();
string menu();
void adminheader();
string adminFood();
void desiFood();
void continentalFood();
void chineseFood();
void printdesiFood();
void printchineseFood();
void printcontinentalFood();
string adminusername();
string adminpassword();
string returntopage();
int printwholemenu();
string foodNamesdesi[5];
string foodPricedesi[5];
string foodNamesContinental[5];
string foodPriceContinental[5];
string foodNamesChinese[5];
string foodPriceChinese[5];
int iterationdesi[5];
int iterationcontinental[5];
int iterationchinese[5];
string employeename[8];
string employeerole[8];
string employeesalary[8];
string employeecnic[8];
int employeeiteration[8];
string askitem();
string askdomain();
string askupdatedname();
string askupdatedprice();
int finditemupdate(string,string);
int updateitem(int, string, string, string);
void finditemdel(string, string);
string askdomaindel();
string askitemdel();
void askemployeedeatils();
void printemployeedetails();
string askemployeeupdate();
int findemployeeupdate(string);
void updateemployee(int);
string askemployeedelete();
int findemployeedelete(string);
void deleteemployee(int);
bool checkdomain(string);
bool checkusername(string);
bool checkpassword(string);
void getcharacter();
bool checkselection(string);
bool verifyemployee(string);
void continuepage();
int back=0;
bool verifyupdateitem(string, string);
bool isValidInput(string); 
bool isValidInputnumber(string input); 
bool verifyvaliditem(string);
bool validinputprice(string);
void loginheader();
string usermenu();
string userorder[15];
string orderdesi();
string ordercontinental();
string orderchinese();
int main()
{
    while(true)
    { 
    printHeader(); 
    string selecion=menu();
    bool checksel=checkselection(selecion);
    if(selecion=="1" && checksel==true)
    {
        while(true)
        {
            continuepage();    
            greetinguser();
            string choice=usermenu();
            if(choice=="1")
            {
                cout<<endl<<endl<<"DESI FOOD:"<<endl;
                printdesiFood();
                cout<<endl<<"CONTINENTAL FOOD:"<<endl;
                printcontinentalFood();
                cout<<endl<<"CHINESE FOOD:"<<endl;
                printchineseFood();
            }
            else if(choice=="2")
            {
                int orderid=1;
                cout<<"Your Order ID is:"<<orderid;
                cout<<"Press any key to exit...";
                getcharacter();
                // bool verify=true;
                // int count=0;
                // string ask;
                // while(count!=15 && verify==true)
                // {
                // string output=userFood();
                // if(output=="Desi" || output=="desi")
                // {
                //     cout<<endl<<"DESI FOOD:"<<endl;
                //     printdesiFood();
                //     userorder[count]=orderdesi();
                // }
                // else if(output=="Continental" || output== "continental")
                // {
                //     cout<<endl<<"CONTINENTAL FOOD:"<<endl;
                //     printcontinentalFood();
                //     userorder[count]=ordercontinental();
                // }
                // else if(output=="Chinese" || output=="chinese")
                // {
                //     cout<<endl<<"CHINESE FOOD:"<<endl;
                //     printchineseFood();
                //     userorder[count]=orderchinese();
                // }
                // else
                // {
                //     cout<<"Invalid Input...";
                //     count--;
                // }
                // if(count<=14)
                // {
                //     cout<<"Would you like to order more items? (Yes or NO): ";
                //     cin>>ask;
                //     if(ask=="No" || ask=="no")
                //     {
                //         cout<<"Press any key to exit...";
                //         getcharacter();
                //         verify=false;
                //     }
                // }    
                // count++;
                // }
            }
            else if(choice=="3")
            {
                break;
            }
            else if(choice=="4")
            {
                system("cls");
                return 0;
            }
        }
        
    }
    else if(selecion=="3" && checksel==true)
    {
        system("cls");
        return 0;
    }    
    else if(selecion=="2" && checksel==true)
    {
        continuepage();    
        loginheader();
        cout<<endl<<endl;;
        string outputadmin=adminusername();
        bool checkadmin=checkusername(outputadmin);
        if(checkadmin==true)
        {
            string outputpassword=adminpassword();
            bool checkpass=checkpassword(outputpassword);
            if(checkpass==true)
            {
                while(true)
                {
                while(true)
                {
                adminheader();
                cout<<endl<<endl<<endl;
                    string decesion=returntopage();
                    if(decesion=="1")
                    {
                        system("cls");
                        cout<<"ENTER TODAY'S MENU: "<<endl<<endl;
                        cout<<"Add items for Desi Foods Menu: "<<endl;
                        desiFood();
                        cout<<endl;
                        cout<<"Add items for Continental Foods Menu: "<<endl;
                        continentalFood();
                        cout<<endl;
                        cout<<"Add items for Chinese Foods Menu: "<<endl;
                        chineseFood();
                        cout<<endl;
                        printwholemenu();
                    }
                    else if(decesion=="2")
                    {
                        system("cls");
                        cout<<"DESI FOOD:"<<endl;
                        printdesiFood();
                        cout<<endl<<"CONTINENTAL FOOD:"<<endl;
                        printcontinentalFood();
                        cout<<endl<<"CHINESE FOOD:"<<endl;
                        printchineseFood();
                        cout<<"Press any key to exit the Menu page...";
                        getcharacter();
                    }
                    else if(decesion=="3")
                    {
                        string domain=askdomain();
                        bool check=checkdomain(domain);
                        if(check==true)
                        {
                            string item=askitem();   
                            bool verify=verifyupdateitem(domain,item);
                            if(verify==true)
                            {
                            int index=finditemupdate(domain, item);
                            string updatedItemname=askupdatedname();
                            bool check9=verifyvaliditem(updatedItemname);
                            if(check9==true)
                            {
                                string updatedItemprice=askupdatedprice();
                                bool check10=validinputprice(updatedItemprice);
                                if(check10==true)
                                {
                                    updateitem(index,domain,updatedItemname,updatedItemprice);
                                }
                                else if(check10==false)
                                {
                                    cout<<"Invalid Input, Please do not enter alphabets or special characters..."<<endl;
                                    cout<<endl<<"Press any key to try again..."<<endl;
                                    getcharacter();
                                
                                }
                            }
                            else if(check9==false)
                            {
                                cout<<"Invalid Input, Please do not enter numbers or special characters..."<<endl;
                                cout<<endl<<"Press any key to try again..."<<endl;
                                getcharacter();
                            }
                            }
                            else
                            {
                                cout<<"Invalid Input, item does not exist in the Menu, try again...";
                                cout<<endl<<"Press any key to return...";
                                getcharacter();
                            }
                        }
                        else
                        {
                            cout<<"Invalid Input, domain does not exist. Try Again!"<<endl;
                            cout<<"Press any key to continue.";
                            getcharacter();
                        }
                        
                    }
                    else if(decesion=="4")
                    {
                        string domain=askdomaindel();
                        bool check=checkdomain(domain);
                        if(check==true)
                        {
                            string item=askitemdel();
                            bool verify=verifyupdateitem(domain,item);
                            if(verify==true)
                            {
                               finditemdel(domain, item); 
                               cout<<"The item has been deleted...";
                               cout<<endl<<"Press any key to return...";
                               getcharacter();   
                            }
                            else
                            {
                                cout<<"Invalid Input, item does not exist in the Menu, try again...";
                                cout<<endl<<"Press any key to return...";
                                getcharacter();
                            }   
                        }
                        else
                        {
                            cout<<"Invalid Input, domain does not exist. Try Again!"<<endl;
                            cout<<"Press any key to continue.";
                            char ch=getch();
                        }
                    }
                    else if(decesion=="5")
                    {
                        askemployeedeatils();
                        cout<<endl;
                        printemployeedetails();
                    }
                    else if(decesion=="6")
                    {
                        printemployeedetails();    
                    }
                    else if(decesion=="7")
                    {
                        string name=askemployeeupdate();
                        bool check1=verifyemployee(name);
                        if(check1==true)
                        {
                            int index=findemployeeupdate(name);
                            updateemployee(index);   
                            cout<<endl;
                            printemployeedetails();
                        }
                        else if(check1==false)
                        {
                            cout<<"Invalid Input... Employee not found....";
                            cout<<endl<<"Press any key to return...";
                            getcharacter();
                        }    
                    }
                    else if(decesion=="8")
                    {
                        string name=askemployeedelete();
                        bool check=verifyemployee(name);
                        if(check==true)
                        {
                            int index=findemployeedelete(name);
                            deleteemployee(index);
                            cout<<endl;   
                            printemployeedetails();
                        }
                        else
                        {
                            cout<<"Invalid Input... Employee not found....";
                            cout<<endl<<"Press any key to return...";
                            getcharacter();
                        }    
                    }
                    else if(decesion=="9")
                    {
                        back=1;
                        break;
                    }
                    else if(decesion=="10")
                    {
                        system("cls");
                        return 0;
                    }
                    else
                    {
                        cout<<"Invalid Input...";
                        cout<<endl<<"Press any key to try again...";
                        getcharacter();
                        break;
                    }
                }
                if(back==1)
                {
                    back=0;
                    break;
                }
                }
            }         
        
            else if(checkpass==false)
            {
                cout<<"Wrong Password!";
                cout<<endl<<"Press any key to go back to the main menu.";
                getcharacter();
            }
        }
        else if(checkadmin==false)
        {
            cout<<"Invalid Username!";
            cout<<endl<<"Press any key to go back to the main menu.";
            getcharacter();
        }
    }
    else
    {
        cout<<"Invalid Input...";
        cout<<endl<<"Press any key to try again...";
        getcharacter();
    }

}
}
void printHeader()
{
    system("cls");
    int x=36,y=3;
    gotoxy(x,y++);
    cout<<"         ####### ####### ####### ####### ######## ###### #######  ######## #######";
    gotoxy(x,y++);
    cout<<"         ##      ##   ## ##      ##         ##    ##     ##   ###    ##    ##   ##";
    gotoxy(x,y++);
    cout<<"         ##      ####### ######  #######    ##    ###### ######      ##    #######";
    gotoxy(x,y++);
    cout<<"         ##      ##   ## ##      ##         ##    ##     ##   ##     ##    ##   ##";
    gotoxy(x,y++);
    cout<<"         ####### ##   ## ##      #######    ##    ###### ##    ## ######## ##   ##"; 
    y=y+1;
    gotoxy(x,y++);
    cout<<"##     ## ####### ###     ## ####### ######## ####### ##     ## ####### ###    ## ########";
    gotoxy(x,y++);
    cout<<"## ### ## ##   ## ## ##   ## ##   ## ##       ##      ## ### ## ##      ## ##  ##    ##";
    gotoxy(x,y++);
    cout<<"##  #  ## ####### ##   ## ## ####### ##  #### ####### ##  #  ## ####### ##  ## ##    ##";
    gotoxy(x,y++);
    cout<<"##     ## ##   ## ##     ### ##   ## ##    ## ##      ##     ## ##      ##    ###    ##";
    gotoxy(x,y++);
    cout<<"##     ## ##   ## ##      ## ##   ## ######## ####### ##     ## ####### ##     ##    ##";
    y=y+1;
    gotoxy(x,y++);
    cout<<"                  ######## ##    ## ######## ######## ####### ##     ##";
    gotoxy(x,y++);
    cout<<"                  ##        ##  ##  ##          ##    ##      ## ### ##";
    gotoxy(x,y++);
    cout<<"                  ########    ##    ########    ##    ####### ##  #  ##";
    gotoxy(x,y++);
    cout<<"                        ##    ##          ##    ##    ##      ##     ##";
    gotoxy(x,y++);
    cout<<"                  ########    ##    ########    ##    ####### ##     ##"<<endl<<endl<<endl;
}
string menu()
{   
    string selection;
    cout<<"Press 1 if you are a Customer..."<<endl;
    cout<<"Press 2 if you are an Administrator..."<<endl;
    cout<<"Press 3 if you want to exit the Application..."<<endl;
    cout<<"Your Selection (1, 2 or 3): ";
    cin>>selection;
    return selection;
}
void continuepage()
{    
    cout<<"Press any key to continue to next page: ";
    char ch= getch();
}
void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X=x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
string adminFood()
{
    string food;
    cout<<endl<<endl<<endl<<"What will you like to update? Desi, Chinese or Continental: ";
    cin>>food;
    return food;
}
string userFood()
{
    string food;
    
    
    cout<<endl<<endl<<endl<<"What will you like to have today? Desi, Chinese or Continental: ";
    cin>>food;
    return food;
}    
void desiFood()
{    
        for(int i=0; i<5; i++)
        {
            cout<<"Enter the food item: ";
            cin.ignore();
            getline(cin, foodNamesdesi[i]);
            bool check=isValidInput(foodNamesdesi[i]);
            if(check==true)
            {
                cout<<"Enter food item's price: ";
                cin>>foodPricedesi[i];
                bool check1=isValidInputnumber(foodPricedesi[i]);
                if(check1==true)
                {
                    iterationdesi[i]=i+1;
                }
                else if(check1==false)
                {
                    cout<<"Invalid Input, Please do not enter alphabets or special characters..."<<endl;
                    cout<<endl<<"Press any key to try again..."<<endl;
                    getcharacter();
                    i--;    
                }    
            }
            else if(check==false)
            {
                cout<<"Invalid Input, Please do not enter numbers or special characters..."<<endl;
                cout<<endl<<"Press any key to try again..."<<endl;
                getcharacter();
                i--;
            }
        }
}
void continentalFood()
{    
        for(int i=0; i<5; i++)
        {
            cout<<"Enter the food item: ";
            cin.ignore();
            getline(cin, foodNamesContinental[i]);
            bool check2=isValidInput(foodNamesContinental[i]);
            if(check2==true)
            {
                cout<<"Enter food item's price: ";
                cin>>foodPriceContinental[i];
                bool check3=isValidInputnumber(foodPriceContinental[i]);
                if(check3==true)
                {
                    iterationcontinental[i]=i+1;
                }
                else if(check3==false)
                {
                    cout<<"Invalid Input, Please do not enter alphabets or special characters..."<<endl;
                    cout<<endl<<"Press any key to try again..."<<endl;
                    getcharacter();
                    i--;    
                }    
            }
            else if(check2==false)
            {
                cout<<"Invalid Input, Please do not enter numbers or special characters..."<<endl;
                cout<<endl<<"Press any key to try again..."<<endl;
                getcharacter();
                i--;
            }

        }   
}
void chineseFood()
{    
        for(int i=0; i<5; i++)
        {
            cout<<"Enter the food item: ";
            cin.ignore();
            getline(cin, foodNamesChinese[i]);
            bool check4=isValidInput(foodNamesChinese[i]);
            if(check4==true)
            {
                cout<<"Enter food item's price: ";
                cin>>foodPriceChinese[i];
                bool check5=isValidInputnumber(foodPriceChinese[i]);
                if(check5==true)
                {
                    iterationchinese[i]=i+1;
                }
                else if(check5==false)
                {
                    cout<<"Invalid Input, Please do not enter alphabets or special characters..."<<endl;
                    cout<<endl<<"Press any key to try again..."<<endl;
                    getcharacter();
                    i--;    
                }    
            }
            else if(check4==false)
            {
                cout<<"Invalid Input, Please do not enter numbers or special characters..."<<endl;
                cout<<endl<<"Press any key to try again..."<<endl;
                getcharacter();
                i--;
            }

        }   
}
string adminusername()
{
    cout<<endl;
    string admin;
    cout<<"Enter Admin username: ";
    cin>>admin;
    return admin;
}  
string adminpassword()
{
    string password;
    cout<<endl;
    cout<<"Enter Admin password: ";
    cin>>password;
    return password;
} 
void greetinguser()
{
    system("cls");
    int x=25, y=1;
    gotoxy(x,y++);
    cout<<"H   H EEEEE L     L      OOO     DDDD  EEEEE AAAAA RRRR     CCCC U    U SSSS TTTTT OOO  M   M EEEEE RRRR "<<endl;
    gotoxy(x,y++);
    cout<<"H   H E     L     L     O   O    D   D E     A   A R   R   C     U    U S      T  O   O MM MM E     R   R"<<endl;
    gotoxy(x,y++);
    cout<<"HHHHH EEEEE L     L     O   O    D   D EEEEE AAAAA RRRR    C     U    U  SSS   T  O   O M M M EEEEE RRRR"<<endl;
    gotoxy(x,y++);
    cout<<"H   H E     L     L     O   O    D   D E     A   A R   R   C     U    U     S  T  O   O M   M E     R   R"<<endl;
    gotoxy(x,y++);
    cout<<"H   H EEEEE LLLLL LLLLL  OOO     DDDD  EEEEE A   A R   R    CCCC  UUUU  SSSS   T   OOO  M   M EEEEE R   R"<<endl;
}
void adminheader()
{
    system("cls");
    cout<<"                                               A   DDDD  M   M III N   N    IIIII N   N TTTTT EEEEE RRRR  FFFFF   A    CCCC EEEEE"<<endl;
    cout<<"                                             A   A D   D MM MM  I  NN  N      I   NN  N   T   E     R   R F     A   A C     E    "<<endl;
    cout<<"                                             AAAAA D   D M M M  I  N N N      I   N N N   T   EEEEE RRRR  FFFFF AAAAA C     EEEEE"<<endl;
    cout<<"                                             A   A D   D M   M  I  N  NN      I   N  NN   T   E     R  R  F     A   A C     E    "<<endl;
    cout<<"                                             A   A DDDD  M   M III N   N    IIIII N   N   T   EEEEE R   R F     A   A  CCCC EEEEE"<<endl;
}
void printdesiFood()
{
    for(int i=0;i<5;i++)
    {
      if(iterationdesi[i]==0 || foodNamesdesi[i]=="\0")
      {
        continue;
      }
      cout<<foodNamesdesi[i]<<": Rs "<<foodPricedesi[i]<<endl;   
    }
}
void printcontinentalFood()
{
    for(int i=0;i<5;i++)
    {
      if(iterationcontinental[i]==0 || foodNamesContinental[i]=="\0")
      {
        continue;
      }  
      cout<<foodNamesContinental[i]<<": Rs "<<foodPriceContinental[i]<<endl;   
    }
}
void printchineseFood()
{
    for(int i=0;i<5;i++)
    {
      if(iterationchinese[i]==0 || foodNamesChinese[i]=="\0")
      {
        continue;
      }        
      cout<<foodNamesChinese[i]<<": Rs "<<foodPriceChinese[i]<<endl;   
    }
}
string returntopage()
{
    cout<<"Press 1 if you want to see the enter the whole Menu..."<<endl<<endl;
    cout<<"Press 2 if you want to see the whole Menu..."<<endl<<endl;
    cout<<"Press 3 if you want to update any item from the Menu..."<<endl<<endl;
    cout<<"Press 4 if you want to delete any item..."<<endl<<endl;
    cout<<"Press 5 if you want to enter the employee record..."<<endl<<endl;
    cout<<"Press 6 if you want to see the employee record..."<<endl<<endl;
    cout<<"Press 7 if you want to upadate an employee's record..."<<endl<<endl;
    cout<<"Press 8 if you want to delete an employee's record..."<<endl<<endl;
    cout<<"Press 9 to go Back to the main interface..."<<endl<<endl;
    cout<<"Press 10 to exit the program..."<<endl<<endl;
    string n;
    cout<<"Enter your choice: ";
    cin>>n;
    return n;
}

int printwholemenu()
{
    printdesiFood();
    cout<<endl;
    printcontinentalFood();
    cout<<endl;
    printchineseFood();
    cout<<endl;
    cout<<"Press any key to exit form Menu...";
    char ch= getch();
}
string askdomain()
{
    string domain;
    cout<<"Enter the domain in which you want to change the item (Desi, Continental or Chinese): ";
    cin>>domain;
    return domain;
}
bool checkdomain(string domain)
{
    if(domain=="Desi" || domain=="desi" || domain=="Continental" || domain=="continental" || domain=="Chinese" || domain=="chinese")
    {
        return true;
    }
    else
    {
        return false;
    }
}
string askitem()
{
    string item;
    cout<<"Enter the name of the item you want to change: ";
    cin.ignore();
    getline(cin, item);
    return item;
    
}
bool verifyupdateitem(string domain, string item)
{
    bool verify;
    if(domain=="Desi" || domain=="desi")
    {
    for(int i=0;i<5;i++)
    {
        if(foodNamesdesi[i]==item)
        {
            verify=true;
            break;
        }
    }
    }
    else if(domain=="Continental" || domain== "continental")
    {
    for(int i=0;i<5;i++)
    {
        if(foodNamesContinental[i]==item)
        {
            verify=true;
            break;
        }
    }
    }
    else if(domain=="Chinese" || domain== "chinese")
    {
    for(int i=0;i<5;i++)
    {
        if(foodNamesChinese[i]==item)
        {
            verify=true;
            break;
        }
    }
    }
    else
    {
        verify=false;
    }
    return verify;
}
int finditemupdate(string domain, string item)
{
    int index;
    if(domain=="Desi" || domain== "desi")
    {
    for(int i=0;i<5;i++)
    {
        if(foodNamesdesi[i]==item)
        {
            index=i;
            break;
        }
    }
    }
    else if(domain=="Continental" || domain== "continental")
    {
    for(int i=0;i<5;i++)
    {
        if(foodNamesContinental[i]==item)
        {
            index=i;
            break;
        }
    }
    }
    else if(domain=="Chinese" || domain== "chinese")
    {
    for(int i=0;i<5;i++)
    {
        if(foodNamesChinese[i]==item)
        {
            index=i;
            break;
        }
    }
    }
    return index;   
}
string askupdatedname()
{
    string name;
    cout<<"Enter the item you want to update it with: ";
    getline(cin, name);
    return name;
}
string askupdatedprice()
{
    string price;
    cout<<"Enter the price of the updated item: ";
    cin>>price;
    return price;
}
int updateitem(int index, string domain, string updatedname, string updatedprice)
{
    if(domain=="Desi" || domain== "desi")
    {
        foodNamesdesi[index]=updatedname;
        foodPricedesi[index]=updatedprice;
    }
    else if(domain=="Continental" ||domain== "continental")
    {
        foodNamesContinental[index]=updatedname;
        foodPriceContinental[index]=updatedprice;
    }
    else if(domain=="Chinese" ||domain== "chinese")
    {
        foodNamesChinese[index]=updatedname;
        foodPriceChinese[index]=updatedprice;
    }
}
string askdomaindel()
{
    string domain;
    cout<<"Enter the domain in which you want to delete the item, (Desi, Continental or Chinese): ";
    cin>>domain;
    return domain;
}
string askitemdel()
{
    string item;
    cout<<"Enter the name of the item you want to delete: ";
    cin.ignore();
    getline(cin, item);
    return item;
}
void finditemdel(string domain, string item)
{
    if(domain=="Desi" || domain=="desi")
    {
    for(int i=0;i<5;i++)
    {
        if(foodNamesdesi[i]==item)
        {
            foodNamesdesi[i]="\0";
            foodPricedesi[i]="\0";
            iterationdesi[i]=0;
            break;
        }
    }
    }
    else if(domain=="Continental" || domain== "continental")
    {
    for(int i=0;i<5;i++)
    {
        if(foodNamesContinental[i]==item)
        {
            foodNamesContinental[i]="\0";
            foodPriceContinental[i]="\0";
            iterationcontinental[i]=0;
            break;
        }
    }
    }
    else if(domain=="Chinese" || domain== "chinese")
    {
    for(int i=0;i<5;i++)
    {
        if(foodNamesChinese[i]==item)
        {
            foodNamesChinese[i]="\0";
            foodPriceChinese[i]="\0";
            iterationcontinental[i]=0;
            break;
        }
    }
    }
}
void askemployeedeatils()
{
    for(int i=0;i<8;i++)
    {
        cout<<"Enter employee name: ";
        cin.ignore();
        getline(cin, employeename[i]);
        bool check6=isValidInput(employeename[i]);
        if(check6==true)
        {
            cout<<"Enter employee cnic without dashes: ";
            cin>>employeecnic[i];
            bool check7=isValidInputnumber(employeecnic[i]);
            if(check7==true)
            {
                cout<<"Enter employee role: ";
                cin.ignore();
                getline(cin, employeerole[i]);
                bool check8=isValidInput(employeerole[i]);
                if(check8==true)
                {
                    cout<<"Enter employee salary: ";
                    cin>>employeesalary[i];
                    bool check9=isValidInputnumber(employeesalary[i]);
                    if(check9==true)
                    {
                        employeeiteration[i]=i+1;
                        cout<<endl;
                    }
                    else if(check9==false)
                    {
                        cout<<"Invalid Input, Please do not enter alphabets or special characters...";
                        cout<<endl<<"Press any key to try again..."<<endl;
                        getcharacter();
                        i--;
                    }    
                }
                else if(check8==false)
                {
                    cout<<"Invalid Input, Please do not enter numbers or special characters...";
                    cout<<endl<<"Press any key to try again..."<<endl;
                    getcharacter();
                    i--;
                }
            }
            else if(check7==false)
            {
                cout<<"Invalid Input, Please do not enter alphabets or special characters...";
                cout<<endl<<"Press any key to try again..."<<endl;
                getcharacter();
                i--;
            }
        }
        else if(check6==false)
        {
                cout<<"Invalid Input, Please do not enter numbers or special characters...";
                cout<<endl<<"Press any key to try again..."<<endl;
                getcharacter();
                i--;
        }
        
    }
}
void printemployeedetails()
{
    for(int i=0; i<8; i++)
    {
        if(employeeiteration[i]==0 || employeename[i]=="\0")
        {
            continue;
        }
        cout<<"EMPLOYEE NAME: "<<employeename[i]<<"\t"<<"EMPLOYEE CNIC: "<<employeecnic[i]<<"\n"<<"EMPLOYEE ROLE: "<<employeerole[i]<<"\t"<<"EMPLOYEE SALARY: "<<employeesalary[i]<<endl<<endl;
    }
    cout<<"Enter any key to continue...";
    char ch=getch();
}
string askemployeeupdate()
{
    string name;
    cout<<"Enter the name of the employee whose info you want to change: ";
    cin.ignore();
    getline(cin, name);
    return name;    
}
bool verifyemployee(string name)
{
    bool verify=false;
    for(int i=0; i<8; i++)
    {
        if(employeename[i]==name)
        {
            verify=true;
            break;
        }
    }
    return verify;
}
int findemployeeupdate(string name)
{
    int index;
    for(int i=0; i<8; i++)
    {
        if(employeename[i]==name)
        {
            index=i;
        }
    }
    return index;
}
void updateemployee(int index)
{
    for(int i=index;i==index;i++)
    {
        cout<<"Enter employee name: ";
        cin.ignore();
        getline(cin, employeename[i]);
        bool check6=isValidInput(employeename[i]);
        if(check6==true)
        {
            cout<<"Enter employee cnic without dashes: ";
            cin>>employeecnic[i];
            bool check7=isValidInputnumber(employeecnic[i]);
            if(check7==true)
            {
                cout<<"Enter employee role: ";
                cin.ignore();
                getline(cin, employeerole[i]);
                bool check8=isValidInput(employeerole[i]);
                if(check8==true)
                {
                    cout<<"Enter employee salary: ";
                    cin.ignore();
                    bool check9=isValidInputnumber(employeesalary[i]);
                    if(check9==true)
                    {
                        employeeiteration[i]=i+1;
                    }
                    else if(check9==false)
                    {
                        cout<<"Invalid Input, Please do not enter alphabets or special characters...";
                        cout<<endl<<"Press any key to try again...";
                        getcharacter();
                        i--;
                    }    
                }
                else if(check8==false)
                {
                    cout<<"Invalid Input, Please do not enter numbers or special characters...";
                    cout<<endl<<"Press any key to try again...";
                    getcharacter();
                    i--;
                }
            }
            else if(check7==false)
            {
                cout<<"Invalid Input, Please do not enter alphabets or special characters...";
                cout<<endl<<"Press any key to try again...";
                getcharacter();
                i--;
            }
        }
        else if(check6==false)
        {
                cout<<"Invalid Input, Please do not enter numbers or special characters...";
                cout<<endl<<"Press any key to try again...";
                getcharacter();
                i--;
        }
        
    }
}   
string askemployeedelete()
{
    string name;
    cout<<"Enter the name of the employee whose info you want to update: ";
    cin.ignore();
    getline(cin, name);
    return name;
}
int findemployeedelete(string name)
{
    int index;
    for(int i=0; i<8; i++)
    {
        if(employeename[i]==name)
        {
            index=i;
        }
    }
    return index;
}
void deleteemployee(int index)
{
    for(int i=index;i==index;i++)
    {
        employeename[i]="\0";
        employeecnic[i]="\0";
        employeerole[i]="\0";
        employeesalary[i]="\0";
        employeeiteration[i]=0;       
    }   
}
bool checkusername(string admin)
{
    if(admin=="admin")
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool checkpassword(string password)
{
    if(password=="123456")
    {
        return true;
    }
    else
    {
        return false;
    }
}
void getcharacter()
{
    char ch=getch();
}
bool checkselection(string selection)
{
   if(selection=="1" || selection=="2" || selection=="3")
   {
        return true;
   }   
   else
   {
        return false;
   }
}
bool isValidInputfoodname() 
{
    for(int i=0; i<5; i++) 
    { 
        string input=foodNamesdesi[i];
        for(int j=0; input[j]!='\0'; j++)
        {
        char c = input[j];
        if(!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ')) 
        {
            return false;
        }
        }
        return true;
    }
    
}
bool isValidInput(string input) 
{
    for(int  i=0;input[i] !='\0';i++) 
    {
        char c=input[i];
        if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || c == ' ') || c=='\\' || c=='/') 
        {
            return false;
        }
    }
    return true;
}
bool isValidInputnumber(string input) 
{
    for(int  i=0;input[i] !='\0';i++) 
    {
        char c=input[i];
        if (!(c >= '0' && c <= '9')) 
        {
            return false;
        }
    }
    return true;
}
bool verifyvaliditem(string name)
{
    bool check11=isValidInput(name);
    if(check11==true)
    {
        return true;
    }
    else if(check11==false)
    {
        return false;
    }
}
bool validinputprice(string price)
{
    bool check12=isValidInputnumber(price);
    if(check12==true)
    {
        return true;
    }
    else if(check12==false)
    {
        return false;
    }
}
void loginheader()
{
    system("cls");
    cout<<"****************************************************************************************************************************************************************************"<<endl;
    cout<<"*                                                                               LOGIN PAGE                                                                                 *"<<endl;
    cout<<"****************************************************************************************************************************************************************************"<<endl;
}
string usermenu()
{
    string choice;
    cout<<endl<<endl<<"Press 1 if you want to see the whole Menu for today..."<<endl;
    cout<<"Press 2 if you want to order something from the Menu..."<<endl;
    cout<<"Press 3 to go Back to the Main Menu..."<<endl;
    cout<<"Press 4 to Exit the Application..."<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    return choice;
}
string orderdesi()
{
    string foodname;
    cout<<endl<<"What would you like to order from Desi Food? Enter your selection (e.g "<<foodNamesdesi[0]<<", "<<foodNamesdesi[1]<<" etc): ";
    cin>>foodname;
    return foodname;
}
string ordercontinental()
{
    string foodname;
    cout<<endl<<"What would you like to order from Continental Food? Enter your selection (e.g "<<foodNamesContinental[0]<<", "<<foodNamesContinental[1]<<" etc): ";
    cin>>foodname;
    return foodname;
}
string orderchinese()
{
    string foodname;
    cout<<endl<<"What would you like to order from Chinese Food? Enter your selection (e.g "<<foodNamesContinental[0]<<", "<<foodNamesContinental[1]<<" etc): ";
    cin>>foodname;
    return foodname;
}