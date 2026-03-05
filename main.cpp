#include <iostream>
#include <vector>
#include <string>

struct Student {
    std::string ism;
    std::string familiya;
    int tyil;
    int kurs;

    Student(std::string ism_, std::string familiya_, int tyil_) : ism(ism_), familiya(familiya_), tyil(tyil_), kurs(1) {}

    void tanishtir() const{
        std::cout << "Mening ismim " << ism << " familiyam " << familiya << ". Men " << kurs <<" kurs talabasi man." << std::endl;
    }

    int yosh(int yil) const {
        return yil - tyil;
    }

    void bosqich() {
        kurs++;
    }

    bool katta(int yil) const {
        return yil - tyil >=18;
    }

};

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