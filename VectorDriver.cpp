#include "VectorDriver.h"
#include "algorithm"


int main() {
// Changes to begin code instead of begin sample code
  cout << "  ..:: B E G I N  C O D E  ::.." << endl << endl;

// Create vectors
  vector<short> sample_vector(5);
  vector<short> sample_vector_2(0);
  vector<short> manual_vector(5);

//The sample code
/*========================================================
  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
========================================================*/
// These lines add 10 new spaces to sample vector 2 and fill them in with "random" numbers.
  cout << "new vector: ";
  print(sample_vector_2);
  cout << endl << "add space and random values to vector" << endl;
  add_numbers(sample_vector_2);
  print(sample_vector_2);
  cout << endl << "add space and random values to vector a second time" << endl;
  add_numbers(sample_vector_2);
  print(sample_vector_2);
  cout << endl;

// This section checks if the number 4 is in sample vector 2
  cout << "check if 4 is present in sample_vector_2" << endl;
  is_present(sample_vector_2, 4);

// This section prints only the even indexes of sample vector one and then sample vector 2
  cout << "print even indexes in sample_vector and sample_vector_2 respectively" << endl;
  print_even(sample_vector);
  cout << endl;
  print_even(sample_vector_2);
  cout << endl;

// This section prints out manual vector unsorted then sorts it and prints it out
  cout << "manual_vector unsorted" << endl;
  print(manual_vector);
  sort(manual_vector);
  cout << endl << "manual_vector sorted" << endl;
  print(manual_vector);
  cout << endl;

// Changed output to say end code instead of end sample code
  cout << endl << "   ..::  E N D   C O D E  ::.." << endl;
  //system("pause");
  return 0;
}
