#include "Student.h"


int main() {
    std::vector<Student> students;
    students.reserve(10);

    students.emplace_back(Student("Hasan", "Valiyev", 2007));
    students.emplace_back(Student("Husan", "Valiyev", 2007));
    students.emplace_back(Student("Ahror", "Qobilov", 2006));

    std::cout << "Talabalar ro'yxati:" << std::endl;
    for (const Student& s : students) {
        s.tanishtir();
    }

    const int hozirgi_yil = 2026;
    const Student* eng_katta = &students[0];
    for (const Student& s : students) {
        if (s.yosh(hozirgi_yil) > eng_katta->yosh(hozirgi_yil)) {
            eng_katta = &s;
        }
    }
    std::cout << "\nEng katta yoshdagi student:\n";
    eng_katta->tanishtir();


    return 0;
}