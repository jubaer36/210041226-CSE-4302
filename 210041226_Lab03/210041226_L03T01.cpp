#include<iostream>
using namespace std;

class Counter
{
private:
    int count;
    int incrementStep;
public:
    void setIncrementStep(int step_val){
        incrementStep =  step_val;
    }
    int getCount(){
        return count;
    }
    void increment(){
        count+=incrementStep;
    }
    void resetCount(){
        count = 0;
    }
    bool isEven(){
        if(!count%2)return true;
        else return false;
    }
};



int main(){
    Counter counter1;
    counter1.resetCount();
    counter1.setIncrementStep(5);

    counter1.increment();
    counter1.increment();
    counter1.increment();
    cout << "Current count : " << counter1.getCount() << endl;

    if (counter1.isEven())
    {
        cout << "Count is even " << endl;
    }
    else{
        cout << "Count is odd" << endl;
    }
    counter1.resetCount();
    cout << "After resetting : " << counter1.getCount() << endl;

    
    
    


}