//
//  Calcolatrice.cpp
//  ProgIIEx
//
//  Created by Vincenzo Barbato on 22/04/25.
//

#include "Calcolatrice.hpp"

Calcolatrice::Calcolatrice() : op1(0), op2(0), result(0) {}

Calcolatrice::Calcolatrice(double op1, double op2) : op1(op1), op2(op2), result(0) {}

void Calcolatrice::setOp1(double op1) {
    this->op1 = op1;
}

void Calcolatrice::setOp2(double op2) {
    this->op2 = op2;
}

void Calcolatrice::setResult(double result) {
    this->result = result;
}

double Calcolatrice::getOp1() {
    return this->op1;
}

double Calcolatrice::getOp2() {
    return this->op2;
}

double Calcolatrice::getResult() {
    return this->result;
}

double Calcolatrice::sum() {
    this->result = this->op1 + this->op2;
    return this->result;
}

double Calcolatrice::sub() {
    this->result = this->op1 - this->op2;
    return this->result;
}

double Calcolatrice::prod() {
    this->result = this->op1 * this->op2;
    return this->result;
}

double Calcolatrice::division() {
    if (this->op2 == 0) {
        throw (this->op2);
    }
    this->result = this->op1 / this->op2;
    return this->result;
}
