#include <iostream>
#include <vector>
#include <string>
using namespace std;
// declare constant//
const int NORMAL_ROOM_PRICE = 1200;
const int AC_ROOM_PRICE = 1500;
const int COUPLE_DAY_OUTING_PRICE = 7500;
const int SOLO_DAY_OUTING_PRICE = 5500;
const int BUFFET_PRICE = 5500;
const int HIGHT_BUFFET_PRICE = 2500;
const int MAX_ROOMS = 10;
 
 struct RoomBooking {

    int roomNumber;

    bool isBooked;

};
 
// Global vector to store room booking information

vector<RoomBooking> rooms(MAX_ROOMS);
 
// Function to initialize rooms vector

void initializeRooms() {

    for (int i = 0; i < MAX_ROOMS; ++i) {

        rooms[i].roomNumber = i + 1;

        rooms[i].isBooked = false;

    }

}
// display the components of the system//
void displayMenu() {
   cout << "1. Book a Room\n";
   cout << "2. Book a Day Outing Package\n";
   cout << "3. Book Buffet\n";
   cout << "4. Exit\n"<<endl;
}

void bookRoom() {

    int roomType, roomNumber;

    cout << "\nRoom Types:\n";

    cout << "1. Normal Room - Rs." << NORMAL_ROOM_PRICE << " per day\n";

    cout << "2. AC Room with Dinner & Breakfast - Rs." << AC_ROOM_PRICE << " per night\n";

    cout << "Enter room type (1/2): ";

    cin >> roomType;
 
    if (roomType != 1 && roomType != 2) {

        cout << "Invalid choice!\n";

        return;

    }
 
    cout << "Enter room number (1-" << MAX_ROOMS << "): ";

    cin >> roomNumber;
 
    if (roomNumber < 1 || roomNumber > MAX_ROOMS) {

        cout << "Invalid room number!\n";

        return;

    }
 
    if (rooms[roomNumber - 1].isBooked) {

        cout << "Room " << roomNumber << " is already booked. **select another one**"<<endl;

    } else {

        rooms[roomNumber - 1].isBooked = true;
        cout<<endl;

        cout << "**Room " << roomNumber << " booked successfully and Do your payment to chasier ** THANK YOU**\n\n";
        

    }

}
 

