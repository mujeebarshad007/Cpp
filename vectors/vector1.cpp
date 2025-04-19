#include <iostream>
#include <vector>
using namespace std;

// ALL BASIC VECTOR CONCEPT LEARNT

// Vector Functions that are used
// size
// push_back
// pop_back
// front
// back
// at

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5};
    cout << "Size = " << vec.size() << endl; // it will tell us size of the vector
    vec.push_back(2);
    vec.push_back(39);
    vec.push_back(278); // it is used to add elements to end of vector , We use it to add elements
    vec.push_back(97);
    cout << "Size after vector Pushing is= " << vec.size() << endl;

    // this is loop to handle vectors . It's Syntax<<
    cout << "The Values are \n";
    for (int val : vec)
    {
        cout << val << " ";
    }

    cout << endl;

    vec.pop_back(); // It is used to delete the last element in the vector

    cout << "Size  After Deleting last Element using function = " << vec.size() << endl;
    cout << "Values  After Deleting last Element using function : ";

    for (int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << " The First Value is " << vec.front() << endl;
    cout << " The Last Value is " << vec.back() << endl;
    cout << " The Value at index 1 is  " << vec.at(1) << endl;

    // In vectors like by using push_back the new memory is made by making
    //  double of last one that's wht=y its size will be 8 but capacity will be 10

    // capacity is always double to size

    cout << vec.size() << endl;
    cout << vec.capacity() << endl;

    return 0;
}