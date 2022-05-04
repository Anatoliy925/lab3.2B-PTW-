#include <iostream>
#include <string>
#include <iomanip>
#include "Student.hpp"
using namespace std;

int main() {

    int N;
    cout << "Кiлькiсть студентiв: ";
    cin >> N;
    Student *s = new Student[N];
    create(s, N);
    print(s, N);

    cout << "Kiлькiсть оцiнок «вiдмiнно» з фiзики: " << physicsFive(s, N) << endl;
    cout << "Kiлькiсть оцiнок «добре» з фізики: " << physicsFour(s, N) << endl;
    cout << "Kiлькiсть оцiнок «задовільно» з фізики: " << physicsThree(s, N) << endl;
    

    cout << "Kiлькiсть студентiв, якi отримали і з фiзики i математики оцінки «5» чи «4»: " << PhAndMath(s, N) << endl;

    return 0;

}
