/*
 * Praktikum 1
 *
 * Alexander Manger 754969
 * Maciej Krzyszton 756037
 *
*/

#include "rentalcarreservation.h"

RentalCarReservation::RentalCarReservation()
{

}

void RentalCarReservation::set(vector<string> inputs){

    this->id = stol(inputs.at(0));
    this->price = stol(inputs.at(1));
    this->fromDate = inputs.at(2);
    this->toDate = inputs.at(3);
    this->pickupLocation = inputs.at(4);
    this->returnLocation = inputs.at(5);
    this->company = inputs.at(6);
}

double RentalCarReservation::getPrice(){
    return this->price;
}
