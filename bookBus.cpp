#include<iostream>
using namespace std;

class bookBus {
private:
    int no_of_tickets;
    static const int capacity_of_tickets = 50;  
    string source = "Ichalkaranji";  
    string destination = "Pune";     
public:
    void showBooking() {
        cout << "No. of Tickets: ";
        cin >> no_of_tickets;
    }
    int getNoOfTickets() {
        return no_of_tickets;
    }
    string getSource() {
        return source;
    }
    string getDestination() {
        return destination;
    }
    static int getCapacity() {
        return capacity_of_tickets;
    }
};

int main() {
    bookBus b1; 
    
    b1.showBooking();
    int tickets = b1.getNoOfTickets();
    
    cout << "Source: " << b1.getSource() << endl;
    cout << "Destination: " << b1.getDestination() << endl;
    
    try {
        if (tickets > bookBus::getCapacity()) {  
            throw "Bus is full";
        }
        cout << "Booking successful!" << endl;
    } catch (const char* str) {
        cout << "Exception: " << str << endl;
    }
    
    return 0;
}
