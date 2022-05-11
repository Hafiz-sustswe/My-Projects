#define iSpace 43

void printspace(int a);
void print_new_line(int a);
void loading();
printchar(int a);
int printLine( int ara[], int n );
void delayF();
void name();

void seeDept();
void mainMenu();
void WELCOME();




void printspace(int a)
{
    for(int i=1; i <= a; i++)
        printf(" ");
}
void print_new_line(int a)
{

    for(int i =0; i<a; i++)
        printf("\n");
}

void loading()
{
    int i,t=0;
    char p='%';
    print_new_line(4);
    printspace(50);
    printf("loading................%d%c\n",t,p);
    printspace(50);
    system("cls");
    for( i=0;i<25;i++)
    {
        t=(1+i)*4;

        print_new_line(4);
        printspace(50);
        if(i != 24)
            printf("loading..............%d%c\n" , t, p);
        else
            printf("Successfully Loaded  %d%c\n" , t, p);
        printspace(50);
        for(int j=0;j<=i;j++)printf("%c",177);

        for(long long j=0;j<50000000;j++){}

        if(i != 24)
        system("cls");
    }
}

printchar(int a)
{   char c='@';
    for(int i = 1; i <= a;i++)
    {
        printf("%c",c);
    }

}
int execute_arr(int arr[], int len)
{
    int f=0;
    for(int i = 0;i <len ;i++ )
    {
        if(f==1)
            {
            printchar(arr[i]);
            f=0;
                }
        else if(f==0)
        {
            printspace(arr[i]);
            f=1;
        }
    }
    printf("\n");

}


int printLine( int ara[], int n )
{
    execute_arr(ara, n);
}

void delayF(){
    Sleep(100);
}

void name()
{   printf("\n\n\n");
    printspace(60);
    printf("M");delayF();
    printf("A");delayF();
    printf("D");delayF();
    printf("E");delayF();
    printf(" ");delayF();
    printf("B");delayF();
    printf("Y :-\n\n");
    printspace(60);delayF();
    printf("M");delayF();
    printf("D ");delayF();
    printf("S");delayF();
    printf("A");delayF();
    printf("D");delayF();
    printf("M");delayF();
    printf("A");delayF();
    printf("N ");delayF();
    printf("H");delayF();
    printf("A");delayF();
    printf("F");delayF();
    printf("I");delayF();
    printf("Z\n");delayF();
    printspace(60);delayF();
    printf("S");delayF();
    printf("W");delayF();
    printf("E, ");delayF();
    printf("S");delayF();
    printf("U");delayF();
    printf("S");delayF();
    printf("T");delayF();





}

void exitf()
{
    clearScreen();
    printf("\n\n\n\n\n\n\n");
    printspace(50);
    printf("Thanks for using this app!!");
    return 0;

}

