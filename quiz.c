#include <stdio.h>
#include <stdlib.h>
void main()
{
int choice = 0;  
    printf("  Please enter 1 to start the game \n ");   
    printf(" Please enter 2 to seek help \n ");  
    printf(" Please enter 0 to exit \n ");  
    printf(" Enter your choice: ");  
    scanf( "%d", &choice );
    switch(choice)
    {
        case 1:
        start();
        break;
        case 2:
        help();
        break;
        default:
        exit(1);
        break;

    }  
    getch();   
}
void help()
{
     int ch;    
    
    printf( " Instructions that are supposed to be followed \n" );   
    printf("while playing this game: \n " );  
    printf("Quiz Game in C\n " );  
     printf( "You are supposed to answer 10 questions in this game !! \n" );    
     printf( "There will be 4 options given for each questions.\n" );    
     printf( " For each correct answer, you will be awarded with 5 points !!\n " );    
       
     printf( " As soon as you answer a question, you will be directed to the next question.\n " );    
     printf( " If your answer is wrong, no marks will be deducted from your score !! \n" );    
    
    printf( "\n\n !! Wish you all the best !! \n\n " );    
     printf( "\n Do you still wish to continue playing ? \n If yes, then press 1. Else, press 0 :  " );    
    scanf( "%d", &ch );   
     if( ch == 1 )    
    {    
        start();    
    }    
     else    
    {    
        exit(1);    
    }    
     
}
void start()    
{
    int ans;  
    int score;
    char name;
    int count=0;

    printf("Enter your name");
    scanf("%s",name);
    printf("Welcome %s in the game",name);

    printf("Question 1:What city is known as The Eternal City? \n 1.Rome \t 2.Italy \t 3.Norway \t 4.New York\n");
    scanf("%d", &ans);    
     if( ans == 1 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n ");  
        count=count+1;  
    }   
    else    
    {    
        printf(" The answer that you have entered is wrong.\nThe correct answer is Rome\n");    
    } 

    printf("Question 2:Which planet has the most moons?\n1.Jupiter\t2.Uranus\t3.Saturn\t4.Neptune\n");
    scanf("%d", &ans);    
     if( ans == 3 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n ");  
        count=count+1;  
    }   
    else    
    {    
        printf(" The answer that you have entered is wrong.\nThe correct answer is Saturn\n");
    }

    printf("Question 3:What artist has the most streams on Spotify? \n 1.Drake\t2.BTS\t3.Blackpink\t4.Taylor Swift\n");
    scanf("%d", &ans);    
     if( ans == 1 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n ");  
        count=count+1;  
    }   
    else    
    {    
        printf(" The answer that you have entered is wrong.\nThe correct answer is Drake\n");
    }

    printf("Question 4:How many bones do we have in an ear?\n 1.5\t 2. 3\t 3. 7\t4.10\n");
    scanf("%d", &ans);    
     if( ans == 2 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n ");  
        count=count+1;  
    }   
    else    
    {    
        printf(" The answer that you have entered is wrong.\nThe correct answer is 3\n");
    }

    printf("Question 5:What country has won the most World Cups?\n1.Argentina\t2.Portugal\t3.Brazil\t4.South Korea\n"); 
     scanf("%d", &ans);    
     if( ans == 3 )    
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n ");  
        count=count+1;  
    }   
    else    
    {    
        printf(" The answer that you have entered is wrong.\nThe correct answer is Brazil\n");
    }

    printf("Question 6 :What is the 4th letter of the Greek alphabet?\n 1.Alpha\t2.Beta\t3.Gamma\t4.Delta\n");
    scanf("%d", &ans);    
     if( ans == 4 )   
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n ");  
        count=count+1;  
    }   
    else    
    {    
        printf(" The answer that you have entered is wrong.\nThe correct answer is Delta\n");
    }

    printf("Question 7 :Which is India first super computer?\n 1.Param8000\t2.Param80000\t3.Param800\t4.Param8\n");
    scanf("%d", &ans);    
     if( ans == 1 )   
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n ");  
        count=count+1;  
    }   
    else    
    {    
        printf(" The answer that you have entered is wrong.\nThe correct answer is Param8000\n");
    }

    printf("Question 8 : Which is largest island in the world?\n1.New Guinea\t2.Andaman Nicobar\t3.Greenland\t4.Hawaii\n");
    scanf("%d", &ans);    
     if( ans == 3 )   
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n ");  
        count=count+1;  
    }   
    else    
    {    
        printf(" The answer that you have entered is wrong.\nThe correct answer is Greenland\n");
    }

    printf("Question 9 : Where did the Olympics originally start?\n 1.America\t2.Great Britain\t3.Greece\t4.Australia\n");
    scanf("%d", &ans);    
     if( ans == 3 )   
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n ");  
        count=count+1;  
    }   
    else    
    {    
        printf(" The answer that you have entered is wrong.\nThe correct answer is Greece\n");
    }

    printf("Question 10:In what year were the first Air Jordan sneakers released?\n 1. 1983\t 2. 1984\t 3.1985\t 4.1986\n");
    scanf("%d", &ans);    
     if( ans == 2 )   
    {    
        printf(" Your answer is absolutely correct \n ");   
        printf(" You score 5 points !! \n ");  
        count=count+1;  
    }   
    else    
    {    
        printf(" The answer that you have entered is wrong.\nThe correct answer is 1984\n");
    }
        
        
        printf(" You have scored %d points \t \n", count * 5 );    
        printf(" Thank you for your interest !! \n");
    


} 
