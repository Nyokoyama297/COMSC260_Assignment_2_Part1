// Student's name: Naoyuki Yokoyama
// Student's ID; 1635297

#ifndef  Array_h
#define Array_h

#include <algorithm>
using namespace std;


template<typename T, int CAP>
class StaticArray
{
  T value[CAP];
  T dummy;

public:
  StaticArray()
  {
	fill(value, value + CAP, 0);
  }
  int capacity()
  {
	return CAP;
  }
  T operator[](int) const;
  T& operator[](int);
};

template <typename T, int CAP>
T StaticArray<T, CAP>::operator[](int index) const
{
  if (index < 0 || index > CAP - 1) {
	return -1;
  }
  else {
	return value[index];
  }
}

template <typename T, int CAP>
T& StaticArray<T, CAP>::operator[](int index)
{
  if (index < 0 || index > CAP - 1) {
	return dummy;
  }
  else {
	return value[index];
  }
}
#endif // ! Array_h
