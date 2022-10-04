// Make 4 variables where num is an integer, num_2 is a long, num_3 is a float and num_4 is a double. Assign correct numbers to these variables  and print the type of them.

/*
# include <iostream>
using namespace std;

int main(){
    int num = 1;
    long num_2 = 30;
    float num_3 = 5.41;
    double num_4 = 4.66;
    cout << typeid(num).name() << endl;
    cout << typeid(num_2).name() << endl;
    cout << typeid(num_3).name() << endl;
    cout << typeid(num_4).name() << endl;
    
} */

/*
Let's practice increment (++) and decrement(--) operators. The position of operator (prefix or postfix) influences how the operation will be done.
 If operator is prefix/before variable (++num or --num) it means that the increment or decrement will be done before assignment.
If the operator is postfix/after variable (num++ or num--) it means that the increment or decrement will not be done before assignment.
Read more about this and see examples https://www.tutorialspoint.com/cplusplus/cpp_increment_decrement_operators.htm
 You have num = num
Make pre increment and print it.
Make post increment and print it.
Make post decrement and print it.
Make pre decrement and print it.
Separate all answers with ----

# include <iostream>
using namespace std;

int main(){
    int num = 50;
    int incrafter;
    int incrbefore;
    int decrafter;
    int decrbefore;
    incrbefore = ++num;
    incrafter = num++;
    decrafter = num--;
    decrbefore = --num;

    cout << incrbefore << endl;
    cout << "----" << endl;
    cout << incrafter << endl;
    cout << "----" << endl;
    cout << decrafter << endl;
    cout << "----" << endl;
    cout << decrbefore << endl;
    return 0;


}*/

/*Make an array with values ​​"Seoul", "Busan","Incheon","Cheongju" and "Jeju". Using indexing print like:

 The biggest city is Seoul
 The third city is Incheon
 I live in Cheongju
 We wanna visit Jeju

#include <iostream>
using namespace std;

int main(){
    string my_array[5] = {"Seoul", "Busan", "Incheon", "Cheongju", "Jeju"};
    cout << "The biggest city is: " << my_array[0] << endl;
    cout << "The third city is: " << my_array[2] << endl;
    cout << "I live in: " << my_array[3] << endl;
    cout << "We wanna visit: " << my_array[4] << endl;
}*/



/* #include <iostream>
using namespace std;

int main(){
    char var_1 = 'C';
    int var_2 = 2147483647;
    float var_3 = 3.9853126;
    bool var_4 = false;
    char var_5 = 'B';
    double var_6 = 2394.3695756378;
    short var_7 = 32767;
    char var_8 = 'O';
    int var_9 = -2147483648;
    bool var_10 = true;
    
    cout << "Variable C is " << typeid(var_1).name() << endl;
    cout << "--------------------" << endl;
    cout << "Variable 2147483647 is " << typeid(var_2).name() << endl;
    cout << "--------------------" << endl;
    cout << "Variable 3.98531 is " << typeid(var_3).name() << endl;
    cout << "--------------------" << endl;
    cout << "Variable 0 is " << typeid(var_4).name() << endl;
    cout << "--------------------" << endl;
    cout << "Variable B is " << typeid(var_5).name() << endl;
    cout << "--------------------" << endl;
    cout << "Variable 2394.37 is " << typeid(var_6).name() << endl;
    cout << "--------------------" << endl;
    cout << "Variable 32767 is " << typeid(var_7).name() << endl;
    cout << "--------------------" << endl;
    cout << "Variable O is " << typeid(var_8).name() << endl;
    cout << "--------------------" << endl;
    cout << "Variable -2147483648 is " << typeid(var_9).name() << endl;
    cout << "--------------------" << endl;
    cout << "Variable 1 is " << typeid(var_10).name() << endl;
    cout << "--------------------" << endl;

    
}

*/