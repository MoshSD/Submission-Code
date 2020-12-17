#include <iostream>
//including windows.h is for the waiting
#include <windows.h>
using namespace std;

char cardArray[10] = { 'A','E','D','B','C','A','B','D','E','C' };
bool cardsFound[10] = { false };


int attemptCount = 0;

int initBoard() 
{
    system("cls");
    cout << "Number of attempts: " << attemptCount << endl;

    for (int i = 0; i < 10; i++)
    {
        if (cardsFound[i])
        {
            cout << "[" << cardArray[i] << "]";
        }
        else
        {
            cout << "[" << i + 1 << "]";
        }

        
        if (i == 4)
        {
            cout << endl;
        }
        
    }

    cout << endl;
    return(0);
}

int updateBoard(int guess1, int guess2)
{
    system("cls");
    cout << "Number of attempts: " << attemptCount << endl;

    for (int i = 0; i < 10; i++)
    {
        if (cardsFound[i] or i + 1 == guess1 or i + 1 == guess2)
        {
            cout << "[" << cardArray[i] << "]";
        }
        else
        {
            cout << "[" << i + 1 << "]" << " ";
        }

        if (i == 4)
        {
            cout << endl;
        }

    }

    return(0);
}

int main()
{
    bool playing = true;
    int score = 0;
    while (playing == true)
    {
        initBoard();
        int guess1;
        int guess2;

        cout << "What is your first guess? (1-10)" << endl;
        cin >> guess1;
        updateBoard(guess1,0);
        cout << endl;
        cout << "What is your second guess? (1-10)" << endl;
        cin >> guess2;
        updateBoard(guess1, guess2);
        Sleep(3000);

        if (cardArray[guess1 - 1] == cardArray[guess2 - 1] && guess1 != guess2)
        {
            cout << "Match!" << endl;
            cardsFound[guess1 - 1] = true;
            cardsFound[guess2 - 1] = true;
            score++;
            Sleep(5000);

        }
        else
        {
            cout << "Not a match!" << endl;
            Sleep(5000);
        }

        attemptCount++;
        if (score == 5)
        {
            cout << "You have won the game!" << endl;
            Sleep(3000);
        }
      
    }

    



}
