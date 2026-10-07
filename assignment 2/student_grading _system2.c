#include <stdio.h>
int main() {
int N;
printf("How many students would u like to check their marks");
scanf("%i", &N);
for (int i=1; i<=N; i+=1){
        double marks;
        char grade;
        char name[50];
        char index[30];
        const char *status;

        printf("Please enter your name\n");
        scanf("%49s", name);

        printf("Please enter your registration number\n");
        scanf("%29s", index);

        printf("Please enter ur marks\n");
        scanf("%lf", &marks);
        int category = (int)marks/10;
        
        switch (category){
            case 10:
            case 9:
            case 8:
            case 7:
                grade='A';
                status="PASS";
                break;
            case 6:
                grade='B';
                status="PASS";
                break;
            case 5:
                grade='C';
                status="PASS";
                break;
            case 4:
                grade='D';
                status="PASS";
                break;
            default:
            grade='E';
            status="FAIL";
            break;
        }
        printf("\n-------------------------------");
        printf("\nSTUDENT INFORMATION");
        printf("\n-------------------------------");
        printf("\nName : %s", name);
        printf("\nRegistration number :%s", index);
        printf("\nYour grade is: %c", grade);
        printf("\nMarks: %i", (int)marks);
        printf("\nStatus: %s", status);
        printf("\n-------------------------------\n");
    }
    printf("\nYour process has been finished");
    return 0;

}