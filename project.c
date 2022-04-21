#include <stdio.h>

int main(void){
    int ch,a,b,ch2,ch1;
    float r, p = 3.14,q=0;
    char choice;
    do {
        printf("Hello! This is a calculator, this will help you perform operations on either a circle or 2 numbers!\n");
        printf("Do you want to perform operations on a circle first or on two numbers first?\nType 1 for numbers and 2 for circle:\n");
        scanf("%d", &ch);

        switch(ch){
            case 1:{
                printf("1. Add two numbers\n2. Subtract two numbers\n3. Multiply two numbers\n4. Divide two numbers\n5. Find the remainder between two numbers\n6. Exit");
                printf("\n");
                printf("Enter the two numbers:\n");
                scanf("%d %d", &a, &b);
                printf("Which one do you want to perform? (Press 1,2,3,4 or 5):\n");
                scanf("%d", &ch2);
                
                switch(ch2){
                    case 1: {
                        printf("The sum of the two numbers is: %d", (a+b));
                        printf("\n");
                        break;
                    }
                    case 2: {
                        printf("The difference of the two numbers is: %d", (a-b));
                        printf("\n");
                        break;
                    }
                    case 3: {
                        printf("The product of the two numbers is: %d", (a*b));
                        printf("\n");
                        break;
                    }
                    case 4: {
                        printf("The quotient of the two numbers is: %d", (a/b));
                        printf("\n");
                        break;
                    }
                    case 5: {
                        printf("The remainder of the two numbers is: %d", (a%b));
                        printf("\n");
                        break;
                    }
                    case 6: {
                        break;
                    }
                }
            }
            case 2:{
                printf("1. Find the area of the circle\n2. Find the circumference of the circle\n3. Find the equation of the circle\n4. Exit");
                printf("\n");
                printf("Enter the radius:\n");
                scanf("%f", &r);
                printf("Which one do you want to perform? (Press 1,2,3 or 4):");
                scanf("%d", &ch1);

                switch(ch1){
                    case 1: {
                        q = 3.14*r*r;
                        printf("The area of the circle is: %.2f", q);
                        printf("\n");
                        break;
                    }
                    case 2: {
                        printf("The circumference of the circle is: %.2f", (2*p*r));
                        printf("\n");
                        break;
                    }
                    case 3: {
                        printf("The equation of the circle is: x^2 + y^2 = %.2f", (r*r));
                        printf("\n");
                        break;
                    }
                    case 4: {
                        break;
                    }   
                }
            }
        }

        printf("Do you want to continue? [y/n]?\n");
        scanf("%c", &choice);

    } while(choice == 'y' || choice == 'Y');
}
