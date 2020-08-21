#include <iostream>
using namespace std;
// A1 loop of names
int loop_of_names();
int main() {
    loop_of_names();
    return 0;
}

int loop_of_names() {
    int numofname, countnumofname = 0;
    string name;
    cout << "Please enter the number of participants: ";
    cin >> numofname; //The total number of participants
    string * listofnames = new string [numofname];
    while (countnumofname < numofname) { // To count the number of names inputted, stop when the number of names reached the entered number of participants
        cout << "Please enter the name of participant " << countnumofname + 1 << ": ";
        cin >> name;
        listofnames[countnumofname] = name;
        countnumofname += 1;
    }
    /* for (int i = 0; i < numofname; i++) {
        cout << listofnames[i] << " ";
    }
    cout << endl;
    The above lines of code is to output the list of names as a test
    */
    int i, j;
    for (i = 0; i < numofname; i++) {
        for (j = 0; j < i + 1; j++) { //The iterators i and j, this prints a triangular shape, ascending order
            if (j == 0) { // if is the start of a participant
                cout << "Participant " << i + 1 << " should say: ";
            }
            if (i == j) { // if the participant is about to introduce his/herself
                if (j == 0) { // if the participant is the first one, so he/she does not need to say "and"
                    cout << "I am " << listofnames[j];
                }
                else { //not the first participant but is about to introduce his/herself
                    cout << "and I am " << listofnames[j];
                }
            }
            else { // repeating the previous names
                cout << listofnames[j] << ", ";
            }
        }
        cout << endl;
    }
    delete [] listofnames;
    return 0;
}
