// A2 Harry Popo
#include <iostream>
#include <string>
#include <thread> // needed for sleep function
#include <chrono> // needed for sleep function
#include <cstdlib> // needed for the rand function
#include <ctime> // needed for the time function to initialize srand function
#include <conio.h> // to let the user input without having them to press enter
using namespace std;

int select_mode() {
    string gender, age;
    int difficulty;
    cout << "What is your gender? M: male; F: female" << endl;
    cout << "Please enter your answer: ";
    cin >> gender;
    while (gender != "M" && gender != "F") {
        cout << "Please enter M or F for male or female respectively: ";
        cin >> gender;
    }
    if (gender == "F") {
        difficulty = 2; // 1 represent easy, 2 represent medium, 3 represent hard, 4 represent expert, 5 represent extreme
        // Harry Popo have 2 versions of the game,
    }
    else if (gender == "M") {
        cout << "Please choose your age: if you are 17 or younger, please enter the number 17. ";
        cout << "If you are 18 or older, please enter the number 18. " << endl;
        cout << "Please enter your age category: "; /* The gender does help decide the difficulty, also the age:
        if gender is female, always the easier difficulty; if gender is male and age 18 or over, always the harder difficulty
        if gender is male and age is 17 or younger, decided randomly between easier or harder difficulty*/
        cin >> age;
        while (age != "17" && age != "18") {
            cout << "Please enter 17 if you are under 17 or enter 18 if you are 18 or older: ";
            cin >> age;
        }
        if (age == "17") { //age of participant <= 17
            srand(time(NULL));
            if ((rand() % 2) == 0) {
                difficulty = 2;
            }
            else {
                difficulty = 5;
            }
        }
        else { // age of participant >= 18
            difficulty = 5;
        }
    }
    return difficulty;
}

