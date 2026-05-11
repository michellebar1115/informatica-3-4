#include <stdio.h>
void addition(void);
void subtraction(void);
void multiplication(void);
void division(void);

int main(void){
    int user_response;
    printf("Calculator\n");
    printf("What would you like to do?:\n");
    printf("WARNING: If selecting Division, you cannot divide by zero.\n");
    printf("1. Addition");
    printf("2. Subtraction");
    printf("3. Multiplication");
    printf("4. Division");
    scanf("%d\n",&user_response);

    if(user_response == 1){
        addition();
    } else if (user_response ==2){
        subtraction();
    }else if (user_response ==3){
        multiplication();
    }else if (user_response ==4){
        division();
    }

    // printf("What two numbers would you like to execute with your operator?(Write with a space inbetween)");
    // scanf("%f %f",num1,num2);

    // if(user_response == 1){
    //     float =num1+num2
    //     float num3=num1+num2;
    //     printf("%f+%f= %f",num1,num2,num3);
    // } else if (user_response ==2){
    //     float num3=num1-num2;
    //     printf("%f-%f= %f",num1,num2,num3);
    // }else if (user_response ==3){
    //     float num3=num1*num2;
    //     printf("%f*%f= %f",num1,num2,num3);
    // }else if (user_response ==4){
    //     float num3=num1/num2;
    //     printf("%f/%f= %f",num1,num2,num3);
    // }
    }

void addition(void) {
    float num1;
    float num2;
    printf("What two numbers would you like to add?(Write with a space inbetween): ");
    scanf("%f %f",&num1,&num2);
    float num3=num1+num2;
    printf("%f+%f= %f",num1,num2,num3);
}
void subtraction(void) {
    float num1;
    float num2;
    printf("What two numbers would you like to add?(Write with a space inbetween): ");
    scanf("%f %f",&num1,&num2);
    float num3=num1-num2;
    printf("%f-%f= %f",num1,num2,num3);
}
