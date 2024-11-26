#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

bool breakfast() {
    int choice;   
    cout << "ERIC, GO EAT!!" << endl
             << "You went to the kitchen to have breakfast." << endl;
    system("pause");
    system("cls");
    cout << "You have a choice what to eat:" << endl
             << "1. Pasta with cutlet" << endl
             << "2. Cucumber and ketchup sandwich" << endl
             << "3. Sweets from the windowsill and red tea" << endl
             << "Your choice: ";
    cin >> choice;
    switch (choice) {
    case 1:
        cout << "You ate a pasta with cutlet. It was very satisfying" << endl;
        system("pause");
        system("cls");
        return false;
        break;
    case 2:
        cout << "You ate a cucumber and ketchup sandwich. It wasn't really satisfying." << endl;
        system("pause");
        system("cls");
        return true;
        break;
    case 3:
        cout << "You ate a sweets from the windowsill and red tea. It wasn't satisfying at all, but it was good.";
        system("pause");
        system("cls");
        return true;
        break;
    default:
        cout << "Hmm? You have not eaten breakfast. You must be really hungry.";
        system("pause");
        system("cls");
        return true;
        break;
    }
}

void backpack() {
    int choice = 0;
    while (choice != 3) {
        cout << "Time to pack your backpack for school. But where is it?" << endl
                 << "1. In your bag" << endl << "2. Outside" << endl << "3. In the kitchen" << endl << "Your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "You looked through the bag, but you didn't find anything. Wait, what?" << endl;
            break;
        case 2:
            cout << "You didn't expect to see your backpack there at all, but you looked out the window anyway. As expected, it wasn't there." << endl;
            break;
        case 3:
            cout << "You looked in the kitchen. Bingo, that's where it was. Did you have breakfast with it?" << endl;
            system("pause");
            system("cls");
            break;
        default:
            cout << "You need to pack your backpack anyway. So, do it." << endl;
            int choice = 0;
            break;
        }
    }
}

void go_to_school(bool *hungry_ptr) {
    int choice = 0;
    cout << "Halfway to the bus stop, you realize that you've forgotten your algebra textbook." << endl
    << "If you turn around and follow it home, you'll probably miss the bus." << endl
    << "1. Turn around and follow it home." << endl << "2. Forget it and move on." << endl << "Your choice: ";
    cin >> choice;
    switch (choice) {
    case 1:
        cout << "You went home, but when you were almost at the bus stop, you saw a bus leaving."
                 << endl << "Bad ending: You're late." << endl;
        system("pause");
        exit(0);
    case 2:
        cout << "You gave up on it and went on to the bus stop." << endl;
        system("pause");
        break;
    default:
        cout << "You were stuck in thought and missed the bus. What for?" << endl
                 << endl << "Bad ending: incorrect input." << endl;
        system("pause");
        exit(0);
    }
    system("cls");
    cout << "You got on the bus. You noticed that the old woman doesn't have any change for the ticket. " << endl
             << "You just have some change, but it's your last lunch money." << endl << "1. Help an elderly woman" << endl 
             << "2. Not to help" << endl << "Your choice: ";
    cin >> choice;
    if (choice == 1){
        if (*hungry_ptr == 0){
            cout << "You helped an elderly woman but you won't starve, because you had a good breakfast in the morning." << endl;
            system("pause");
        }
        else{
            cout << "You helped an elderly woman. Now you're going to be hungry, and no one will help you like in the movies." 
                        << endl << "Bad ending: Hunger" << endl;
            system("pause");
            exit(0);
        }
    }
    else{
        cout << "You didn't help an elderly woman, which makes you feel bad." << endl
                    << "But you saved the money for lunch, so you won't have to starve." << endl;
        system("pause");
    }
    system("cls");
    cout << "As you approach the school, you see a group of high school students" << endl
             << "bullying a younger student who dropped his notebooks in a puddle." << endl
             << "1. Help him" << endl << "2. Go to class" << endl << "Your choice: ";
    cin >> choice;
    switch (choice) {
    case 1:
        cout << "You helped the younger one, but now the seniors are smacking you." << endl
                 << "They even beat you up, but no one will figure it out because it's outside the school." << endl
                 << "Bad ending: beaten up." << endl;
        system("pause");
        exit(0);
    case 2:
        cout << "You didn't help the younger one, which makes you feel guilty." << endl
                 << "Well, at least you wouldn't get beaten up..." << endl;
        system("pause");
        system("cls");
        break;
    default:
        cout << "You froze, looking at how the younger one is being bullied. Then they noticed you." << endl
                 << "Bad ending: incorrect input." << endl;
        system("pause");
        exit(0);
    }
}

