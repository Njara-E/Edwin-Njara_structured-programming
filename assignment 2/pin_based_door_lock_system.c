
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <windows.h>
int main(){
    int pin= 7845;
    int user_pin;
    bool pin_id= true;
    printf("please enter the pin to unlock the door(must be 4 digits)\n");
    scanf("%i", &user_pin);
    
    while (pin_id){

        if(user_pin>999 && user_pin<=9999){
            pin_id=false;
            int rem_attempts=2;
            while(user_pin!=pin){
                printf("INCORRECT PIN!! Remaining attempts:%i", rem_attempts);
                printf("\nplease enter the pin to unlock the door(must be 4 digits)\n");
                scanf("%i", &user_pin);
                rem_attempts+=-1;
                
                
                if (rem_attempts==0){
                    printf("U have reached the limit\n");
                    for (int i=5; i>=1; ){
                        i+=-1;
                        printf("\nTIME REMAINING UNTIL NEXT TRY :%i", i);
                        fflush(stdout);
                        Sleep(1000);
                    }
                    printf("\nU can try again");
                    rem_attempts = 3;
                    continue;
                }

            }

            printf("U ARE WELCOME");
            
        }
        else{
            printf("THE PIN MUST BE A 4 DIGIT NUMBER\n");
            printf("please enter the pin to unlock the door(must be 4 digits)\n");
            scanf("%i", &user_pin);
        }
    }

    int option=0;
    while(option<=0 || option>4){
        printf("\n _____DEVICE MENU____\n");
        printf("1.OPEN DOOR\n");
        printf("2.CHANGE USERNAME\n");
        printf("3.CHANGE PIN\n");
        printf("4.EXIT\n");
        printf("----------------\n");
        
        printf("Please enter an apropriate option\n");
        scanf("%i", &option);
        switch(option){
            case 1:
            printf("YOU are welcome");
            break;
            case 2:
            printf("change username coming soon");
            break;
            case 3:
            printf("change pin option coming soon");
            break;
            case 4:
            return 1;
            default:
            printf("INVALID OPTION");
            continue;
            break;
        }
    }
    return 0;
}