void AnE()
{
    clearScreen();
    printf("\n\n");
    printspace(50);
    printf(" _________________________________________\n");
    printspace(50);
    printf("|                                         |\n");
    printspace(50);
    printf("| Accident and emergency (A&E) Department |\n");
    printspace(50);
    printf("|_________________________________________|\n\n\n");
    printspace(50);
    printf("Total seat =20\n");
    printspace(50);
    printf("Booked seat =12\n");
    printspace(50);
    printf("Available seat=08\n");
    printspace(50);
    printf("Doctor available for 24 hour!!\n");
    printspace(50);
    printf("Do you want to continue? Press 'Y' for Yes and 'N' for No !");
    char c;
    scanf("%c",&c);
    if(c == 'N' || c == 'n')
        exitf();
    else if(c == 'Y' || c == 'y')
        {
            clearScreen();
            printf("\n\n\n\n\n");
            printspace(50);
            printf("Press 'B' for back\n");
            printspace(50);
            printf("Press 'M' for Main Menu\n");
            printspace(50);

        }
    else
        {
            clearScreen();
            printf("\n\n\n\n");
            printspace(50);
            printf("Please Enter a valid choice!!\n");
            AnE();

        }

    char a;
    scanf("%c",&a);
    if(a == 'b' || a == 'B' )
        seeDept();
    else if(a == 'm' || a == 'M')
        {
            clearScreen();
            mainMenu();
        }
    else
        {
            clearScreen();
            printf("\n\n\n\n");
            printspace(50);
            printf("Please Enter a valid choice!!\n");
            AnE();

        }



}
void cardio()
{
    clearScreen();
    printf("\n\n");
    printspace(50);
    printf(" _________________________________________\n");
    printspace(50);
    printf("|                                         |\n");
    printspace(50);
    printf("|          Cardiology Department          |\n");
    printspace(50);
    printf("|_________________________________________|\n\n\n");
    printspace(50);
    printf("Total seat =50\n");
    printspace(50);
    printf("Booked seat =40\n");
    printspace(50);
    printf("Available seat=10\n");
    printspace(50);
    printf("Doctor available for 9 am - 4 pm !!\n");
    printspace(50);
    printf("Do you want to continue? Press 'Y' for Yes and 'N' for No !");
    char c;
    scanf("%c",&c);
    if(c == 'N' || c == 'n')
        exitf();
    else if(c == 'Y' || c == 'y')
        {
            clearScreen();
            printf("\n\n\n\n\n");
            printspace(50);
            printf("Press 'B' for back\n");
            printspace(50);
            printf("Press 'M' for Main Menu\n");
            printspace(50);

        }
    else
        {
            clearScreen();
            printf("\n\n\n\n");
            printspace(50);
            printf("Please Enter a valid choice!!\n");
            cardio();

        }

    char a;
    scanf("%c",&a);
    if(a == 'b' || a == 'B' )
        seeDept();
    else if(a == 'm' || a == 'M')
        {
            clearScreen();
            mainMenu();
        }
    else
        {
            clearScreen();
            printf("\n\n\n\n");
            printspace(50);
            printf("Please Enter a valid choice!!\n");
            cardio();

        }



}

void diago()
{
    clearScreen();
    printf("\n\n");
    printspace(50);
    printf(" _________________________________________\n");
    printspace(50);
    printf("|                                         |\n");
    printspace(50);
    printf("|          Diagnostic Department          |\n");
    printspace(50);
    printf("|_________________________________________|\n\n\n");
    printspace(50);
    printf("Total seat =05\n");
    printspace(50);
    printf("Booked seat =02\n");
    printspace(50);
    printf("Available seat=03\n");
    printspace(50);
    printf("Doctor available for 11 am - 4 pm !!\n\n\n");
    printspace(50);
    printf("Do you want to continue? Press 'Y' for Yes and 'N' for No !");
    char c;
    scanf("%c",&c);
    if(c == 'N' || c == 'n')
        exitf();
    else if(c == 'Y' || c == 'y')
        {
            clearScreen();
            printf("\n\n\n\n\n");
            printspace(50);
            printf("Press 'B' for back\n");
            printspace(50);
            printf("Press 'M' for Main Menu\n");
            printspace(50);

        }
    else
        {
            clearScreen();
            printf("\n\n\n\n");
            printspace(50);
            printf("Please Enter a valid choice!!\n");
            diago();

        }

    char a;
    scanf("%c",&a);
    if(a == 'b' || a == 'B' )
        seeDept();
    else if(a == 'm' || a == 'M')
        {
            clearScreen();
            mainMenu();
        }
    else
        {
            clearScreen();
            printf("\n\n\n\n");
            printspace(50);
            printf("Please Enter a valid choice!!\n");
            diago();

        }



}
void gyn()
{
    clearScreen();
    printf("\n\n");
    printspace(50);
    printf(" _________________________________________\n");
    printspace(50);
    printf("|                                         |\n");
    printspace(50);
    printf("|          Gynecology Department          |\n");
    printspace(50);
    printf("|_________________________________________|\n\n\n");
    printspace(50);
    printf("Total seat =10\n");
    printspace(50);
    printf("Booked seat =02\n");
    printspace(50);
    printf("Available seat=08\n");
    printspace(50);
    printf("Doctor available for 9 am - 4 pm !!\n\n\n");
    printspace(50);
    printf("Do you want to continue? Press 'Y' for Yes and 'N' for No !");
    char c;
    scanf("%c",&c);
    if(c == 'N' || c == 'n')
        exitf();
    else if(c == 'Y' || c == 'y')
        {
            clearScreen();
            printf("\n\n\n\n\n");
            printspace(50);
            printf("Press 'B' for back\n");
            printspace(50);
            printf("Press 'M' for Main Menu\n");
            printspace(50);

        }
    else
        {
            clearScreen();
            printf("\n\n\n\n");
            printspace(50);
            printf("Please Enter a valid choice!!\n");
            gyn();

        }

    char a;
    scanf("%c",&a);
    if(a == 'b' || a == 'B' )
        seeDept();
    else if(a == 'm' || a == 'M')
        {
            clearScreen();
            mainMenu();
        }
    else
        {
            clearScreen();
            printf("\n\n\n\n");
            printspace(50);
            printf("Please Enter a valid choice!!\n");
            gyn();

        }



}