void bookDayOuting() {
   int packageType;
   cout << "\nDay Outing Packages:\n";
   cout << "1. Couple Day Outing Package - Welcome Drink, Lunch, High Tea - Rs." << COUPLE_DAY_OUTING_PRICE << endl;
   cout << "2. Solo Day Outing Package - Welcome Drink, Lunch, High Tea - Rs." << SOLO_DAY_OUTING_PRICE << endl;
   cout << "Enter package type (1/2): ";
   cin >> packageType;
   switch(packageType) {
       case 1:
           cout << "Package booked: Couple Day Outing Package - Rs." << COUPLE_DAY_OUTING_PRICE << endl;
           break;
       case 2:
           cout << "Package booked: Solo Day Outing Package - Rs." << SOLO_DAY_OUTING_PRICE << endl;
           break;
       default:
           cout << "Invalid choice!\n";
   }
}
void bookBuffet() {
   int buffetType,numpreson;
   cout << "\nBuffet Options:\n";
   cout << "1. Dinner Buffet - Rs." << BUFFET_PRICE << " per person\n";
   cout << "2. High Tea Buffet - Rs." <<HIGHT_BUFFET_PRICE << " per person\n";
   cout << "Enter buffet type (1/2): ";
   cin >> buffetType;
   cout << "Enter number of persons: ";
   cin >> numpreson;
   int cost=0;
   switch(buffetType) {
       case 1:
       cost = BUFFET_PRICE * numpreson;
           cout << "Buffet booked: Dinner Buffet - Rs." << cost <<" "  << "person(s) for Dinner Buffet\n";
           break;
       case 2:
       cost = HIGHT_BUFFET_PRICE * numpreson;
           cout << "Buffet booked: High Tea Buffet - Rs." <<  cost<<" " << "person(s) for High Tea Buffet\n";
           break;
       default:
           cout << "Invalid choice!\n";
   }
}
// cheak age before access to the system (age verification)//
bool checkAge(int age) {
   return age >= 18;
}
//common welcome massage//
void displayWelcomeMessage() {
   cout << "-------------------------------------------" << endl;
   cout << "*******************************************" << endl;
   cout << "Welcome to Hotel Miracal " << endl;
   cout << "-------------------------------------------" << endl;
   cout << "*******************************************" << endl;
}
void displayProjectDetails() {
   cout << "Project Title: Hotel Miracal" << endl;
   cout << "Purpose: Online booking system" << endl;
   cout << endl;
   cout << "Developers:" << endl;
   cout << "-Kaveesha Madushani- ITBSC/2023/EA/WE/007" << endl;
   cout << "-Thakshila Chandrawansha- ITBSC/2023/EA/WE/017" << endl;
   cout << "-Sumedha Madushan- ITBSC/2023/EA/WE/023" << endl;
   cout << "-Dilki Taniya- ITBSC/2023/EA/WE/027" << endl;
   cout << "-Nadun Hirudika- ITBSC/2023/EA/WE/024" << endl;
   cout << "-SubanyaSigiri Jayasekara - ITBSC/2023/EA/WE/009" << endl;
   cout << endl;
}
void displayComponentDetails(int componentNumber) {
   switch (componentNumber) {
       case 1:
           cout << "Component: Book a Room" << endl;
           cout << "Developer1:-Kaveesha Madushani- ITBSC/2023/EA/WE/007 "<< endl;
           cout << "Tasks:" << endl;
           cout << "void display welcome messege" << endl;
           cout << "void display menu" << endl;
           cout << "void displayProjectDetails"<<endl;
           cout<<endl;
           cout << "Developer2:" << "Thakshila Chandrawansha- ITBSC/2023/EA/WE/017" << endl;
            cout << "Tasks:" << endl;
            cout << "void bookroom" << endl;
             cout<<endl;
           break;
       case 2:
           cout << "Component: Book a Day Outing Package " << endl;
           cout << "Developer3:Sumedha Madushan- ITBSC/2023/EA/WE/023" << endl;
           cout << "Tasks:" << endl;
           cout << "void bookDayouting" << endl;
            cout<<endl;
           cout << "Developer4:" << "Dilki Taniya- ITBSC/2023/EA/WE/027" << endl;
          cout << "Tasks:" << endl;
          cout << "void displayComponentDetails" << endl;
        cout<<endl;
           break;
           break;
       case 3:
           cout << "Component: Book Buffet " << endl;
           cout << "Developer5:Nadun Hirudika- ITBSC/2023/EA/WE/024" << endl;
           cout << "Tasks:" << endl;
           cout << "void  Book Buffet" << endl;
            cout<<endl;
           cout << "Developer6:" << "SubanyaSigiri Jayasekara - ITBSC/2023/EA/WE/009" << endl;
          cout << "Tasks:" << endl;
          cout << "create main function" << endl;
        cout<<endl;
           break;
           break;
       default:
           cout << "Thank You" << endl;
   }
}
int main() {
    initializeRooms();
   displayWelcomeMessage();
   displayProjectDetails();
int choice, age;
   cout << "Welcome to Hotel Miracal" << endl;
   cout<< endl;
   cout << "Please enter your age: ";
   cin >> age;
if (!checkAge(age)) {
       cout << "Sorry, only guests 18 years and older are allowed to use this system.\n";
       return 1;
   }
   // display menu untill exit//
   do {
       displayMenu();
       cout << "Enter your choice: ";
       cin >> choice;
       switch(choice) {
           case 1:
               bookRoom();
               break;
           case 2:
               bookDayOuting();
               break;
           case 3:
               bookBuffet();
               break;
           case 4:
               cout << "Thank you for visiting Hotel Miracal!\n";
               break;
           default:
               cout << "Invalid choice! Please select again.\n";
       }
   }
   while (choice != 4);
   // declaration of component details and developer names//
      cout << "Components:" << endl;
   cout << "1. Book a Room" << endl;
   cout << "2. Book a Day Outing Package" << endl;
   cout << "3.Book Buffet" << endl;
    int componentNumber;
for (int i = 0; i <= 2; i++) {
    int componentNumber;
    cout<<endl;
    cout << "***Please enter component number you wish to learn more*** :- ";
    cin >> componentNumber;
    displayComponentDetails(componentNumber);
}
   displayComponentDetails(componentNumber);
   return 0;
}

