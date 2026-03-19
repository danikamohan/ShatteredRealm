#include <iostream>
#include <string>
#include "player.h"
using namespace std;

int main () {
    
    string playerName;
    string playerWeapon;
    char answerOne;
    char answerTwo;
    char answerThree;
    char answerFour;
    char playAgain;
    
    do {
        cout << "Welcome to the Shattered Realm!\n"
        << "\n----------------------------------------------------------------------\n"
        << "In this game, you are the soldier that helps the princess\n"
        << "save the queen's life after barely surviving an ogre attack\n"
        << "it is up to you to accompany the princess to find a cure!\n"
        << "What is your name soldier?\n";
        cin >> playerName;
        cout << "Greetings soldier " << playerName << ", my name is Princess\n"
        << "Vani and I heard you were my father's best soldier.\n"
        << "The kingdom greatly needs your help. During the ogre's war, the\n"
        << "queen was struck and is on the cusp of life and death.\n"
        << "The only thing that will save her life is an enchanted potion\n"
        << "from a witch in the enchanted forest.\n"
        << "Will you help me on this journey?\n"
        << "\n----------------------------------------------------------------------\n"
        << "Select your response:\n"
        << "a. Yes, of course.\n"
        << "b. No, choose someone else!\n"
        << "\n----------------------------------------------------------------------\n";
        cin >> answerOne;
        if (answerOne == 'b') {
            cout << "It is clear you were not ready for this honorable task.\n";
            break;
        }
        else {
            cout << "Thank you " << playerName << ", you will help save the queen!\n"
            << "Now, we are going on an adventure that might be dangerous, so\n"
            << "which weapon do you prefer?\n"
            << "\n----------------------------------------------------------------------\n"
            << "Select your response:\n"
            << "a. Sword\n"
            << "b. Bow and arrows\n"
            << "c. Dagger\n"
            << "\n----------------------------------------------------------------------\n";
            cin >> answerTwo;
        }
        if (answerTwo == 'a') {
            cout << "Excellent choice! Oh no! There are some intruders right outside\n"
            << "the castle! We need to leave so we must fight them!\n"
            << "-- You rush towards the bandits and get ready to attack. They pull out\n"
            << "swords and bow and arrows. You stab one of them in the back and\n"
            << "defend yourself from another. You are able to fight off the three\n"
            << "men with your blade--\n"
            << "Thank you " << playerName << ", now lets go to the forest.\n"
            << "-- To get to the witch's hut, you have two paths through the forest.--\n"
            << "Which path do you take? (keep in mind the queen is getting weaker by\n"
            << "the minute)\n"
            << "\n----------------------------------------------------------------------\n"
            << "Select your response:\n"
            << "a. short (but risky)\n"
            << "b. long (but less risky)\n"
            << "\n----------------------------------------------------------------------\n";
            cin >> answerThree;
            if (answerThree == 'a') {
                cout << "Wise choice! Let's go!\n"
                << "--You set on the journey through the enchanted forest. In one of\n"
                << "the bushes, a troll jumps out at you. You quickly swiped at him\n"
                << "with your sword and erased the danger--\n"
                << "Thanks for saving me! I think we are almost at the witch hut!\n"
                << "--The princess is begging the mean old witch to help but she\n"
                << "refuses and becomes angry. It turns out, the witch sent the ogres\n"
                << "in the first place! She wanted the kingdom to crumble because the\n"
                << "king did not accept her proposal! She conjures up balls of fire!\n"
                << "You have to save the princess! How do you save her?\n"
                << "\n----------------------------------------------------------------------\n"
                << "Select your response:\n"
                << "a. shield the balls of fire\n"
                << "b. throw your sword at the witch's head\n"
                << "\n----------------------------------------------------------------------\n";
                cin >> answerFour;
                if (answerFour == 'a') {
                    cout << "--You use your sword and shield the princess. The fire\n"
                    << "bounces back and hits the witch. She falls to her demise!\n"
                    << "Princess Vani grabs the potion she needed. You both make\n"
                    << "it safely back to the castle and the queen drinks the\n"
                    << "potion and survives! The royal family thank you for your\n"
                    << "kindness and give you a medal of honor and a chest of gold!--\n"
                    << "--MISSION SUCCESSFUL--\n";
                }
                else if (answerFour == 'b') {
                    cout << "--You throw your sword at the witch's head with all your\n"
                    << "might. Unfortunately, it misses and hits the wall behind her.\n"
                    << "She uses her powers and strikes you and the princess and you\n"
                    << "both fall to your demise.--\n"
                    << "--MISSION FAILED--\n";
                    break;
                }
                else {
                    cout << "Incorrect input. Please try again.\n";
                }
            }
        }
        else if (answerTwo == 'b') {
            cout << "Excellent choice! Oh no! There are some intruders right outside\n"
            << "the castle! We need to leave so we must fight them!\n"
            << "-- You rush towards the bandits and get ready to attack. They pull out\n"
            << "swords and bow and arrows. You step back and aim at one, and as the\n"
            << "other fires, you dodge the arrow and hit another one in the back.\n"
            << "You are able to fight off the three men--\n"
            << "Thank you " << playerName << ", now lets go to the forest.\n"
            << "-- To get to the witch's hut, you have two paths through the forest.--\n"
            << "Which path do you take? (keep in mind the queen is getting weaker)\n"
            << "\n----------------------------------------------------------------------\n"
            << "Select your response:\n"
            << "a. short (but risky)\n"
            << "b. long (but less risky)\n"
            << "\n----------------------------------------------------------------------\n";
            cin >> answerThree;
            if (answerThree == 'a') {
                cout << "--You set on the journey through the enchanted forest. In one of\n"
                << "the bushes, a troll jumps out at you. You try to whip out your bow\n"
                << "but there is simply not enough time, the troll captures you and\n"
                << "the princess is left alone in the forest.--\n"
                << "--MISSION FAILED--\n";
                break;
            }
            else {
                cout << "--You set on the journey through the enchanted forest. The\n"
                << "journey is long and tiring, but you successfully guide the\n"
                << "princess to the witch hut. The princess is begging the\n"
                << "mean old witch to help but she refuses and becomes angry.\n"
                << "It turns out, the witch sent the ogres in the first place!\n"
                << "She conjures up balls of fire!--\n"
                << "You have to save the princess! How do you save her with your bow?\n"
                << "\n----------------------------------------------------------------------\n"
                << "Select your response:\n"
                << "a. aim at the balls of fire\n"
                << "b. aim at the witch's head\n"
                << "c. aim at the princess to warn her\n"
                << "\n----------------------------------------------------------------------\n";
                cin >> answerFour;
                if (answerFour == 'a') {
                    cout << "--You shoot an arrow at the flying balls of fire. The arrow\n"
                    << "goes right through them and the princess is struck. You are\n"
                    << "sent to prison for eternity for murder of royal blood.--\n"
                    << "--MISSION FAILED--\n";
                    break;
                }
                else if (answerFour == 'b') {
                    cout << "--You shoot an arrow at the witch's head. She falls to her\n"
                    << "demise! Princess Vani grabs the potion. You both make it safely\n"
                    << "back to the castle and the queen survives! The royal family\n"
                    << "give you a medal of honor and a chest of gold!--\n"
                    << "--MISSION SUCCESSFUL--\n";
                }
                else if (answerFour == 'c') {
                    cout << "--You shoot an arrow at Princess Vani's head to warn her.\n"
                    << "She does not see it coming and is struck. You are sent to\n"
                    << "prison for eternity for murder of royal blood.--\n"
                    << "--MISSION FAILED--\n";
                    break;
                }
                else {
                    cout << "Incorrect input. Please try again.\n";
                }
            }
        }
        else if (answerTwo == 'c') {
            cout << "Interesting choice...oh no! There are some intruders right outside\n"
            << "the castle! We need to leave so we must fight them!\n"
            << "-- You rush towards the bandits and get ready to attack. They pull out\n"
            << "swords and bow and arrows. You try to defend yourself but they are too\n"
            << "strong. As you try to stab one of the thieves in the back with your\n"
            << "dagger...another takes an arrow at your hand. You fall to your knees\n"
            << "in despair. They capture the princess and leave you to bleed out!--\n"
            << "--MISSION FAILED--\n";
            break;
        }
        else {
            cout << "Incorrect input. Please try again.\n";
        }

        cout << "\nWould you like to play again?\n"
        << "\n----------------------------------------------------------------------\n"
        << "a. yes please!\n"
        << "b. no thanks!\n"
        << "\n----------------------------------------------------------------------\n";
        cin >> playAgain;

    } while (playAgain == 'a');

    cout << "\nThanks for playing the Shattered Realm!\n";
    return 0;
}
