/*Writing a c programming code to show the age of my family include mine.*/

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main()
{
    int daddy, mummy, venus, vesta;
    printf("Enter Daddy's age:\n");
    scanf("%d", &daddy);
    printf("Enter Mummy's age:\n");
    scanf("%d", &mummy);
    printf("Enter Venus's age:\n");
    scanf("%d", &venus);
    printf("Enter Vesta's age:\n");
    scanf("%d", &vesta);
    
    //Age of the Ogunfuwa Family in descending order
    printf("These are the ages of the Ogunfuwa's Family in descending order :\n");
    printf("Daddy is" "     %d\n", daddy);
    printf("Mummy is" "     %d\n", mummy);
    printf("Venus is" "     %d\n", venus);
    printf("Vesta is" "     %d\n", vesta);

    /*Now, let's find the average age of the Ogunfuwa's Family. Having issues with the "if" command. Will continue when I have more knowledge. We have a pending project*/
    
    char ch[5];
    double average = (daddy + mummy + venus + vesta)/4;
        printf("Would you like to know their average age ? \nEnter Yes or No\n");
    ch=getchar;
    
    
    if (ch = Yes) {
    
    printf("The average age of The Ogunfwa Family is :\n");
    printf("%.2lf", average);    
        
    }
    
    if (response[5] = "No") {
    
    printf("You have opted out of seeing the average age ");    
        
    }
    
    else {
        printf("Thank you and Goodbye");
    
    }
    return 0;
}
