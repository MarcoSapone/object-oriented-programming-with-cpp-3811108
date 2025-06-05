#include "review.h"

int main()
{
  Review review = Review(5, "Excellent", "Exceeded my expectations"); //Declare and initialize an object of type Review
  review.displayDetails();

  return 0;
}