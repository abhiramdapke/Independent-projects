
#include <iostream>
#include <stdlib.h>  //srand rand
#include <time.h>

using namespace std;


void randomnum()
{
    srand(time(0));
    for (int i=0;i<10;i++)
    {
        cout << rand() << " ";
    }
}

int main()
{
    //Method 1
    cout << rand()%10 << " " << endl;
    cout << (rand()%10) + 1 << " " << endl;
    
    
    //Method 2 - A guess game
    int secret,guess;
    
    srand(time(NULL));      //Initializes random seed
    
    secret = (rand()%10) + 1;
    
    do
    {
        cout << "Guess the number in 1-10 ";
        cin>> guess;
        if (secret < guess)   
            cout << "The number is lower " << endl;
        else if (secret > guess)
            cout << "The number is higher" << endl;
    }while (secret!=guess);
    
    cout << "Congratulations, you found the number. ";
    
    //Method 3 - call the function
    randomnum();
 return 0;
}
