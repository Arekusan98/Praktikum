/*
 * Praktikum 2
 *
 * Alexander Manger 754969
 * Maciej Krzyszton 756037
 *
*/
#include "flightbooking.h"

FlightBooking::FlightBooking()
{

}

void FlightBooking::set(long id, double price, string fromDate, string toDate, long travelId, string fromDest, string toDest, string airline){

    this->id=id;
    this->price=price;
    this->fromDate=fromDate;
    this->toDate=toDate;
    this->travelId=travelId;
    this->fromDest = fromDest;
    this->toDest = toDest;
    this->airline = airline;
}

