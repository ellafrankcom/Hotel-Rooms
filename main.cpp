#include <iostream>
#include <string>

using namespace std;

string rooms[10] = {"Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty", "Empty"}; //array to store rooms, start off as empty
int z;  //variable for arrays

void menu_display();  //functions for menu
void R();
void A();
void V();
void E();
void D();
void F();

int main() {  //main programme
    menu_display();
    return 0;
}

void R() { //reset/initialise all rooms (I)
    char reply;
    bool loop = true;
    cout<<"Are you sure you want to empty all the rooms? Y/N"<<endl;
    
    while(loop == true){ //loop for Y/N in order to empty rooms
    cin>>reply;
    if (reply == 'Y' || reply == 'y'){
        for (z = 0; z < 10; z++) {
            rooms[z] = "Empty";
    }
        
    cout<<"All rooms are now empty"<<endl;
    break;
            
    }
        
    else if (reply == 'N' || reply == 'n'){
        loop = false;
        break;
    }
    
    else {
        cout<<"Error, please retry"<<endl;
    }
}
}

void A() { //add a customner to a room
    bool loop;
    do {

        string guest_name;
        int room_num;
        char input;
        cout << "Enter the room number: "<<endl;
        cin >> room_num;
        cin.ignore(1000, '\n');   //ignore characters to be able to store full name
        cout << "Enter the guest's full name: "<<endl;
        getline(cin, guest_name);

        for (z = 0; z < 10; z++) {
            if (room_num - 1 == z) {
                rooms[z] = guest_name;
            }
        }

        cout << "Would you like to add another guest? Y/N"<<endl;
        do { //loop for operators input
            cin >> input;
            if (input == 'Y' || input == 'y') {
                loop = true;
                break;
            }
            else if (input == 'N' || input == 'n') {
                loop = false;
                break;
                
                
            }
            else
                cout << "Error, please retry"<<endl;

        } while (true);


    } while (loop ==true);
}

void V() {//View status of all rooms
    int e = 1;
    cout << endl;
    for (z = 0; z < 10; z++) {
        cout << "Room " << e << ":"  << rooms[z] << endl;
        e++;
    }
}

void E() { //Display empty rooms
    cout << endl;
    int e=0;
    for (z = 0; z < 10; z++) {
        if (rooms[z] == "Empty") {
            cout << "Room " << z + 1 << endl;
            e++;
        }
    }
    if (e == 0){
        cout<<endl;
    cout << "No empty rooms availible"<<endl;
    }
}

void D() { //Delete a customer from a room
    bool loop;
    do{
        char input;
        int room_num;

        cout << "Enter the room you want to empty: "<<endl;
        cin >> room_num;
        if (rooms[room_num-1] == "Empty")
            cout << "Room is already empty"<<endl;
        else {
            rooms[room_num-1] = "Empty";
            cout << "Room " << room_num << " is now empty"<<endl;
        }

        cout << "Would you like to empty another room? Y/N"<<endl;
        do {
            cin >> input;
            if (input == 'Y' || input == 'y') {
                loop = true;
                break;
            }
            else if (input == 'N' || input == 'n') {
                loop = false;
                break;
                
            }
            else
                cout << "Error, please retry"<<endl;

        } while (true);
    } while (loop == true);
}

void F() { //Find room using customers name
    string look;  //input string to find customer
    cout << "Please enter the guests last name: ";
    cin >> look;

    if (rooms[0].find(look) != string::npos) {
        cout << "Guest is in Room 1"<<endl;
    }
    
    else if (rooms[1].find(look) != string::npos) {
        cout << "Guest is in Room 2"<<endl;
    }
    
    else if (rooms[2].find(look) != string::npos) {
        cout << "Guest is in Room 3"<<endl;
    }
    
    else if (rooms[3].find(look) != string::npos) {
        cout << "Guest is in Room 4"<<endl;
    }
    
    else if (rooms[4].find(look) != string::npos) {
        cout << "Guest is in Room 5"<<endl;
    }
    
    else if (rooms[5].find(look) != string::npos) {
        cout << "Guest is in Room 6"<<endl;
    }
    
    else if (rooms[6].find(look) != string::npos) {
        cout << "Guest is in Room 7"<<endl;
    }
    
    else if (rooms[7].find(look) != string::npos) {
        cout << "Guest is in Room 8"<<endl;
    }
    
    else if (rooms[8].find(look) != string::npos) {
        cout << "Guest is in Room 9"<<endl;
    }
    
    else if (rooms[9].find(look) != string::npos) {
        cout << "Guest is in Room 10"<<endl;
    }
    
    else {
        cout<<"Room not found"<<endl;
    }
}

void menu_display() {  //menu
    while (true) {
        char menu_input;
        cout<<endl;
        cout<<"E.F. Hotel Booking System, Please select one of the following: "<<endl;
        cout << "R: Reset all rooms" << endl;
        cout << "A: Add a customer to a room" << endl;
        cout << "V: View the status of all rooms" << endl;
        cout << "E: Display empty rooms" << endl;
        cout << "D: Delete a customer from a room" << endl;
        cout << "F: Find a room using a customer's name"<<endl;
        cout << "Q: Quit the programme" << endl;
        cout << endl;
        cin >> menu_input;

        switch (menu_input) {  //switch for menu input from user
        case 'R':
            R();
            break;
        case 'r':
            R();
            break;
        case 'A':
            A();
            break;
        case 'a':
            A();
            break;
        case 'V':
            V();
            break;
        case 'v':
            V();
            break;
        case 'E':
            E();
            break;
        case 'e':
            E();
            break;
        case 'D':
            D();
            break;
        case 'd':
            D();
            break;
        case 'F':
            F();
        break;
        case 'f':
            F();
            break;
        case 'Q':
            exit(0);
        case 'q':
            exit(0);
        default:
            cout << "Error, please retry"<<endl<<endl;
        }
    }
}


