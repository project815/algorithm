using namespace std;
#include <iostream>

// 내가 푼 해답
int main() {
  int score;
  cin >> score;
  if (90 <= score && score <= 100) {
    cout << "A";
  } else if (80 <= score && score <= 89) {
    cout << "B";
  } else if (70 <= score && score <= 79) {
    cout << "C";
  } else if (60 <= score && score <= 69) {
    cout << "D";
  } else {
    cout << "F";
  }


      int score2;
    cin >> score2;
 
    if(score2 >= 90){
        cout << "A";
    } 
    else if(score >= 80){
        cout << "B";
    } 
    else if(score >= 70){
        cout << "C";
    } 
    else if(score >= 60){
        cout << "D";
    } 
    else {
        cout << "F";
    }
}
