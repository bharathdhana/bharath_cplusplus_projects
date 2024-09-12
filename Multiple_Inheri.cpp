#include <iostream>
using namespace std;

class cricket {
public:
  string name;
  int runs = 153, wickets = 5;
  void play() { cout << "playing cricket" << endl; }
};

class batsman : public cricket {
public:
  string batsman_name = "Sachin Tendulkar";
  void get() {
    cout << "Enter the name of batsman:" << endl;
    cout << "Enter the runs scored by batsman:" << endl << endl;
  }
  void put() {
    cout << batsman_name << endl;
    cout << batsman_name << " scored " << runs << " runs" << endl << endl;
  }
};

class bowler : public cricket {
public:
  string bowler_name = "Suryakumar Yadav";
  void get() {
    cout << "Enter the name of bowler:" << endl;
    cout << "Enter the wickets taken by bowler:" << endl << endl;
  }
  void put() {
    cout << bowler_name << endl;
    cout << bowler_name << " gets " << wickets << " wickets" << endl;
  }
};

int main() {

  batsman b1;
  b1.get();
  b1.put();
  bowler b2;
  b2.get();
  b2.put();
  return 0;
}