int tutorial_of_game(int difficulty) {
    cout << "Now, let's start the tutorial by learning the controls! The keys needed are a, w, s and d." << endl;
    this_thread::sleep_for(chrono::seconds(2));
    cout << "In the world of Magic Kingdom, you are selected to beat an evil boss." << endl;

    this_thread::sleep_for(chrono::seconds(2));
    string action;
    string attack;
    string line;
    if (difficulty == 2) {
        cout << "In order to beat the boss, you need to travel to where the boss is located." << endl;
        cout << "In order to travel, you will need a controller. Here, take this controller with you. You will find it useful." << endl;
        cout << "You may want to note that you are sitting on a magical blanket." << endl;
        cout << "The blanket would act as your transportation to the location of the boss." << endl;

        this_thread::sleep_for(chrono::seconds(7));
        cout << "The command of going up, going down (in height), going left, going right (in distance) corresponds to the w, s, a and d keys on your keyboard. " << endl;
        cout << "Let's take off and travel to the venue of fight. To take off, press the w key." << endl;
        action = getch();
        while (action != "w") {
            cout << "We can only take off by pressing w. Try again." << endl;
            action = getch();
        }
        cout << "You may feel that you are lifted up, but we have not reach the optimal height. Try pressing w a few more times." << endl;
        int countw = 0;
        while (countw < 5) {
            action = getch();
            while (action != "w") {
                cout << "Try pressing w a few more times." << endl;
                action = getch();
            }
            countw++;
            //cout << countw << endl; //This line is just for testing.
        }
        cout << "Excellent! We have reached the optimal height. However, there seems to be a bomb dropping. press d to avoid collision with the bomb." << endl;
        action = getch();
        //cout << action << endl; //So action is not printed out on the screen, requires a print out statement to print action on screen
        while (action != "d") {
            cout << "Try to press d and see what happens!" << endl;
            action = getch();
        }
        cout << "See, we made it! We avoiding possible danger. However, this isn't over yet. We have bigger danger in front of us." << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << "Oh no! You are attacked from the top! Press s to doge. Quick!" << endl;
        action = getch();
        while (action != "s") {
            cout << "Try pressing s to avoid being attacked. Quick!" << endl;
            action = getch();
        }
        cout << "Great! And a is for moving left or avoid attack. Oh, and what about attacking an enemy? Look left, you see a robot approaching?" << endl;
        cout << "Press a to specify the direction of attack." << endl;
        action = getch();
        while (action != "a") {
            cout << "Press a to attack leftwards!" << endl;
            action = getch();
        }
        cout << "Now, to attack, enter the command line [go weapon go!] without the square brackets. Press enter after you entered your command line." << endl;
        getline(cin, line);
        while (line != "go weapon go!") {
            cout << "enter the phrase [go weapon go!] with exclamation mark but without square brackets. Press enter after you entered your command line." << endl;
            getline(cin, line);
        }
        cout << "You have completed the tutorial. You should have better idea of how to play the game. Good luck!" << endl;
        // Move on to gameplay stage
    }
    // Please ignore my horrible description on situation or technical terms of Harry Potter, as I have not read the book or watched the movie before.
    else if (difficulty == 5) {
        cout << "In order to beat the boss, you need to travel to where the boss is located." << endl;
        cout << "In order to travel, you will need a controller. Here, take this controller with you. You will find it useful." << endl;
        cout << "You may want to note that you are standing on a magical broom." << endl;
        cout << "The broom would act as your transportation to the location of the boss." << endl;
        this_thread::sleep_for(chrono::seconds(7));
        cout << "The command of going up, going down (in height), going left, going right (in distance) corresponds to the w, s, a and d keys on your keyboard. " << endl;
        cout << "Let's take off and travel to the venue of fight. To achieve that, press the w key." << endl;
        action = getch();
        while (action != "w") {
            cout << "We can only take off by pressing w. Try again." << endl;
            action = getch();
        }
        // This part differs with difficulty = 2.
        cout << "You might feel that you are lifted up, as well as your butt and your bottom hurts a bit." << endl;
        cout << "That's because the broom is pushing upwards, being in contact with your butt." << endl;
        cout << "it is the price that you will have to pay. You are a warrior after all, so focus on preparing the fight!" << endl;
        /* I cannot justify on such act so that's what I will have to resort to */
        cout << "You may feel that you are lifted up, but we have not reach the optimal height. Try pressing w a few more times." << endl;
        int countw = 0;
        while (countw < 5) {
            action = getch();
            while (action != "w") {
                cout << "Try pressing w a few more times." << endl;
                action = getch();
            }
            countw++;
            //cout << countw << endl; //This line is just for testing.
        }
        cout << "I know it hurts, but there's nothing that can be done. Just ignore the pain." << endl;
        cout << "Excellent! We have reached the optimal height. However, there seems to be a bomb dropping. press d to avoid collision with the bomb." << endl;
        action = getch();
        //cout << action << endl; //So action is not printed out on the screen, requires a print out statement to print action on screen
        while (action != "d") {
            cout << "Try to press d and see what happens!" << endl;
            action = getch();
        }
        cout << "See, we made it! We avoiding possible danger. However, this isn't over yet. We have bigger danger in front of us." << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << "Oh no! You are attacked from the top! Press s to doge. Quick!" << endl;
        action = getch();
        while (action != "s") {
            cout << "Try pressing s to avoid being attacked. Quick!" << endl;
            action = getch();
        }
        cout << "Great! And a is for moving left or avoid attack. Oh, and what about attacking an enemy? Look left, you see a robot approaching?" << endl;
        cout << "Press a to specify the direction of attack." << endl;
        action = getch();
        while (action != "a") {
            cout << "Press a to attack leftwards!" << endl;
            action = getch();
        }
        cout << "Now, to attack, enter the command line [Joba is handsome!] without the square brackets. Press enter after entering the command line." << endl;
        getline(cin, line);
        while (line != "Joba is handsome!") {
            cout << "enter your command line [Joba is handsome!] with exclamation mark but without square brackets. Press enter after entering your command line." << endl;
            getline(cin, line);
        }
        cout << "You have completed the tutorial. You should have better idea of how to play the game. Good luck!" << endl;
        // Move on to gameplay stage
    }

    return 0;
}