void icu()
{
    clearScreen();
    printf("\n\n");
    printspace(50);
    printf(" _________________________________________\n");
    printspace(50);
    printf("|                                         |\n");
    printspace(50);
    printf("|              ICU Department             |\n");
    printspace(50);
    printf("|_________________________________________|\n\n\n");
    printspace(50);
    printf("Total seat =10\n");
    printspace(50);
    printf("Booked seat =02\n");
    printspace(50);
    printf("Available seat=08\n");
    printspace(50);
    printf("Doctor available for 24 hour!!\n\n\n");
    printspace(50);
    printf("Do you want to continue? Press 'Y' for Yes and 'N' for No !");
    char c;
    scanf("%c",&c);
    if(c == 'N' || c == 'n')
        exitf();
    else if(c == 'Y' || c == 'y')
        {
            clearScreen();
            printf("\n\n\n\n\n");
            printspace(50);
            printf("Press 'B' for back\n");
            printspace(50);
            printf("Press 'M' for Main Menu\n");
            printspace(50);

        }
    else
        {
            clearScreen();
            printf("\n\n\n\n");
            printspace(50);
            printf("Please Enter a valid choice!!\n");
            icu();

        }

    char a;
    scanf("%c",&a);
    if(a == 'b' || a == 'B' )
        seeDept();
    else if(a == 'm' || a == 'M')
        {
            clearScreen();
            mainMenu();
        }
    else
        {
            clearScreen();
            printf("\n\n\n\n");
            printspace(50);
            printf("Please Enter a valid choice!!\n");
            icu();

        }



}

void radio()
{
    clearScreen();
    printf("\n\n");
    printspace(50);
    printf(" _________________________________________\n");
    printspace(50);
    printf("|                                         |\n");
    printspace(50);
    printf("|        Radiotherapy Department          |\n");
    printspace(50);
    printf("|_________________________________________|\n\n\n");
    printspace(50);
    printf("Total seat =5\n");
    printspace(50);
    printf("Booked seat =02\n");
    printspace(50);
    printf("Available seat=03\n");
    printspace(50);
    printf("Doctor available for 9 am - 4 am!!\n\n\n");
    printspace(50);
    printf("Do you want to continue? Press 'Y' for Yes and 'N' for No !");
    char c;
    scanf("%c",&c);
    if(c == 'N' || c == 'n')
        exitf();
    else if(c == 'Y' || c == 'y')
        {
            clearScreen();
            printf("\n\n\n\n\n");
            printspace(50);
            printf("Press 'B' for back\n");
            printspace(50);
            printf("Press 'M' for Main Menu\n");
            printspace(50);

        }
    else
        {
            clearScreen();
            printf("\n\n\n\n");
            printspace(50);
            printf("Please Enter a valid choice!!\n");
            radio();

        }

    char a;
    scanf("%c",&a);
    if(a == 'b' || a == 'B' )
        seeDept();
    else if(a == 'm' || a == 'M')
        {
            clearScreen();
            mainMenu();
        }
    else
        {
            clearScreen();
            printf("\n\n\n\n");
            printspace(50);
            printf("Please Enter a valid choice!!\n");
            radio();

        }



}

