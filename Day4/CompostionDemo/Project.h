#ifndef PROJECT_H
#define PROJECT_H
#include <iostream>
class Project
{
private:
    std::string _name;
    int _duration_days;
    float _budget;

public:
    Project() = delete;
    Project(const Project&)= delete;

    Project(
        std::string name,
        int duration_days,
        float budget
    );

    ~Project() {
        std::cout << "Project with Name: " << _name << " is destroyed\n";
    }

    float budget() const { return _budget; }

    friend std::ostream &operator<<(std::ostream &os, const Project &rhs);

    
};

#endif // PROJECT_H
