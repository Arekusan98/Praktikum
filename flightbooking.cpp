/*
 * Praktikum 1
 *
 * Alexander Manger 754969
 * Maciej Krzyszton 756037
 *
*/

#include "flightbooking.h"

FlightBooking::FlightBooking()
{

}

void FlightBooking::set(vector<string> inputs){

    this->id = stol(inputs.at(0));
    this->price = stol(inputs.at(1));
    this->fromDate = inputs.at(2);
    this->toDate = inputs.at(3);
    this->fromDest = inputs.at(4);
    this->toDest = inputs.at(5);
    this->airline = inputs.at(6);
}

double FlightBooking::getPrice(){
    return this->price;
}