void maternity()
{
    clearScreen();
    printf("\n\n");
    printspace(50);
    printf(" _________________________________________\n");
    printspace(50);
    printf("|                                         |\n");
    printspace(50);
    printf("|          Maternity Department           |\n");
    printspace(50);
    printf("|_________________________________________|\n\n\n");
    printspace(50);
    printf("Total seat =05\n");
    printspace(50);
    printf("Booked seat =02\n");
    printspace(50);
    printf("Available seat=03\n");
    printspace(50);
    printf("Doctor available for 9 am - 4 am!!\n\n\n");
    printspace(50);
    printf("Do you want to continue? Press 'Y' for Yes and 'N' for No !");
    char c;
    scanf("%c",&c);
    if(c == 'N' || c == 'n')
        exitf();
    else if(c == 'Y' || c == 'y')
        {
            clearScreen();
            printf("\n\n\n\n\n");
            printspace(50);
            printf("Press 'B' for back\n");
            printspace(50);
            printf("Press 'M' for Main Menu\n");
            printspace(50);

        }
    else
        {
            clearScreen();
            printf("\n\n\n\n");
            printspace(50);
            printf("Please Enter a valid choice!!\n");
            maternity();

        }

    char a;
    scanf("%c",&a);
    if(a == 'b' || a == 'B' )
        seeDept();
    else if(a == 'm' || a == 'M')
        {
            clearScreen();
            mainMenu();
        }
    else
        {
            clearScreen();
            printf("\n\n\n\n");
            printspace(50);
            printf("Please Enter a valid choice!!\n");
            maternity();

        }

}

void other()
{
    clearScreen();
    printf("\n\n");
    printspace(50);
    printf(" _________________________________________\n");
    printspace(50);
    printf("|                                         |\n");
    printspace(50);
    printf("|           Other Department              |\n");
    printspace(50);
    printf("|_________________________________________|\n\n\n");
    printspace(50);
    printf("There are some more departments ragarding the managemnets ,officials etc \n");
    printspace(50);
    printf("And service also\n");
    printspace(50);
    printf("For more information ,contact with the info desk\n");
    printspace(50);
    printf("Do you want to continue? Press 'Y' for Yes and 'N' for No !");
    char c;
    scanf("%c",&c);
    if(c == 'N' || c == 'n')
        exitf();
    else if(c == 'Y' || c == 'y')
        {
            clearScreen();
            printf("\n\n\n\n\n");
            printspace(50);
            printf("Press 'B' for back\n");
            printspace(50);
            printf("Press 'M' for Main Menu\n");
            printspace(50);

        }
    else
        {
            clearScreen();
            printf("\n\n\n\n");
            printspace(50);
            printf("Please Enter a valid choice!!\n");
            maternity();

        }

    char a;
    scanf("%c",&a);
    if(a == 'b' || a == 'B' )
        seeDept();
    else if(a == 'm' || a == 'M')
        {
            clearScreen();
            mainMenu();
        }
    else
        {
            clearScreen();
            printf("\n\n\n\n");
            printspace(50);
            printf("Please Enter a valid choice!!\n");
            maternity();

        }



}

void seeDept()
{
    clearScreen();

    printf("\n");
    printspace(50);
    printf("Welcome !!\n\n");
    printspace(50);
    printf("Available Department of This Hospital are as follow-\n\n");
    printspace(50);
    printf("1. Accident and Emergency (A&E)\n");
    printspace(50);
    printf("2. Cardiology\n");
    printspace(50);
    printf("3. Diagnostic Imaging\n");
    printspace(50);
    printf("4. Gynecology\n");
    printspace(50);
    printf("5. Intensive Care Unit (ICU)\n");
    printspace(50);
    printf("6. Radiotherapy\n");
    printspace(50);
    printf("7. Maternity\n");
    printspace(50);
    printf("8.Other\n");
    printspace(50);
    printf("---------------------------------\n");
    printspace(50);
    printf("9.Back to main menu\n\n");
    printspace(50);
    int c;
    printf("Enter Your Choice:_");
    scanf("%d",&c);
    switch(c)
    {
        case 1:
        AnE();
        break;
        case 2:
        cardio();
        break;
        case 3:
        diago();
        break;
        case 4:
        gyn();
        break;
        case 5:
        icu();
        break;
        case 6:
        radio();
        break;
        case 7:
        maternity();
        break;
        case 8:
        other();
        break;
        case 9:
        clearScreen();
        mainMenu();
        break;
        default:
        printf("Enter a valid number (1-9)!!!");
        seeDept();
        break;

    }


}

void givedigit(char s[],int n)
{

    char temp[8];
    for(int i=0,j=0;i<n;i++)
    {
        if(i == 2 || i == 5)
            continue;
        else
        {
            temp[j] = s[i];
            j++;
        }


    }
    temp[8]='\0';
    strcpy(s,temp);
}

