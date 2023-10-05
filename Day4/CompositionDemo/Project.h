#ifndef PROJECT_H
#define PROJECT_H

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
        std::string _name,
        int _duration_days,
        float _budget
    );

    ~Project() {
        std::cout << "Project with Name: " << _name << " is destroyed\n";
    }
};

#endif // PROJECT_H
