#include<iostream>
using namespace std;

void printStars(int num, int num2);
int main()
{
    int number;
    cout << "Enter the number of lines in the grid: ";
    cin >> number;
    printStars(number, 0);

    cout << endl << "Grid Pattern Complete - End of Program.";

    return 0;
}

void printStars(int num, int num2)
{
  if (num2 <= num)
  {

      for (int e = num; e > num2; e--)
      {
          cout << "*";
      }

      cout << endl;

      printStars(num - 1, num2);

  }
}
