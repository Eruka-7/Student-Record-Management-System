#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

void gotoxy(int x,int y);
void menu();
void add();
void view();
void search();
void modify();
void delete();

struct student
{
    char name[20], cource[20], branch[20];
    int rollno,mobile;
};

int main()
{
    int x,y;
    system("cls");
    gotoxy(30, 6);
    printf("<--Student Records management system-->");
    gotoxy(35,10);
    printf("Press any Key to Continue....");
    getch();
    menu();
    return 0;
}

void gotoxy(int x,int y)
{
    COORD c;
    c.X=x;
    c.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
void menu()
{
int choice;
system("cls");
gotoxy(30,0);
printf("<--MENU-->\n\n\n");
printf("Please Enter the given approprate number :\n\n");
printf("1 : Add Record.\n");
printf("2 : View Record.\n");
printf("3 : Search Record.\n");
printf("4 : Modify Record.\n");
printf("5 : Delete.\n");
printf("6 : Exit.\n");
printf("\nEnter your choice.\n");
scanf("%d",&choice);
switch (choice){
case 1:
        add();
    break;
case 2:
        view();
    break;
case 3:
        search();
    
    break;
case 4:
        modify();
    
    break;
case 5:
        delete();
    
    break;
case 6:
        exit(1);
        break;
default:
    printf("<--//---INVALIDE--//-->");
}
getch();
}

void add()
{
    FILE *ptr;
    struct student s;
    char option='y';
    system("cls");
    ptr = fopen("D:\\hangman.txt", "ab+");
    if (ptr==NULL)
    {
        printf("File Doesnot exist");
        exit(1);
    }
fflush(stdin);
while (option == 'y')
{
    printf("<--ADD RECORD-->\n\n");
    printf("Enter details of students. \n\n");
    
    printf("Enter Name : ");
    scanf("%c",&s.name);
fflush(stdin);    
    printf("Enter Roll Number : ");
    scanf("%d",&s.rollno);
fflush(stdin);    
    printf("Enter Phone Number : ");
    scanf("%d",&s.mobile);
fflush(stdin);    
    printf("Enter the Course : ");
    scanf("%c",&s.cource);
fflush(stdin);      
    printf("Enter Branch : ");
    scanf("%c",&s.branch);
    fprintf(ptr ,"%c%d%d%c%c",s.name,s.rollno,s.mobile,s.cource,s.branch);

printf("\n\nWant to add another record ? 'y' ,'n' :");
scanf("%c",&option);
    fflush(stdin);
    option = getch();
    system("cls");
    fflush(stdin);
}
fclose(ptr);
printf("Press any Key to Continue... ");
getch();
menu();
}

void view() 
{
    int i=1;
    FILE *ptr;
    struct student s;
    system("cls");
printf("This the the record of the students\n");
printf("SN.    Name   Roll.No    Mobile.NO    Cource    Branch\n");
printf("-------------------------------------------------------------------------------\n");
    ptr = fopen("D:\\hangman.txt", "rb+");
    if(ptr == NULL)
    {
        printf("File Doesnot Exist");
        exit(1);
    } 
    
        while(!feof(ptr))
        {
            fscanf(ptr ,"%c%d%d%c%c",&s.name,&s.rollno,&s.mobile,&s.cource,&s.branch);
            printf("%d    %c    %d    %d    %c    %c    %c",i,s.name,s.rollno,s.mobile,s.cource,s.branch);
        i++;
        printf("\n");
        }
    getch();
    fclose(ptr);
    
}

void search()
{
    
}

void modify()
{
    
}

void delete()
{
    
}




