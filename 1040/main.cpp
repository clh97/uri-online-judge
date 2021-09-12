#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <locale>

using namespace std;

int main() {
  double a = 0, b = 0, c = 0, d = 0, exam = 0;

  cin >> a;
  cin >> b;
  cin >> c;
  cin >> d;

  cout << fixed << showpoint;
  cout << setprecision(1);

  double avg = ((a * 2.0) + (b * 3.0) + (c * 4.0) + (d * 1.0)) / (2.0 + 3.0 + 4.0 + 1.0);
  double avgRounded = floor(avg * 10) / 10;

  cout << "Media: " << avgRounded << endl;

  if (avgRounded >= 7.0) {
    cout << "Aluno aprovado." << endl;
  } else if (avgRounded >= 5.0 && avgRounded <= 6.9) {
    cout << "Aluno em exame." << endl;
    cin >> exam;
    cout << "Nota do exame: " << exam << endl;

    double avgWithExam = (avgRounded + exam) / 2;
    double avgWithExamRounded = floor(avgWithExam * 10) / 10;

    if (avgWithExamRounded >= 5.0) {
      cout << "Aluno aprovado." << endl;
    } else {
      cout << "Aluno reprovado." << endl;
    }

    cout << "Media final: " << avgWithExam << endl;
  } else if (avgRounded <= 5.0) {
    cout << "Aluno reprovado." << endl;
  }

  return 0;
}