//int bossattack(int healthboss, int healthplayer);

//int playerattack(int healthboss, int healthplayer, string action);



int playerattack(int healthboss, int healthplayer, string action, int difficulty) {
    //How would player attack
    /* 1. cout the direction needed
    2. player inputs something
    3. if the input matches with required direction, inputed commandline is valid
    4. if inputted direction not matches, inputted commandline is not valid
    5. if commandline is valid, each input of commandline would take away boss's health\
    6. required direction changes for every 5 seconds
    */
    /* Bug in boss fight: In the tutorial, user is prompted to input letters without the need of newline, and
    the command line (without specifying that newline, aka enter is needed. However, the boss fight requires the user
    to enter newline even if the user is going to specify the direction. Maybe that can be changed so that
    the user does not need to press newline after entering a, s, w or d?
    */
    time_t counttime = time(NULL);
    string line;
    // Separate the parts of go weapon go and Joba is handsome
    while (healthboss > 0 && (time(NULL) - counttime <= 80)) {
        //time_t counttime = time(NULL);
        if (time(NULL) - counttime <= 20 ) {
            if (action != "w" && (time(NULL) - counttime < 25)) {
                cout << "The boss is on top of you! press w to have your attack aimed at the boss!" << endl;
                action = getch(); //This block of code for action = w works, player no need to press enter when entering its action
                //getline(cin, line);
                while (action != "w" && (time(NULL) - counttime < 25)) {
                    action = getch();
                }
                // now action = w
                cout << "Type your command line to attack" << endl;
            }
            // The condition of activating health loss is that action matches with direction
            getline(cin, line);
            if (difficulty == 2) {
                while (line != "go weapon go!" && (time(NULL) - counttime < 25)) {
                    getline (cin, line);
                }
            }
            else if (difficulty == 5) {
                while (line != "Joba is handsome!" && (time(NULL) - counttime < 25)) {
                    getline (cin, line);
                }
            }
            healthboss -= 500;
            //cout << healthboss << endl;
        }
        else if (time(NULL) - counttime <= 40 && time(NULL) - counttime >= 20) {
            if (action != "d" && (time(NULL) - counttime < 45)) {
                cout << "The boss is on your right! press d to have your attack aimed at the boss!" << endl;
                action = getch();
                while (action != "d" && (time(NULL) - counttime < 45)) {
                    action = getch();
                }
                // now action = d
                cout << "Type your command line to attack" << endl;
            }
            // The condition of activating health loss is that action matches with direction
            getline(cin, line);
            if (difficulty == 2) {
                while (line != "go weapon go!" && (time(NULL) - counttime < 45)) {
                    getline (cin, line);
                }
            }
            else if (difficulty == 5) {
                while (line != "Joba is handsome!" && (time(NULL) - counttime < 45)) {
                    getline (cin, line);
                }
            }
            healthboss -= 500;
            //cout << healthboss << endl;
        }
        else if ((time(NULL) - counttime <= 60) && (time(NULL) - counttime >= 40)) {
            if (action != "s" && (time(NULL) - counttime < 65)) {
                cout << "The boss is below you! press s to have your attack aimed at the boss!" << endl;
                action = getch();
                while (action != "s" && (time(NULL) - counttime < 65)) {
                    action = getch();
                }

                // now action = s
                cout << "Type your command line to attack" << endl;
            }
            // The condition of activating health loss is that action matches with direction
            getline(cin, line);
            if (difficulty == 2) {
                while (line != "go weapon go!" && (time(NULL) - counttime < 65)) {
                    getline (cin, line);
                }
            }
            else if (difficulty == 5) {
                while (line != "Joba is handsome!" && (time(NULL) - counttime < 65)) {
                    getline (cin, line);
                }
            }
            healthboss -= 500;
            //cout << healthboss << endl;
        }
        else if (time(NULL) - counttime <= 80 && time(NULL) - counttime >= 60) {
            if (action != "a" && (time(NULL) - counttime < 85)) {
                cout << "The boss is on your left! press a to have your attack aimed at the boss!" << endl;
                action = getch();
                while (action != "a" && (time(NULL) - counttime < 85)) {
                    action = getch();
                }
                // now action = a
                cout << "Type your command line to attack" << endl;
            }
            // The condition of activating health loss is that action matches with direction
            getline(cin, line);
            if (difficulty == 2) {
                while (line != "go weapon go!" && (time(NULL) - counttime < 85)) {
                    getline (cin, line);
                }
            }
            else if (difficulty == 5) {
                while (line != "Joba is handsome!" && (time(NULL) - counttime < 85)) {
                    getline (cin, line);
                }
            }
            healthboss -= 500;
            //cout << healthboss << endl;
        }
        // This function will run indefinitely, if the user did not submit (press enter) what they type

    }
    int resultdamage;
    if (healthboss <= 0) {
        //cout << "You win!" << endl;
        resultdamage = 12000; // 12000 is the starting health for the boss
    }
    else {
        //cout << "You lost!" << endl;
        resultdamage = 12000 - healthboss;
    }
    return resultdamage;
}

