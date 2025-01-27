#include "cinema.h"
#include "cinema.cpp"
using namespace std;

int main() {
    string name;
    cout<<"Enter your name: ";
    cin >> name;

    Cinema Customer(name);
    Customer.displayMessage();
    Customer.displayMovies();
    Customer.displaySnacks();
    Customer.displayTicket();
}