#pragma once
#include <iostream>
#include <vector>
#include <string>

struct Student {
    std::string ism;
    std::string familiya;
    int tyil;
    int kurs;

    Student(std::string ism_, std::string familiya_, int tyil_);

    void tanishtir() const;
    int yosh(int yil) const;
    void bosqich();
    bool katta(int yil) const;
};