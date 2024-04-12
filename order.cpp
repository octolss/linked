#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Cart{
    public:
        vector<string> all_items = {"cucumber", "tomato", "milk", "bread", "water", "candy"};
};

class Person{
    public:
        string item = all_items[rand() % all_items.size()];
};

class Cash{
    bool opened;

    public:

        bool ifOpened()
        {
            return opened;
        }

        int people;
        int minute = 1;

};


int main(){



}

