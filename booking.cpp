/*
 * Praktikum 2
 *
 * Alexander Manger 754969
 * Maciej Krzyszton 756037
 *
*/
#include "booking.h"

Booking::Booking()
{

}
void Booking::set(long id, double price, long travelId, string fromDate, string toDate){
    this->id = id;
    this->price = price;
    this->fromDate = fromDate;
    this->toDate = toDate;
    this->travelId = travelId;
}
long Booking::getId(){
    return this->id;
}
