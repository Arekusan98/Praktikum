/*
 * Praktikum 2
 *
 * Alexander Manger 754969
 * Maciej Krzyszton 756037
 *
*/
#include "rentalcarreservation.h"

RentalCarReservation::RentalCarReservation()
{

}

void RentalCarReservation::set(long id, double price, string fromDate, string toDate, long travelId, string pickupLocation, string returnLocation, string company){

    this->id = id;
    this->price = price;
    this->fromDate = fromDate;
    this->toDate = toDate;
    this->travelId = travelId;
    this->pickupLocation = pickupLocation;
    this->returnLocation = returnLocation;
    this->company = company;
}

