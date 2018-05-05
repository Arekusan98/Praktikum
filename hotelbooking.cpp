/*
 * Praktikum 2
 *
 * Alexander Manger 754969
 * Maciej Krzyszton 756037
 *
*/
#include "hotelbooking.h"

HotelBooking::HotelBooking()
{

}

void HotelBooking::set(long id, double price, string fromDate, string toDate, long travelId, string hotel, string town){

    this->id = id;
    this->price = price;
    this->fromDate = fromDate;
    this->toDate = toDate;
    this->travelId = travelId;
    this->hotel = hotel;
    this->town = town;
}