void printinfo( char name[],char age[],char adress[],char contact[],char id[],char pass[])
{
    system("cls");
    printf("\n\n");
    printspace(50);
    printf("Succesfully Admitted into this Hospital!!!\n");
    printspace(50);
    printf("Detailed information are given bellow\n\n");
    printspace(50);
    printf("Name:");
    puts(name);
    printf("\n");

    printspace(50);
    printf("Age:");
    puts(age);
    printf("\n");

    printspace(50);
    printf("Adress:");
    puts(adress);
    printf("\n");

    printspace(50);
    printf("Contact Number:");
    puts(contact);
    printf("\n");

    printspace(50);
    printf("Patient Id:");
    puts(id);
    printf("\n");

    printspace(50);
    printf("Password:");
    puts(pass);
    printf("\n");

    printspace(50);
    printf("Please Do Not Share the Password !!\n");



}

void admit()
{
    system("cls");
    printf("\n\n");
    printspace(50);

    FILE *pId;
    char filename [] = "patient";

    pId = fopen(filename,"a");
    char name[15],bdate[11],age[2],Id[13]="10",adress[100], contact[12];


    printf("Enter Name : ");
    gets(name);

    system("cls");
    printf("\n\n");
    printspace(50);
    printf("Enter age : ");
    gets(age);
    strcat(Id,age);


    system("cls");
    printf("\n\n");
    printspace(50);
    printf("Enter birthdate : ");
    gets(bdate);
    int len = strlen(bdate);
    givedigit(bdate,len);
    strcat(Id,bdate);
    fprintf(pId,Id);
    fprintf(pId," ");

    fprintf(pId,bdate);
    fprintf(pId," ");

    fprintf(pId,name);


    system("cls");
    printf("\n\n");
    printspace(50);
    printf("Enter Adress : ");
    gets(adress);
    fprintf(pId," ");
    fprintf(pId,adress);

    system("cls");
    printf("\n\n");
    printspace(50);
    printf("Enter Your Mobile No : ");
    gets(contact);
    fprintf(pId," ");
    fprintf(pId,contact);

    fprintf(pId,"\n");
    fclose(pId);

    printinfo(name,age,adress,contact,Id,bdate);
    printspace(50);
    printf("Do you Want to go to main menu? If Yes, Press Y else press N _");
    char a;
    scanf("%c",&a);
    if(a == 'Y' || a == 'y')
        mainMenu();
    else
        exitf();


}

void mainMenu()
{
    printf("\n\n\n");
    printspace(50);
    printf("Welcome to Main Menu\n\n");
    printspace(50);
    printf("Enter A Number to Continue!!\n\n\n");
    printspace(50);
    printf("1-See availabe departments of this hospital\n");
    printspace(50);
    printf("2-See available doctors today\n");
    printspace(50);
    printf("3-See cost for admission for each service\n");
    printspace(50);
    printf("4-Admit a patient\n");
    printspace(50);
    printf("5-log in as patient Id\n");
    printspace(50);
    printf("6-Recover password\n");
    printspace(50);
    printf("7-Log out from patient id\n");
    printspace(50);
    printf("8-About Develpoer\n");
    printspace(50);
    printf("9-Exit program!\n\n\n");
    printspace(50);

    printf("Enter Your Choice!!:");
    int choice;
    scanf("%d",&choice); getchar();
    switch(choice)
    {
        case 1:
            seeDept();
            break;
//        case 2:
//            seeDoct();
//            break;
//        case 3:
//            seeCost();
//            break;
        case 4:
            admit();
            break;
//        case 5:
//            login();
//            break;
//        case 6:
//            recoverId();
//            break;
//        case 7:
//            logout();
//            break;
////        case 8:
////            about();
////            break;
        case 9:
            exitf();
            break;
        default:
            printf("\n\n");
            printspace(50);
            clearScreen();
            printspace(50);
            printf("Please Enter a valid number(1-9)!!!");
            mainMenu();
    }
}

