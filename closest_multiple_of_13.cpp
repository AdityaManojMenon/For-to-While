//Working file
#include <iostream>
#include <string>

int Absolute_Distance(int a, int b) {
  int difference = a - b;
  if (difference >= 0) {
    return difference;
  } 
  return -difference;
}

int Closest_Multiple_Of_13(int value) {
  int factor_closer_to_0 = value / 13;
  int factor_farther_from_0 = factor_closer_to_0;
  if (value > 0) {
    ++factor_farther_from_0;
  } else {
    --factor_farther_from_0;
  }
  int multiple_closer_to_0 = factor_closer_to_0 * 13;
  int multiple_farther_from_0 = factor_farther_from_0 * 13;
  if (Absolute_Distance(multiple_closer_to_0, value) < 
      Absolute_Distance(multiple_farther_from_0, value)) {
    return multiple_closer_to_0;
  }
  return multiple_farther_from_0;
}
