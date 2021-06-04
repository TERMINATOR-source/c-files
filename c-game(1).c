#include<stdio.h>
#include<math.h>
#include<time.h>
void playgame()
{
    int a;
    int upper = 100, lower = 0, count=0;
    srand(time(0));
    int num = (rand() % (upper-lower+1)) + lower;
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d",&a);
        if(a >= num + 5)
        {
            printf("enter lower number try again:\n");
            count++;
        }
        if(a > num - 5 && a < num + 5)
        {
            if(a==num){
                goto x;
            }
            printf("you are very close to the number:\n");
            count++;
        }
        if(a <= num - 5)
        {
            printf("enter higher number try again:\n");
            count++;
        }
        x:if(a==num)
        {
            printf("you guessed the correct number! you won the game\n");
            printf("it took you %d chances to win the game\n",count);
            printf("The number was %d",a);
            break;
        }
    }
}
int main()
{
    char ch;
    while(1)
    {
        printf("Welcome to the game\n");
        printf("here is how to play it\n");
        printf("1. guess a number\n");
        printf("2. if the you guessed higher than the actual number you will get a prompt\n");
        printf("3. similarly if the you guessed lower than the actual number you will get a prompt\n");
        printf("4. finally if the you guessed the actual number you will get a prompt that will tell you how many attempts it took for you\n");
        printf("5.Numbers are between 1 to 100\n");
        printf("Press Enter to continue...");
        scanf("%c",&ch);
        if(ch==10){
            break;
        }
    }
    system("cls");
    playgame();
    return 0;
}

