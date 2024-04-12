#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;


class Cart{
    public:

        vector<string> all_items = {"cucumber", "tomato", "milk", "bread", "water", "candy"};
};

class Person {
    public:

        string item;
        Person(const vector<string>& items) {
            if (!items.empty()) {
                item = items[rand() % items.size()];
            }
        }
};

class Cash{
    

    public:
    
        int people;
        int minute = 1;
        bool opened;
        float chance = 1.0;

        bool ifOpened()
        {
            return opened;
        }

        float checker(int people, bool opened)
        {   
            if(opened == true){
                if(people > 6)
                {
                    chance = 0.05;
                }
            } 
        }

        

};


int main(){

    Cash firstCash;
    Cash secondCash;
    Cash thirdCash;

}

