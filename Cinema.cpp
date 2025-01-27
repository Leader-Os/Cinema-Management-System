#include <iostream>
#include "cinema.h"
using namespace std;

Cinema :: Cinema(string name){
    setCustomerName(name);
    totalCost = 0;
    checkVip = "Regular seat";
};

void Cinema :: setCustomerName(string name) {
    customerName = name;
}

string Cinema :: getCustomerName() {
    return customerName;
}

void Cinema :: displayMessage() {
    cout<<"Hello dear "<<getCustomerName()<<",\n"
        <<"Welcome to the cinema ticket reservation application.\n"
        <<"Book your ticket now!\n";
}

void Cinema :: displayMovies() {
    cout<<"\n----------------------------------------------\n";
    cout << "The list of the movies/\n";
    int in;

    do {

        cout << "\n1. Avengers Endgame -$45-\n"
             << "2. Titanic -$30-\n"
             << "3. Scream -$35-\n"
             << "4. Kung Fu Panda -$25-\n"
             << "5. John Wick -$40-\n";
        cout << "\nEnter number of the movie to book: ";
        cin >> in;

        switch (in) {
            case 1:
                totalCost += 45;
                movieName = "Avengers Endgame";
                break;
            case 2:
                totalCost += 30;
                movieName = "Titanic";
                break;
            case 3:
                totalCost += 35;
                movieName = "Scream";
                break;
            case 4:
                totalCost += 25;
                movieName = "Kung Fu Panda";
                break;
            case 5:
                totalCost += 40;
                movieName = "John Wick";
                break;
            default:
                cout << "Incorrect number entered.\n"<<endl;
                break;
        }

    }while (in<1 || in>5);

    cout<<"For how many people do you want to book: ";
    cin >> personNum;
    totalCost *= personNum;

    string seat;
    cout<<"Do you want a VIP seat for only $10 more! \n(Enter yes or no): ";
    cin >> seat;
    if(seat=="yes"){
        checkVip = "VIP seat";
        totalCost += 10;
    }
}

void Cinema :: displaySnacks() {
    cout<<"\n----------------------------------------------\n";
    cout<<"For the snacks/"<<endl;
    int in,pie;

    do{

        cout<<"\n1. Popcorn -$15-\n"
            <<"2. Nachos -$20-\n"
            <<"3. Waters -$5-\n"
            <<"4. Coca Cola -$10-\n"
            <<"5. Orange Juice -$15-\n";
        cout<<"\nEnter number of the snack (Enter 0 to stop): ";
        cin >> in;

        if(in==0)
            break;

        cout<<"How many of the chosen snacks: ";
        cin >> pie;

        switch (in) {
            case 1:
                totalCost += (pie *  15);
                break;
            case 2:
                totalCost += (pie * 20);
                break;
            case 3:
                totalCost += (pie * 5);
                break;
            case 4:
                totalCost += (pie * 10);
                break;
            case 5:
                totalCost += (pie * 15);
                break;
            default:
                cout<<"Incorrect number entered."<<endl;
        }

    } while (in !=0);
}

void Cinema :: displayTicket() {
    cout<<"\n________________________________________"<<endl;
    cout<<"             Ticket Details            "<<endl;
    cout<<"________________________________________"<<endl;
    cout<<"Name of the reservation holder : " << customerName<<endl;
    cout<<"Movie Name : "<<movieName<<endl;
    cout<<"How many people : "<<personNum<<endl;
    cout<<"Movie time : 7.00 pm"<<endl;
    cout<<"Type of the seat : "<<checkVip<<endl;
    cout<<"Hall number : 8"<<endl;
    cout<<"The total price : $"<<totalCost<<endl;
    cout<<"________________________________________"<<endl;
}