#include <iostream>
#include <thread>
#include <chrono>
#include <string>
#include <fstream>
using namespace std;
// THis is the 1st file of Project3EO, 3EO = EEE Ocamp

void choose_activity(int count_choice2) {
    string choice_activity;
    cout << "Here are the list of activities. Select an activity by inputting the corresponding number." << endl;
    cout << "1. Loop of names; 2. Harry Popo; 3. First Impression." << endl;
    cout << "Please input your choice: ";
    cin >> choice_activity;
    while (choice_activity != "1" && choice_activity != "2" && choice_activity != "3") {
        cout << "Here are the list of choices: 1. Loop of names; 2. Harry Popo; 3. First Impression. Please input your choice: ";
        cin >> choice_activity;
    }
    ifstream fin;
    if (choice_activity == "1") {
        // to open the file containing the program for activity 1
        fin.open("A1_Loop_of_names.txt");
        if (fin.fail()) {
            cout << "Error in opening A1" << endl;
            exit(1);
        }
        string line;
        cout << endl;
        while (getline(fin, line)) {
            if (line == "") {
                this_thread::sleep_for(chrono::seconds(3));
            }
            cout << line << endl;
        }
        fin.close();
    }
    else if (choice_activity == "2") {
        if (count_choice2 == 0) {
            fin.open("A2_Harry_Popo_1st_time.txt");
        }
        else {
            fin.open("A2_Harry_Popo_not_1st_time.txt");
        }
        if (fin.fail()) {
            cout << "Error in opening A2" << endl;
            exit(1);
        }
        string line;
        while (getline(fin, line)) {
            if (line == "") {
                this_thread::sleep_for(chrono::seconds(3));
            }
            cout << line << endl;
        }
        fin.close();
        count_choice2 += 1;
        // to open the file containing the program for activity 2
    }
    else if (choice_activity == "3") {
        // to open the file containing the program for activity 3
    }
    string choose_another_act;
    cout << "Do you want to choose another activity? Enter yes or no: ";
    cin >> choose_another_act;
    while (choose_another_act != "yes" && choose_another_act != "no") {
        cout << "Do you want to choose another activity? Enter [yes] or [no] without the square brackets: ";
        cin >> choose_another_act;
    }
    if (choose_another_act == "yes") {
        choose_activity(count_choice2);
    }
    return;
}
int main() {
    int count_choice2 = 0;
    string choice_activity, choice_2;
    cout << "Welcome to Project3EO!" << endl;
    cout << "This project is to represent Ocamp activities in the form of computer program or application." << endl;
    this_thread::sleep_for(chrono::seconds(1)); //with using namespace std; statement, this is the way to get pauses.
    cout << "Due to the limitation of my knowledge in computer programming and the medium of computer program," << endl;
    cout << "the activities might not be done in the same environment and mood." << endl;
    this_thread::sleep_for(chrono::seconds(1)); // This statement requires c++11 to work, compile as -std=c++11 as compile flag
    // For Codeblock, go to settings->compiler and choose the flag
    cout << "However, I'll try my best to show how activities in Ocamp are like." << endl;
    cout << "Have fun exploring this program!" << endl;
    this_thread::sleep_for(chrono::seconds(1));
    choose_activity(count_choice2);
    cout << "Thank you for using this program. Have a good day and a fruitful year!" << endl;
    return 0;
}
