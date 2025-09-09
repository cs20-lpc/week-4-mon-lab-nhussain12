#include "LinkedList.hpp"
#include <iostream>
#include <string>

using namespace std;

int main() {

    // Test #1: Creating an Empty List
    LinkedList<int> intList;
    cout << "------------------------TEST #1: Creating an Empty List------------------------\n";
    cout << "List Length: " << intList.getLength() << endl;
    cout << "Check for Emptiness: ";

    if(intList.isEmpty()) {
        cout << "✅" << endl;
    } else {
        cout << "❌"<< endl;
    }

    // String List
    LinkedList<string> stringList;
    cout << "STRING LIST" << endl;
    cout << "List Length: " << stringList.getLength() << endl;
    cout << "Check for Emptiness: ";

    if(stringList.isEmpty()) {
        cout << "✅" << endl;
    } else {
        cout << "❌"<< endl;
    }

    // Test #2: Appending a List
    cout << endl;
    cout << "---------------------------TEST #2: Appending a List---------------------------\n";
    cout << "Integer List After Multiple Appends" << endl;
    intList.append(0);
    cout << intList << endl;
    intList.append(1);
    cout << intList << endl;
    intList.append(2);
    cout << intList << endl;

    // String List
    cout << "String List After Multiple Appends" << endl;
    stringList.append("Chocolate");
    cout << stringList << endl;
    stringList.append("Vanilla");
    cout << stringList << endl;

    cout << "Integer List Length: " << intList.getLength() << endl;
    cout << "String List Length: " << stringList.getLength() << endl;

    // Test #3: Getting Elements and Replacing Elements in a List
    cout << endl;
    cout << "-----------------TEST #3: Getting/Replacing Elements in a List-----------------\n";
    cout << "Integer Value at Position 2: " << intList.getElement(1) << endl;
    cout << "Integer Value at Position -1: ";

    // Try an Invalid Position
    try {
        intList.getElement(-1);
    }
    catch (const string& e) {
        cout << e << endl;
    }

    // Replace Values
    intList.replace(1, 100);
    cout << endl;
    cout << "After Replace Function: " << intList << endl;
    cout << "New Integer Value at Position 2: " << intList.getElement(1) << endl;
    intList.append(300);
    cout << "Integer Value at Position 3: " << intList.getElement(2) << endl;

    // String List
    cout << endl;
    cout << "STRING LIST" << endl;
    stringList.append("Strawberry");
    stringList.append("Mint Chocolate Chip");
    cout << "Appended String List: " << stringList << endl;

    cout << "String Value at Position 3: " << stringList.getElement(2) << endl;
    cout << "String Value at Position 4: " << stringList.getElement(3) << endl;
    stringList.replace(2, "Mint Chocolate Chip");
    stringList.replace(3, "Strawberry");
    cout << "String List with Replace: " << stringList << endl;
    cout << "String Value at Position 6: ";

    // Try an Invalid Replace
    try {
        stringList.replace(5, "Butterscotch");
    } catch (const string& e) {
        cout << e << endl;
    }

    // Test #4: Clearing a List
    cout << endl;
    cout << "----------------------------TEST #4: Clearing a List---------------------------\n";
    cout << "Current Integer List: " << intList << endl;
    intList.clear();
    cout << "Integer List After Clear: " << intList << endl;
    cout << "Check for Emptiness: ";

    if(intList.isEmpty()) {
        cout << "✅" << endl;
    } else {
        cout << "❌"<< endl;
    }

    cout << endl;
    cout << "STRING LIST" << endl;
    cout << "Initial String List: " << stringList << endl;
    stringList.clear();
    cout << "String List After Clear: " << stringList << endl;
    cout << "List Length: " << stringList.getLength() << endl;
    cout << "Check for Emptiness: ";

    if(stringList.isEmpty()) {
        cout << "✅" << endl;
    } else {
        cout << "❌"<< endl;
    }

    // Test #5: Clearing an Already Empty List
    cout << endl;
    cout << "-------------------TEST #5: Clearing an Already Empty List-------------------\n";
    LinkedList<int> emptyList;
    cout << "Initial List (should be empty): " << emptyList << endl;;
    cout << "Initial Length: " << emptyList.getLength() << endl;
    
    // Attempt to clear the empty list
    emptyList.clear();
    cout << "After Clear: " << emptyList << endl;;
    cout << "Length After Clear: " << emptyList.getLength() << endl;
    cout << "Is the list still empty? ";
    
    if(emptyList.isEmpty()) {
        cout << "✅" << endl;
    } else {
        cout << "❌" << endl;
    }

    return 0;
}