#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

/*void gotoxy(int,int);
void menu();
void add();
void view();
void search();
void modify();
void delete();*/

struct student
{
    char name[20], mobile [20], cource[20], branch[20];
    int rollno;

};
int main()
{
    int x,y;
    gotoxy(10, 4);
    printf("Student Records management system");
    getch();
    return 0;

}

