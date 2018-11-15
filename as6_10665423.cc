#include <iostream>

using namespace std;

// the function
int binarySearch(int L[],int x, int first, int last)
{
  if (last >= first)  //first > last)
    {
      //return -1;
      int middle = (first + last) / 2;

      if (x == L[middle])
        return middle;
      else if (x < L[middle])
        return binarySearch(L, x, first, middle - 1);
      else //if(x > L[middle])
        return binarySearch(L, x, middle + 1, last);
    }
  else
    return -1;//(first + 1);    // failed to find key
}


int main()
{


  int myList[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};


  int myfirst = 0;
  int mylast = 10;//n - 1;
  int findthis;


  cout << "Please enter a number to find from {1, 3, 5, 7, 9, 11, 13, 15, 17, 19}: " << endl;
  cin >> findthis;


  int resultloc = binarySearch(myList, findthis, myfirst, mylast);
  if ( resultloc == -1 )
    {
      cout << "number not found" <<endl;
    }
  else
    {
      cout <<" number is found in position " << resultloc + 1 << endl;//binarySearch(myList, findthis, myfirst, mylast) <<endl;
    }

 }