int gameplay(int difficulty) {
    int result;
    cout << "The fight shall begin!" << endl;
    /* have the user to input a, w, s or d to determine
    attack is done by entering the command line (go weapon go! or Joba is handsome!, depending on difficulty)
    each input of command line would attack once
    win when the boss's health drops to or below zero, loses if your health drops to or below zero
    */
    int healthboss = 12000, healthplayer = 10000;

    cout << "You have 10000 health. Unfortunately, the boss seems to have more health than you. Remember how to attack? Good luck! Boss fight starts in 3... 2... 1..." << endl;
    this_thread::sleep_for(chrono::seconds(3));
    //get current time
    // attack on player done every 2 seconds
    time_t startgame = time(NULL);
    string action = "n", line, commandline = "n";
    int scorehealth, scoredamage, finalscore;
    // If we are using thread, this is where we will put the function call
    /* What if we don't use thread. Instead, the bossaction function would be transformed into a formula of score.
    The formula is, 10000 - time elapsed * 250, so for each second pass, 250 points is deducted.
    So, there is no need to deduct 500 points per 2 second, and the scoring would be done by formula calculation.
    After 40 seconds passed, player automatically loses the game.
    */

    /* I did not use thread is because I have not figure out how to return the score from the thread function to the gameplay function.
    I then found out that there need to be some use of other tools to return a value from the thread function.
    Also is because when I use thread, both functions need to terminate together when one of the function reaches the requirement of breaking out of the while loop.
    In other words, I cannot wait till both function terminates naturally. And I seems not be able to figure out how to achieve it.
    */
    scoredamage = playerattack (healthboss, healthplayer, action, difficulty);
    cout << time(NULL) - startgame << endl;
    if (time(NULL) - startgame < 83) {
        if (10000 - ((time(NULL) - startgame) * 125) > 0) {
            scorehealth = 10000 - ((time(NULL) - startgame) * 125);
        }
        else {
            scorehealth = 100;
        }
    }
    else {
        scorehealth = 0;
    }
    finalscore = scorehealth + scoredamage;

    //cout << difficulty << endl; // just for testing
    cout << "Your score is " << finalscore << "." << endl;
    //
    return finalscore;
}




