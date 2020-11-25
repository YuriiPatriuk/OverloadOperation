#include <iostream>

#include "Array.h"


int main()
{
    Array array1(5, 1);
    //array1[0] = 500;
    array1[10] = 676; // garbage = 676
    std::cout << "arr[8]:" << array1[8] << std::endl; //arr[8]: 676 (coz garbage = 676 and index '8' is bad)
    Array array2(5, -1);
    array2[1] = 777;

    array1.print();
    array2.print();
    bool check= array1 == array2;
    std::cout <<"Check: "<< check << std::endl;

    Array array3 = (array1 + array2); // array1(this) array2(other)
    array3.print();
    
    (array3++).print();
    array3.print();








    //Array clone = array1;
    //clone.print();
    //clone = array2;
    //clone.print();


}

