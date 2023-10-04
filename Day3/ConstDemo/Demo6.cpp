#include <iostream>

class Demo6{
    private:

    public:
        Demo6()=default;

        void magic(){
            std::cout<<" Something\n";

        }

        void display() const{
            std::cout << " this works\n";
        }

        ~Demo6(){}
};

int main(){
    const Demo6 e1; //object on stac

    e1.display(); //
    //e1.magic(); //cannot call non const member function on const object
}

