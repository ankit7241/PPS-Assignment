#include<stdio.h>
#include<math.h>
int main()
{
    int choice,num1,num2,num;
    printf("Welcome!\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Square\n6.Cube\n7.Root\nEnter your choice : ");
    scanf("%d",&choice);
    if(choice <=4 || choice==7);
    {
        printf("\nEnter 2 Numbers:\n");
        scanf("%d%d",&num1,&num2);
    }
    if(choice >4 && choice <=7)
    {
         printf("\nEnter 1 Number:\n");
         scanf("%d",&num);
    }
    switch(choice)
    {
        case 1:
        {
            printf("\nSum is %d",num1+num2);
            break;
        }
        case 2:
        {
            printf("\nDifference is %d",num1-num2);
            break;
        }
        case 3:
        {
            printf("\nProduct is %d",num1*num2);
            break;
        }
        case 4:
        {
            printf("\nQuotient is %d \nRemainder is %d",num1/num2,num1%num2);
            break;
        }
        case 5:
        {
            printf("\nSquare is %d",num*num);
            break;
        }
        case 6:
        {
            printf("\nCube is %d",num*num*num);
            break;
        }
        case 7:
        {
            printf("\nRoot is %d",sqrt(num));
            break;
        }
        default:
        {
            printf("Invalid Input");
            break;
        }
    }
}
