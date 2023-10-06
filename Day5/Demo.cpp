/*
    For developers who will use this library
*/

#include <iostream>

float square(float number){
    return number*number;
}

float percentage(float number, float pct_factor){
    return number * (pct_factor/100);
}

float cube(float number){
    return number*number*number;
}


int factorial(int number){

    if(number < 0){
        throw std::runtime_error("Negative number problem");
    }

    else if(number == 1){
        return 1;
    }
    else{
        return number * factorial(number-1);  //for positive number , factoiral(0) doesn't happen
        //for 0 factorial(-1) happens hence error
    }

}


void SwitchMenu(){
    while(true){
        int choice =0;
        float number=0;
        std::cout << "Enter a number: " << "\n";
        std::cin >>number;
        std::cout << "Enter\n1 for square\n2 for cube\n3 for factorial\n4 to quit\n";
        std::cin >> choice;

        switch(choice){
            case 1:
                std::cout << square(number) <<"\n";
                break;
            
            case 2: 
                std::cout << cube(number) << "\n";
                break;

            case 3:
                try{
                    //factorial((int)number);  //c type of casting
                    std::cout << factorial(static_cast<int>(number)) << "\n";  //compile time casting
                    break;
                }
                catch(std::runtime_error e){
                    std::cout << e.what() << "\n";
                }
                
            case 4: 
                //return;
                exit (0);
                break;

            default:
                std::cout << "Enter proper choice\n";
        }
    }
}

int main(){
    SwitchMenu();
}