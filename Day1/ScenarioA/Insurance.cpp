#include<iostream>
#include "InsuranceType.h"

class Insurance{
private:
    std:: string _insurance_id;
    float _insurance_amount;
    InsuranceType _insurance_type;
public:
    Insurance()=default;
    ~Insurance(){}
};