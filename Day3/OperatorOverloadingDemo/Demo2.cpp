#include <iostream>
#include "VehicleType.h"
class Complex{
    private:
        float _real;
        float _imag;
    
    public:
        Complex(float real, float imag) : _real(real), _imag(imag) 
        {
        }

         Complex operator+(Complex n2)
         {
            float _real_sum=this->_real + n2._real;
            float _imag_sum=this->_imag + n2._imag;

            Complex temp( _real_sum, _imag_sum );
            return temp;
        }


        //friend dunciton is a function that is NOT A MEMEBER FUNCTION OF THE CLASS 
        //BUT STILL HAS ACCESS TO PRIVATE ATTRIBUTES OF THE CLASS
        // C1 << C2 //not possible FOR << (operator overloading)
        //std::cout <<C1 //possible
         friend std::ostream &operator<<(std::ostream &os, const Complex &rhs) {
             os << "_real: " << rhs._real
                << " _imag: " << rhs._imag;
             return os;
         }
        ~Complex(){
            std::cout << "Object destroyed\n";
        }     
};




