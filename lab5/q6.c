#include <stdio.h>
#include <conio.h>

int main()
{
    // Displaying the menu
    printf("Burger (Rs-200) \n");
    printf("French Fries (Rs-50) \n");
    printf("Pizza (Rs-500) \n");
    printf("Sandwiches (Rs-150) \n");

    int no_of_type, cost1, cost2, cost3, cost4, quantity, priceB = 200, priceF = 50, priceP = 500, priceS = 150, total_charges;
    char choice1, choice2, choice3, choice4;

    printf("Enter the number of type of snacks you want to order \n");
    scanf("%d", &no_of_type);

    if (no_of_type == 1)
    {
        printf("Enter choice (Press B for Burger, F for French Fries, P for Pizza, S for Sandwiches)\n");
        scanf(" %c", &choice1);
        printf("Enter the quantity for %c \n", choice1);
        scanf("%d", &quantity);

        switch (choice1)
        {
        case 'B':
            cost1 = quantity * priceB;
            break;
        case 'F':
            cost1 = quantity * priceF;
            break;
        case 'P':
            cost1 = quantity * priceP;
            break;
        case 'S':
            cost1 = quantity * priceS;
            break;
        default:
            printf("Invalid input \n");
        }
        total_charges = cost1;
    }
    else if (no_of_type == 2)
    {
        printf("Enter first choice (Press B for Burger, F for French Fries, P for Pizza, S for Sandwiches)\n");
        scanf(" %c", &choice1);
        printf("Enter the quantity for %c \n", choice1);
        scanf("%d", &quantity);

        switch (choice1)
        {
        case 'B':
            cost1 = quantity * priceB;
            break;
        case 'F':
            cost1 = quantity * priceF;
            break;
        case 'P':
            cost1 = quantity * priceP;
            break;
        case 'S':
            cost1 = quantity * priceS;
            break;
        default:
            printf("Invalid input \n");
        }

        printf("Enter second choice (Press B for Burger, F for French Fries, P for Pizza, S for Sandwiches)\n");
        scanf(" %c", &choice2);
        printf("Enter the quantity for %c \n", choice2);
        scanf("%d", &quantity);

        switch (choice2)
        {
        case 'B':
            cost2 = quantity * priceB;
            break;
        case 'F':
            cost2 = quantity * priceF;
            break;
        case 'P':
            cost2 = quantity * priceP;
            break;
        case 'S':
            cost2 = quantity * priceS;
            break;
        default:
            printf("Invalid input \n");
        }
        total_charges = cost1 + cost2;
    }
    else if (no_of_type == 3)
    {
        printf("Enter first choice (Press B for Burger, F for French Fries, P for Pizza, S for Sandwiches)\n");
        scanf(" %c", &choice1);
        printf("Enter the quantity for %c \n", choice1);
        scanf("%d", &quantity);

        switch (choice1)
        {
        case 'B':
            cost1 = quantity * priceB;
            break;
        case 'F':
            cost1 = quantity * priceF;
            break;
        case 'P':
            cost1 = quantity * priceP;
            break;
        case 'S':
            cost1 = quantity * priceS;
            break;
        default:
            printf("Invalid input \n");
        }

        printf("Enter second choice (Press B for Burger, F for French Fries, P for Pizza, S for Sandwiches)\n");
        scanf(" %c", &choice2);
        printf("Enter the quantity for %c \n", choice2);
        scanf("%d", &quantity);

        switch (choice2)
        {
        case 'B':
            cost2 = quantity * priceB;
            break;
        case 'F':
            cost2 = quantity * priceF;
            break;
        case 'P':
            cost2 = quantity * priceP;
            break;
        case 'S':
            cost2 = quantity * priceS;
            break;
        default:
            printf("Invalid input \n");
        }

        printf("Enter third choice (Press B for Burger, F for French Fries, P for Pizza, S for Sandwiches)\n");
        scanf(" %c", &choice3);
        printf("Enter the quantity for %c \n", choice3);
        scanf("%d", &quantity);

        switch (choice3)
        {
        case 'B':
            cost3 = quantity * priceB;
            break;
        case 'F':
            cost3 = quantity * priceF;
            break;
        case 'P':
            cost3 = quantity * priceP;
            break;
        case 'S':
            cost3 = quantity * priceS;
            break;
        default:
            printf("Invalid input \n");
        }
        total_charges = cost1 + cost2 + cost3;
    }
    else if (no_of_type == 4)
    {
        printf("Enter first choice (Press B for Burger, F for French Fries, P for Pizza, S for Sandwiches)\n");
        scanf(" %c", &choice1);
        printf("Enter the quantity for %c \n", choice1);
        scanf("%d", &quantity);

        switch (choice1)
        {
        case 'B':
            cost1 = quantity * priceB;
            break;
        case 'F':
            cost1 = quantity * priceF;
            break;
        case 'P':
            cost1 = quantity * priceP;
            break;
        case 'S':
            cost1 = quantity * priceS;
            break;
        default:
            printf("Invalid input \n");
        }

        printf("Enter second choice (Press B for Burger, F for French Fries, P for Pizza, S for Sandwiches)\n");
        scanf(" %c", &choice2);
        printf("Enter the quantity for %c \n", choice2);
        scanf("%d", &quantity);

        switch (choice2)
        {
        case 'B':
            cost2 = quantity * priceB;
            break;
        case 'F':
            cost2 = quantity * priceF;
            break;
        case 'P':
            cost2 = quantity * priceP;
            break;
        case 'S':
            cost2 = quantity * priceS;
            break;
        default:
            printf("Invalid input \n");
        }

        printf("Enter third choice (Press B for Burger, F for French Fries, P for Pizza, S for Sandwiches)\n");
        scanf(" %c", &choice3);
        printf("Enter the quantity for %c \n", choice3);
        scanf("%d", &quantity);

        switch (choice3)
        {
        case 'B':
            cost3 = quantity * priceB;
            break;
        case 'F':
            cost3 = quantity * priceF;
            break;
        case 'P':
            cost3 = quantity * priceP;
            break;
        case 'S':
            cost3 = quantity * priceS;
            break;
        default:
            printf("Invalid input \n");
        }

        printf("Enter fourth choice (Press B for Burger, F for French Fries, P for Pizza, S for Sandwiches)\n");
        scanf(" %c", &choice4);
        printf("Enter the quantity for %c \n", choice4);
        scanf("%d", &quantity);

        switch (choice4)
        {
        case 'B':
            cost4 = quantity * priceB;
            break;
        case 'F':
            cost4 = quantity * priceF;
            break;
        case 'P':
            cost4 = quantity * priceP;
            break;
        case 'S':
            cost4 = quantity * priceS;
            break;
        default:
            printf("Invalid input \n");
        }
        total_charges = cost1 + cost2 + cost3 + cost4;
    }

    printf("Total cost is %d", total_charges);
    
    return 0;
}