#include "stack.h"
#include <iostream>
using namespace std;
int main() {
    Stack<int> IntStack;  
    Stack<float> FloatStack;  

    int data;
    float val;
    cout << "integers and floats: \n";
       
    IntStack.Push(4);
    FloatStack.Push(2.2);

    IntStack.Pop(data);  
    std::cout << data << std::endl;

    FloatStack.Pop(val);  
    std::cout << val << std::endl;  

    return 0;
}
