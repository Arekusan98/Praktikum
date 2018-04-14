#include "hotelbooking.h"

HotelBooking::HotelBooking()
{

}

void HotelBooking::set(vector<string> inputs){

    this->id = stol(inputs.at(0));
    this->price = stol(inputs.at(1));
    this->fromDate = inputs.at(2);
    this->toDate = inputs.at(3);
    this->hotel = inputs.at(4);
    this->town = inputs.at(5);
}

double HotelBooking::getPrice(){
    return this->price;
}
