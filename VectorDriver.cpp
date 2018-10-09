#include "VectorDriver.h"


int main() {
  cout << "  ..:: B E G I N  S A M P L E  C O D E  ::.." << endl << endl;
  vector<short> sample_vector(5);
  vector<short> sample_vector_2(0);

  print(sample_vector_2);
  add_numbers(sample_vector_2);
  print(sample_vector_2);

  cout << "new vector: ";
  print(sample_vector);
  cout << endl;

  fill_vector(sample_vector);

  cout << "filled vector: ";
  print(sample_vector);
  cout << endl;

  is_present(sample_vector, 4);
//  sort(sample_vector_2);
//  print(sample_vector_2);
//  cout << endl;
  print_even(sample_vector);

  cout << "sum of vector's elements: " << compute_sum(sample_vector) << endl;
  cout << endl << "   ..::  E N D   S A M P L E  C O D E  ::.." << endl;
  //system("pause");
  return 0;
}
