#include "Student.h"

Student::Student(std::string ism_, std::string familiya_, int tyil_) : ism(ism_), familiya(familiya_), tyil(tyil_), kurs(1) {}

void Student::tanishtir() const {
    std::cout << ism << " " << familiya <<", " << kurs << "-kurs talaba." << std::endl;
}

int Student::yosh(int yil) const {
    return yil - tyil;
}

void Student::bosqich() {
    kurs++;
}

bool Student::katta(int yil) const {
    return yil - tyil >=18;
}
