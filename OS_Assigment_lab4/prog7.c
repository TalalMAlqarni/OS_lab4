#include <stdio.h>
#include <string.h>

struct student{
char name[20];
char grade[5];
};


int main(int argc, char *argv[]){
   
    struct student students[10];

    strcpy(students[0].name,"Talal"); strcpy(students[0].grade,"A+");
    strcpy(students[1].name,"Mohammed"); strcpy(students[1].grade,"D");
    strcpy(students[2].name,"Moayed"); strcpy(students[2].grade,"B+");
    strcpy(students[3].name,"Fahad"); strcpy(students[3].grade,"A+");
    strcpy(students[4].name,"Kaled"); strcpy(students[4].grade,"F");
    strcpy(students[5].name,"Mansor"); strcpy(students[5].grade,"D+");
    strcpy(students[6].name,"Salem"); strcpy(students[6].grade,"C+");
    strcpy(students[7].name,"Saleh"); strcpy(students[7].grade,"C");
    strcpy(students[8].name,"Osama"); strcpy(students[8].grade,"C+");
    strcpy(students[9].name,"Qasem"); strcpy(students[9].grade,"D");

    for (int i = 0; i < 10; i++){
        printf("The student's name is %s and his grade is %s\n", students[i].name, students[i].grade);
    }
    return 0;
 }
