#include <iostream>

class int_wrapper
{
private:
    int *myPtr;

public:
    int_wrapper(int value = 0) : myPtr(new int(value))
    {
    }
    ~int_wrapper()
    {
        delete myPtr;
    }
};