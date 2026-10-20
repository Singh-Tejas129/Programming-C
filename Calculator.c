#include<stdio.h>
int main()
{
     int a,b,choice;
     printf("Enter the value of a: ");
      scanf("%d", &a);
     printf("Enter the value of b: ");
     scanf("%d", &b);
      printf("1.Addition:\n ");
      printf("2.Subtraction:\n ");
      printf("3.Multiplication:\n ");
      printf("4.Divide:\n ");
      printf("5.Modulus:\n ");
      printf("6.Exit\n");
      printf("Enter you choice(1-6): ");
      scanf("%d", &choice);
      switch(choice)
      {
        case 1:
        printf("Addition: %d", a+b);
        break;

        case 2:
        printf("Subtraction: %d", a-b);
        break;

        case 3:
        printf("Multiplication: %d", a*b);
        break;

        case 4:
        if(b != 0)
        printf("Divide: %d",a/b);
        else
        printf("Not divisible");
        break;

        case 5:
        if(b != 0)
        printf("Modulus: %d", a%b);
        else
        printf("Error");
        break;

        default:
        printf("Invalid Choice");
      }

    
  
return 0;
}

