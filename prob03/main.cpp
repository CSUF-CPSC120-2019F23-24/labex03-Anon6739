// This program calculates a person's height in feet (') and inches (").
#include <iostream>
#include <string>

int main()
{
  int height_in_inches, feet, inches;

  //User input of height_in_inches
  std::cout << "Please enter the person's height in inches: ";
  std::cin >> height_in_inches;

  //Multiplying and Diving
  feet = height_in_inches/12;
  inches = height_in_inches%12;

  //Person's height in feet
  std::cout << "That person is " << feet <<"\'" << inches <<"\"" << std::endl;

  return 0;
}
