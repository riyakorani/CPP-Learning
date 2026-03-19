// One base class → Multiple derived classes

//         Base
//        /   \
//       /     \
//    Derived1  Derived2

// Both derived classes inherit from the same base class.


/*

// 1️⃣ Definition:--
Hierarchical inheritance is a type of inheritance 
where one base class is inherited by multiple derived classes.

// 📌 Structure:-
       Base
      /   \
     /     \
Derived1  Derived2
             \
           Derived3

All derived classes share the same base class.

Example idea:
Base class → Animal
Derived classes → Dog, Cat, Cow

All inherit common features like eat().

// 2️⃣ Syntax of Hierarchical Inheritance

class Base {
    // base class members
};

class Derived1 : public Base {
    // members of Derived1
};

class Derived2 : public Base {
    // members of Derived2
};

// Key point:--
Multiple classes inherit from the same base class


// 3️⃣ Properties of Hierarchical Inheritance

Important properties 🧠

1️⃣ One base class
There is only one parent class.
Example:
Vehicle

2️⃣ Multiple derived classes
Many child classes can inherit it.
Example:
Vehicle
 /   \
Car  Bike

3️⃣ Code Reusability
All derived classes can use base class functions.
Example:
start() function used by Car, Bike, Truck.

4️⃣ Each derived class can have its own functions
Example:
Car → drive()
Bike → ride()
Truck → load()

5️⃣ Access specifiers affect inheritance
If inherited as:
public Base
Then:
public → public
protected → protected

*/