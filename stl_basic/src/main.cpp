#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

namespace animal{
    struct Person
    {
        std::string name;
        int age;
    };
}


int main()
{
    auto square = [](double a) {return a*a;};
    std::cout << "square(1.414)" <<square(1.414) << std::endl;

    std::vector<animal::Person> students{{"Kim",20},{"Kim",20},{"Kim",20},{"Kim",20},{"Kim",20}};
    students.push_back({"Kim",20});
    students.push_back({"Lee",23});
    students.push_back({"Parck",30});
    students.push_back({"Choi",40});

    using namespace animal;
    sort(students.begin(), students.end(), [](const Person& p1, const Person& p2) {
        return p1.age < p2.age;
    });

    for (const auto& p : students)
        std::cout << p.name << " : " << p.age << std::endl;
}