void WELCOME()
{


    // welcome
    int line1[20] = {iSpace, 1, 7, 1, 7, 1, 2, 7, 2, 1, 9, 7, 2, 7, 2, 1, 7, 1, 2, 7};
    int line2[31] = {iSpace + 1, 1, 5, 1, 1, 1, 5, 1, 3, 1, 8, 1, 9, 1, 5, 1, 2, 1, 5, 1, 2, 1, 1, 1, 3, 1, 1, 1, 2, 1, 6};
    int line3[26] = {iSpace + 2, 1, 3, 1, 3, 1, 3, 1, 4, 7, 2, 1, 9, 1, 8, 1, 5, 1, 2, 1, 3, 1, 3, 1, 2, 7};
    int line4[27] = {iSpace + 3, 1, 1, 1, 5, 1, 1, 1, 5, 1, 8, 1, 9, 1, 5, 1, 2, 1, 5, 1, 2, 1, 7, 1, 2, 1, 6};
    int line5[18] = {iSpace + 4, 1, 7, 1, 6, 7, 2, 7, 3, 7, 2, 7, 2, 1, 7, 1, 2, 7};
    //to
    int line6[4] ={70 ,7, 2, 7};
    int line7[6] = {73, 1,5,1,5,1};
    int line8[6] = {73,1,5,1,5,1};
    int line9[6] = {73,1,5,1,5,1};
    int line10[4] = {73,1,5,7};
    //hospital
    int line11[19] = {45,1,5,1,2,7,2,7,2,7,3,7,3,7,6,1,6,1,6};
    int line12[25] = {45,1,5,1,2,1,5,1,2,1,8,1,5,1,6,1,9,1,8,1,1,1,5,1,6};
    int line13[19] = {45,7,2,1,5,1,2,7,2,7,6,1,9,1,7,5,4,1,6};
    int line14[23] = {45,1,5,1,2,1,5,1,8,1,2,1,12,1,9,1,6,1,5,1,3,1,6};
    int line15[20] = {45,1,5,1,2,7,2,7,2,1,9,7,6,1,5,1,7,1,2,7};
    //management

    int line16[28] ={40,1,7,1,6,1,6,1,6,1,6,1,6,6,2,7,2,1,7,1,2,6,2,1,7,1,2,7};
    int line17[45] = {40,1,1,1,3,1,1,1,5,1,1,1,5,1,1,1,4,1,5,1,1,1,5,1,7,1,8,1,1,1,3,1,1,1,2,1,7,1,1,1,5,1,5,1,3};
    int line18[39] = {40,1,3,1,3,1,4,5,4,1,3,1,2,1,4,5,4,1,2,3,2,7,2,1,3,1,3,1,2,6,2,1,3,1,3,1,5,1,3};
    int line19[39] = {40,1,7,1,3,1,5,1,3,1,4,1,1,1,3,1,5,1,3,1,4,1,2,1,8,1,7,1,2,1,7,1,5,1,1,1,5,1,3};
    int line20[33] = {40,1,7,1,2,1,7,1,2,1,6,1,2,1,7,1,2,6,2,7,2,1,7,1,2,6,2,1,7,1,5,1,3};

    //system
    int line21[16] = {54,7,2,1,7,1,2,7,2,7,2,7,2,1,7,1};
    int line22[20] = {54,1,10,1,3,1,4,1,11,1,5,1,8,1,1,1,3,1,1,1};
    int line23[16] = {54,7,6,1,6,7,5,1,5,7,2,1,3,1,3,1};
    int line24[14] = {60,1,6,1,12,1,5,1,5,1,8,1,7,1};
    int line25[14] = {54,7,6,1,6,7,5,1,5,7,2,1,7,1};

    printspace(50);
    printf("Please make fullscreen for better view ;)\n");

    print_new_line(2);

    long long I;
    printLine(line1, 20);
    delayF();

    printLine(line2, 31);
    delayF();
    printLine(line3, 26);
    delayF();
    printLine(line4, 27);
    delayF();
    printLine(line5, 18);
    delayF();
    print_new_line(2);
    printLine(line6, 4);
    delayF();
    printLine(line7, 6);
    delayF();
    printLine(line8, 6);
    delayF();
    printLine(line9, 6);
    delayF();
    printLine(line10, 4);
    delayF();
    print_new_line(2);

    printLine(line11, 19);
    delayF();
    printLine(line12, 25);
    delayF();
    printLine(line13, 19);
    delayF();
    printLine(line14, 23);
    delayF();
    printLine(line15, 20);
    delayF();
    print_new_line(2);

    printLine(line16, 28);
    delayF();
    printLine(line17, 45);
    delayF();
    printLine(line18, 39);
    delayF();
    printLine(line19, 39);
    delayF();
    printLine(line20, 33);
    delayF();

    print_new_line(2);
    printLine(line21, 16);
    delayF();
    printLine(line22, 20);
    delayF();
    printLine(line23, 16);
    delayF();
    printLine(line24, 14);
    delayF();
    printLine(line25, 14);
    name();
}










