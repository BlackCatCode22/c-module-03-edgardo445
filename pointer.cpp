#include <iostream>

// Function to allocate memory for an integer and initialize it
// Returns a pointer to the newly allocated integer
int* createAndInitializeInt(int initialValue) {
    // Dynamically allocate memory for a single integer
    int* myIntPointer = new int;

    // Use the dereference operator to set the value at the allocated memory
    *myIntPointer = initialValue;

    // Return the pointer to the caller
    return myIntPointer;
}

// Function that modifies the value pointed to by a pointer
// The parameter is a pointer to an integer
void modifyValue(int* ptr, int newValue) {
    // Check if the pointer is not null to prevent errors
    if (ptr != nullptr) {
        // Dereference the pointer to change the value at the memory address
        *ptr = newValue;
    }
}

// Function that deallocates memory
void cleanUp(int* ptr) {
    // Check if the pointer is not null before deleting
    if (ptr != nullptr) {
        // Deallocate the memory block pointed to by the pointer
        delete ptr;
        // Best practice: set the pointer to nullptr after deletion
        // to avoid "dangling pointers"
        ptr = nullptr;
    }
}

int main() {
    // 1. Create a pointer using a function that allocates memory
    int* myNumberPointer = createAndInitializeInt(150);

    // 2. Print the initial value using the returned pointer
    std::cout << "Initial value pointed to: " << *myNumberPointer << std::endl;

    // 3. Print the memory address
    std::cout << "Memory address of the allocated integer: " << myNumberPointer << std::endl;

    // 4. Call a function to modify the value through the pointer
    modifyValue(myNumberPointer, 250);

    // 5. Print the new value
    std::cout << "Value after modification: " << *myNumberPointer << std::endl;

    // 6. Demonstrate what happens when the pointer itself is passed by value
    // This is a common point of confusion. The `cleanUp` function will
    // delete the memory, but the `myNumberPointer` in `main` will not
    // be set to `nullptr` inside the function.
    cleanUp(myNumberPointer);

    // 7. This line is for demonstration of a "dangling pointer"
    // The memory has been freed, but myNumberPointer still holds the address.
    // Trying to access *myNumberPointer now is undefined behavior and can crash.
    // Uncomment the next line to see potential crashes or garbage values.
    // std::cout << "Attempting to access freed memory: " << *myNumberPointer << std::endl;
    // The previous line is a bad practice.

    // To properly handle the pointer, it must be set to nullptr in main.
    myNumberPointer = nullptr;

    // 8. Trying to clean up a null pointer is safe
    cleanUp(myNumberPointer);

    return 0;
}