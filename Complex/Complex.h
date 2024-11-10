#pragma once

#include <iostream>
#include <stdio.h>
#include <cmath>

// Класс комплексных чисел
class Complex {
private:
    double real;
    double imag;

public:
    // Конструктор по умолчанию
    Complex() : real(0.0), imag(0.0) {}

    // Конструктор с параметрами
    Complex(double r, double i) : real(r), imag(i) {}

    // Конструктор копирования
    Complex(const Complex& other) : real(other.real), imag(other.imag) {}

    // Операция присваивания
    Complex& operator=(const Complex& other) {
        if (this != &other) {
            real = other.real;
            imag = other.imag;
        }
        return *this;
    }

    // Операция сложения
    Complex operator+(const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Операция вычитания
    Complex operator-(const Complex& other) const {
        return Complex(real - other.real, imag - other.imag);
    }

    // Операция умножения
    Complex operator*(const Complex& other) const {
        return Complex(real * other.real - imag * other.imag,
            real * other.imag + imag * other.real);
    }

    // Операция деления
    Complex operator/(const Complex& other) const {
        double denominator = pow(other.real, 2) + pow(other.imag, 2);
        return Complex((real * other.real + imag * other.imag) / denominator,
            (imag * other.real - real * other.imag) / denominator);
    }

    // Префиксный инкремент
    Complex& operator++() {
        real++;
        return *this;
    }

    // Постфиксный инкремент
    Complex operator++(int) {
        Complex temp(*this);
        real++;
        return temp;
    }

    // Префиксный декремент
    Complex& operator--() {
        real--;
        return *this;
    }

    // Постфиксный декремент
    Complex operator--(int) {
        Complex temp(*this);
        real--;
        return temp;
    }

    // Операция сравнения ">" по модулю
    bool operator>(const Complex& other) const {
        return abs() > other.abs();
    }

    // Операция сравнения "<" по модулю
    bool operator<(const Complex& other) const {
        return abs() < other.abs();
    }

    // Операция сравнения "==" по модулю
    bool operator==(const Complex& other) const {
        return abs() == other.abs();
    }

    // Операция сравнения "!=" по модулю
    bool operator!=(const Complex& other) const {
        return abs() != other.abs();
    }

    // Получение модуля комплексного числа
    double abs() const {
        return sqrt(real * real + imag * imag);
    }

    // Дружественная функция ввода
    friend std::istream& operator>>(std::istream& is, Complex& c);

    // Дружественная функция вывода
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
};

// Определение дружественной функции ввода
std::istream& operator>>(std::istream& inside, Complex& c) {
    inside >> c.real >> c.imag;
    return inside;
}

// Определение дружественной функции вывода
std::ostream& operator<<(std::ostream& outside, const Complex& c) {
    outside << c.real << " + " << c.imag << "i";
    return outside;
}