void school(bool *hungry_ptr){
    int choice = 0;
    bool offended;
    cout << "You went to your first class which was algebra. It turns out that it was a test which you hadn't prepared for." << endl
    << "1. Write it yourself" << endl << "2. Ask the teacher to explain" << endl << "3. Write it off" << endl << "Your choice: ";
    cin >> choice;
    switch (choice) {
    case 1:
        cout << "You wrote the test yourself, and that made you feel proud." << endl;
        break;
    case 2:
        cout << "The teacher refused to explain the topic because it was a test right now. That's why you decided to write off. " << endl
                 << "You were more or less successful, but the teacher saw that you were cheating." << endl
                 << "He took the piece of paper from the written-off test and gave it a 2." << endl
                 << "Bad ending: failed to write off.";
        system("pause");
        exit(0);
    case 3:
        cout << "You were more or less successful, but the teacher saw that you were cheating." << endl
                 << "He took the piece of paper from the written-off test and gave it a 2." << endl
                 << "Bad ending: failed to write off.";
        system("pause");
        exit(0);
    default:
        cout << "You just sat through the entire test session. You definitely got a 2, so mom will scold you." << endl
                 << "Bad ending: incorrect input";
        system("pause");
        exit(0);
    }
    system("cls");
    cout << "After two more lessons, you went to the cafe. But Samir was stuck in the door due to the fat." << endl
             << "To get out, you need to come up with a plan how to push him out." << endl << "1. Kick him in the back" << endl
             << "2. Try to push him out gently." << endl << "3. Make fun of him." << endl << "Your choice: ";
    cin >> choice;
    switch(choice) {
        case 1:
            cout << "You hit him in the back and he fell out of the door. He landed on his tummy and hit his head." << endl
                     << "You only now see what you just did. Your classmates say thank you, but what price?" << endl 
                     << "Bad ending: went to a kids' prison";
            system("pause");
            exit(0);
        case 2:
            cout << "You pushed him out gently and went to the cafeteria to eat and to told to your classmates what just happened." << endl;
            system("pause");
            break;
        case 3:
            cout << "You laughed at him. He loocked hurt and will tell on you if he can." << endl
                     << "You'll hear a lot about how bad you were. But at least you had fun." << endl;
            offended = true;
            system("pause");
            system("cls");
            break;
        default:
            cout << "You just walked right through it. What? He looked shocked and hurt all at once." << endl;
            offended = true;
            system("pause");
            system("cls");
            break;
    }
    if (offended and *hungry_ptr == 1) {
        cout << "You offended Samir, and he decided to take revenge on you." << endl
                 << "While you were on your way to deliver the plates, Samir tripped you, causing your plate to shatter on his head." << endl
                 << "Bad ending: offended Samir";
        system("pause");
        exit(0);
    }
    cout << "The lesson started to explain a hard topic. The teacher said it was very important and we need to know it." << endl
             << "1. Listen closely" << endl << "2. Have fun with your classmates" << endl << "Your choice: ";
    cin >> choice;
    switch(choice) {
        case 1:
            cout << "You listened to the teacher. Now you know more and you won't be wrong on the test." << endl;
            system("pause");
            system("cls");
            break;
        default:
            cout << "You didn't listened to the teacher. You have a bad feeling about this." << endl;
            system("pause");
            system("cls");
            break;
    }
    while(bool progress = true) {
        cout << "A big change has come. You didn't want to watch tiktoks with Timurka, so you left him alone and went exploring." << endl
                 << "There was:" << endl << "1. Samir and Damir" << endl << "2. Artyom and Arslan" << endl << "3. Dinislam's, Artyom's, and some girls' party" << endl
                 << "0. Sit back down" << "Your choice: ";
        cin >> choice;
        if (choice == 0) {
            cout << "You sat back down with Timur and watched TikTok until the end of the recess." << endl;
            system("pause");
            system("cls");
            progress = false;
            break;            
        } else if (choice == 1) {
            cout << "You went to see Samir and Damir. They were playing Brawl Stars like always. They look like they are winning." << endl;
            system("pause");
            system("cls");      
        } else if (choice == 2) {
            cout << "You went to see what Artyom and Arslan were doing, " << endl 
            << "but the first thing you heard was a terrible joke from Arslan that made your eyes water." << endl
            << "They noticed it and asked what was wrong with you, but you said \"nevermind\" and moved away." << endl;
            system("pause");
            system("cls");
        } else if (choice == 3){
            cout << "You went to the party with Dinislam and Artyom and some girls with them." << endl 
                        <<"They were talking. You left when they noticed you." << endl;
            system("pause");
            system("cls");
        } else {
            cout << "?" << endl;
            system("pause");
            system("cls");
        }
    }
}

void go_home() { 
    int choice = 0;
    cout << "After a few more lessons, you can finally go home." << endl
         << "This time, nothing happened on the way to the bus stop." << endl;
    system("pause");
    system("cls");
    cout << "You got on the bus. You think the trip home will be boring. At least until then..." << endl
         << "The bus stops in the woods. You don't know how the town turned into the woods. The driver checks the bus." << endl;
    system("pause");
    system("cls");
    cout << "The driver fixed the bus and soon you were on your way. But then you blinked..." << endl
         << "All the people had disappeared. You are alone now. What will you do?" << endl
         << "1. Get up and walk around the bus." << endl
         << "2. Stay in your seat and wait." << endl
         << "Your choice: ";
    
    cin >> choice;
    if (choice == 1) {
        cout << "You stand up, but suddenly your vision goes dark. When you open your eyes, the bus is full of people again." << endl
             << "Confused, you sit back down. What just happened?" << endl;
    }
    system("pause");
    system("cls");
    cout << "You wake up. Yes, it turns out you were sleeping." << endl << "However, you've missed your stop, so now you'll have to walk back home." << endl;
    system("pause");
    system("cls");
}

int main() {
    // TODO: сделать вывод полученных концовок и их получение.
    bool hungry = breakfast();
    bool *hungry_ptr = &hungry;
    backpack();
    go_to_school(hungry_ptr);
    school(hungry_ptr);
    go_home();
    cout << "Finally, you're home. It was a strange day, but you survived it." << endl
             << "You changed your clothes, ate, and went to voice on Mayachny server." << endl
             << "Yes, it's a happy ending." << endl;
    system("pause");
    system("cls");
    return 0;
}