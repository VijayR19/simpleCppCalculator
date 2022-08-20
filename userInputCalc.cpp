#include <algorithm>
#include <iomanip>
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

int main() {
  char selection{};

  vector<int> vec{};

  do {
    cout << "\nP: Print numbers" << endl;
    cout << "A. Add a number" << endl;
    cout << "M. Display mean of the numbers" << endl;
    cout << "S. Display the smallest number" << endl;
    cout << "L. Display the largest number" << endl;
    cout << "Q. Quit" << endl;
    cout << "=====================================" << endl;

    cout << "Enter Your Choice: ";
    cin >> selection;
    // In this vector number will be added;

    //********Print*************
    if (selection == 'P' || selection == 'p') {
      if (vec.size() == 0) {
        cout << "[] - list is empty" << endl;
      } else {
        cout << "[ ";
        for (auto val : vec) {
          cout << val << " ";
        }
        cout << " ]";
      }
    }

    //**********Add Number*************************
    else if (selection == 'a' || selection == 'A') {
      int num{};
      cout << "Enter the number to be added: ";
      cin >> num;
      vec.push_back(num);

      cout << num << " added." << endl;
    }

    //***********Mean*****************************
    else if (selection == 'm' || selection == 'M') {
      if (vec.size() == 0) {
        cout << "Unable to calculate the mean-no data";
      } else

      {
        int sum{};
        for (auto val : vec)
          sum += val;
        cout << "The mean is " << static_cast<double>(sum) / vec.size() << endl;
      }
    }

    //*********************Small Number*******************
    else if (selection == 'S' || selection == 's') {
      if (vec.size() == 0) {
        cout << "Unable to determine the smallest number - no data" << endl;
      } else {
        cout << "Smallest value is " << *min_element(begin(vec), end(vec));
      }
    }

    //*************************Large Number*****************

    else if (selection == 'L' || selection == 'l') {
      if (vec.size() == 0) {
        cout << "Unable to determine largest number - no data" << endl;
      } else {
        cout << "SLargest value is " << *max_element(begin(vec), end(vec));
      }
    }

    //*********************Quit**************************

    else if (selection == 'Q' || selection == 'q') {
      cout << "Goodbye!" << endl;
    }

    else {
      cout << "Unknown selction,please try again" << endl;
    }
  } while (selection != 'q' && selection != 'Q');

  return 0;
}