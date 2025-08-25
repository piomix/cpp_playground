#pragma once
#include <string>

class CompensationModel {
public:
    virtual ~CompensationModel() = default; //gen destructor
    virtual double earnings() const = 0; //pure virtual
    virtual std::string toString() const = 0; //pure virtual
};