int gameend(int finalscore, int difficulty) {
    if (finalscore > 12000) { // winning the game
        cout << "Congratulations! You win the boss fight!" << endl;
        cout << "Thank you for participating in this activity! Hope you enjoy your life in university!" << endl;
    }
    else {
        cout << "You lost. Time for punishment." << endl;
        /* Questions: // Mostly yes/no questions
        // I forgot the questions asked for the most part
        1. Who is your best friend in Ocamp? (3)
        2. Do you think your GPA will exceed 3.00? (5)
        3. Do you like any girls/boys in Ocamp? (1)
        // Note that I am trying to not use phrases used in Ocamp unless needed, as explanation is not available throughout the game
        // but in comments it is okay
        4. What major would you like to get in? (not for 5)
        5. Which activity do you like the most in Ocamp? (not for 5)
        6. What is the name of your Joba?
        7. What is the name of your Joma? (for difficulty 5, combine 6 and 7) (2)
        8. Why did you join this Ocamp? (4)
        //They have a script, so the questions are likely to be in fixed order, no need to randomize
        //I am going to do randomize in my next program, First Impression
        Not going to do questions that cannot be rebutted for difficulty 5, except for those that I can remember

        Note that for difficulty = 5, the trial is NOT a method of Joba/Joma/ ocamp holders to know you more;
        instead, it is more like a trial to /* crush your self-esteem.  */
        /*
        The close interval and the high amount of Harry Popo held has to be taken in consideration when evaluating the goal;
        However, it could be that to let your ocamp groupmates to know you more, as some would have only seen 1-2 and some have seen 10+ games,
        which is much more memorable than the 50+ games in a night (each group has around 10 people and therewas 6 groups)

        conditions:
        Time limit: yes/no/maybe question 5 seconds, other question 15 seconds (first priority)
        Yes/no/maybe questions: does not accept maybe, find rebuttal for yes/no if possible
        open-ended questions: no rebuttals except for the major one, but does not accept forgot/does not remember etc.

        */

        string answer;
        if (difficulty == 2) { // like normal Q&A
            cout << "Question 1. Do you like any groupmate of opposite sex in Ocamp? Answer: " << endl;
            getline(cin, answer);
            cout << "Question 2. What is the name of your Joma and Joba? Answer: ";
            getline(cin, answer);
            cout << "Question 3. Who is your best friend in Ocamp? Answer: ";
            getline(cin, answer);
            cout << "Question 4. Why did you join this Ocamp? Answer: ";
            getline(cin, answer);
            cout << "Question 5. Do you think your first year GPA will exceed 3.00? Answer: ";
            getline(cin, answer);
            cout << "Question 6. What major do you want to get in? Answer: ";
            getline(cin, answer);

        }
        else if (difficulty == 5) { //100% being beaten
            cout << "The trial begins." << endl;
            cout << "Question 1: Do you like any girls in Ocamp? Answer: "; //difficulty 5 is only for boys
            //time
            time_t trialtimer = time(NULL);
            getline(cin, answer);
            if (time(NULL) - trialtimer >= 5) {
                cout << "What are you thinking? Why is this taking so long?" << endl; //Only male aged 18 or above would play in this difficulty
            }
            else if (answer.find("maybe") != -1 || answer.find("Maybe") != -1 || answer.find("not sure") != -1 || answer.find("don't know") != -1 || answer.find("idk") != -1) { // "Maybe or maybe is found in answer
                cout << "Why are you not sure about it? How can you be not sure?" << endl;
            }
            else if (answer.find("yes") != -1 || answer.find("Yes") != -1 || answer.find("Yeah") != -1 || answer.find("yeah") != -1) {
                cout << "What? You like someone? In ocamp?" << endl;
            }
            else if (answer.find("no") != -1 || answer.find("No") != -1) {
                cout << "Do you not like girls? If yes, why not someone in Ocamp?!" << endl;
            }
            else {
                cout << "Pass." << endl;
            }
            cout << "Question 2. What is the name of your Joma and Joba? Answer: ";
            trialtimer = time(NULL);
            getline(cin, answer);
            if (time(NULL) - trialtimer >= 8) {
                cout << "What are you thinking? Why is this taking so long?" << endl;
            }
            else if (answer.find("maybe") != -1 || answer.find("Maybe") != -1 || answer.find("not sure") != -1 || answer.find("don't know") != -1 || answer.find("idk") != -1) {
                cout << "What? How DARE you forget Joma or Joba's name? Beat him up!" << endl;
            }
            else {
                cout << "Pass." << endl;
            }
            // How to test that a string contains some phrases? by using str.find("text") for string containing a phrase text

            cout << "Question 3. Who is your best friend in Ocamp? Answer: ";
            trialtimer = time(NULL);
            getline(cin, answer);
            if (time(NULL) - trialtimer >= 12) {
                cout << "What are you thinking? Why is this taking so long?" << endl; //Only male aged 18 or above would play in this difficulty
            }
            else if (answer.find("not sure") != -1 || answer.find("don't know") != -1 || answer.find("idk") != -1) { // "Maybe or maybe is found in answer
                cout << "Why are you not sure about it? How can you be not sure?" << endl;
            }
            else {
                cout << "Pass." << endl;
            }

            cout << "Question 4. Why did you join this Ocamp? Answer: ";
            trialtimer = time(NULL);
            getline(cin, answer);
            if (time(NULL) - trialtimer >= 12) {
                cout << "What are you thinking? Why is this taking so long?" << endl; //Only male aged 18 or above would play in this difficulty
            }
            else if (answer.find("not sure") != -1 || answer.find("don't know") != -1 || answer.find("idk") != -1) { // "Maybe or maybe is found in answer
                cout << "Why are you not sure about it? How can you be not sure?" << endl;
            }
            else {
                cout << "Pass." << endl;
            }

            cout << "Question 5. Do you think your first year GPA will exceed 3.00? Answer: ";
            trialtimer = time(NULL);
            getline(cin, answer);
            if (time(NULL) - trialtimer >= 5) {
                cout << "What are you thinking? Why is this taking so long?" << endl; //Only male aged 18 or above would play in this difficulty
            }
            else if (answer.find("maybe") != -1 || answer.find("Maybe") != -1 || answer.find("not sure") != -1 || answer.find("don't know") != -1 || answer.find("idk") != -1) { // "Maybe or maybe is found in answer
                cout << "Why are you not sure about it? How can you be not sure?" << endl;
            }
            else if (answer.find("yes") != -1 || answer.find("Yes") != -1 || answer.find("Yeah") != -1 || answer.find("yeah") != -1) {
                cout << "What? How can you be so confidence about your studies? What if you struggle to adapt to University life?" << endl;
            }
            else if (answer.find("no") != -1 || answer.find("No") != -1) {
                cout << "How can you have low confidence to yourself? You should know that anything can happen!" << endl;
            }
            else {
                cout << "Pass." << endl;
            }

            cout << "Question 6. What major do you want to get in? Answer: ";
            trialtimer = time(NULL);
            getline(cin, answer);
            if (time(NULL) - trialtimer >= 8) {
                cout << "What are you thinking? Why is this taking so long?" << endl; //Only male aged 18 or above would play in this difficulty
            }
            else if (answer.find("not sure") != -1 || answer.find("don't know") != -1 || answer.find("idk") != -1) { // "Maybe or maybe is found in answer
                cout << "Why are you not sure about it? How can you be not sure?" << endl;
            }
            else if (answer.find("EEE") != -1 || answer.find("EE") != -1 || answer.find("ElecE") != -1 || answer.find("lectrical") != -1 || answer.find("lectronic") != -1) {
                cout << "Good choice! /* This is not my opinion (by the maker of this program) */" << endl;
            }
            else {
                cout << "You should consider choosing Electrical or Electronic Engineering! /* This is not my opinion (by the maker of this program) */" << endl;
            }
        }
        cout << "This is the end of this activity. Thanks you for participating and hope you enjoy your life in university!" << endl;
    }
    return 0;
}

int harry_popo() {
    int mode, finalscore;
    mode = select_mode();
    tutorial_of_game(mode);
    finalscore = gameplay(mode);
    gameend(finalscore, mode);
    return 0;
}



int main() {
    harry_popo();
    return 0;
}
// Remember that when calling functions, its type should not be specified.

