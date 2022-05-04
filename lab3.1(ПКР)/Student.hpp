#ifndef Student_hpp
#define Student_hpp

#include <stdio.h>
#include <iostream>
using namespace std;
#include <string>
#include <iomanip>

enum Spec{CS, IT, ME, PhIT, TR};

string strSpec[] = { "Комп'ютернi науки      ", "Iнформатика            ", "Математика та економiка", "Фiзика та iнформатика  ", "Трудове навчання       " };

struct Student {
    string lname;
    int kurs;
    Spec spec;
    int physics;
    int math;
    union {
        int progr;
        int numb;
        int ped;
    };
};
void create(Student* s, int N) {
    int sp;
    for (int i = 0; i < N; i++) {
        cout << "Прiзвище: ";
        cin >> s[i].lname;
        cout << "Курс: ";
        cin >> s[i].kurs;
        cout << "Спецiальнiсть (0 - Комп'ютернi науки, 1 - Iнформатика, 2 - Математика та економiка, 3 - Фiзика та iнформатика, 4 - Трудове навчання) ";
        cin >> sp;
        s[i].spec = (Spec)sp;
        cout << "Оцiнка з фiзики: ";
        cin >> s[i].physics;
        cout << "Оцiнка з математики: ";
        cin >> s[i].math;
        if (s[i].spec == 0) {
            cout << "Оцiнка з програмування: ";
            cin >> s[i].progr;
        }
        else if (s[i].spec == 1) {
            cout << "Оцiнка з чисельних методiв: ";
            cin >> s[i].numb;
        }
        else {
            cout << "Оцiнка з педагогiки: ";
            cin >> s[i].ped;
        }
    }
}
void print(Student* s, int N)
{
    cout << "=========================================================================================================================="
        << endl;
    cout << "| № |    Прiзвище   | Курс |      Спецiальнiсть     | Фiзика | Математика | Програмування | Чисельнi методи | Педагогiка |"
        << endl;
    cout << "--------------------------------------------------------------------------------------------------------------------------"
        << endl;
    for (int i = 0; i < N; i++) {

        cout << "| " << setw(2) << right << i + 1 << "";
        cout << "| " << setw(14) << left << s[i].lname;
        cout << "| " << setw(5) << right << s[i].kurs;
        cout << "| " << setw(23) << strSpec[s[i].spec];
        cout << "| " << setw(7) << s[i].physics;
        cout << "| " << setw(11) << right << s[i].math;
        if (s[i].spec == 0) {
            cout << "| " << setw(14) << right << s[i].progr
                << "| " << setw(16) << right << " "
                << "| " << setw(11) << right << " " << "| ";
        }
        else if (s[i].spec == 1) {
            cout << "| " << setw(14) << right << " "
                << "| " << setw(16) << right << s[i].numb
                << "| " << setw(11) << right << " " << "| ";
        }
        else {
            cout << "| " << setw(14) << right << " "
                << "| " << setw(16) << right << " "
                << "| " << setw(11) << right << s[i].ped << "| ";
        }
        cout << endl;
    }
    cout << "--------------------------------------------------------------------------------------------------------------------------"
        << endl;
}

int physicsFive(Student* s, int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (s[i].physics == 5) {
            count += 1;
        }
    }
    return count;
};

int physicsFour(Student* s, int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (s[i].physics == 4) {
            count += 1;
        }
    }
    return count;
}

int physicsThree(Student* s, int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (s[i].physics == 3) {
            count += 1;
        }
    }
    return count;
}
int mathFive(Student* s, int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (s[i].math == 5) {
            count += 1;
        }
    }
    return count;
}
int mathFour(Student* s, int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if (s[i].math == 4) {
            count += 1;
        }
    }
    return count;
}

int PhAndMath(Student* s, int N) {
    int count = 0;
    for (int i = 0; i < N; i++) {
        if ((s[i].math == 4 || s[i].math == 5) && (s[i].physics == 4 || s[i].physics == 5)) {
            count += 1;
        }
    }
    return count;
}



#endif /* Student_hpp */
