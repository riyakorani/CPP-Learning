/*

// 1️⃣ Definition of Hybrid Inheritance
Hybrid inheritance is a type of inheritance 
where two or more types of inheritance are combined together.

It may combine:
Single inheritance
Multiple inheritance
Multilevel inheritance
Hierarchical inheritance

📌 Example structure:--
        A
       / \
      B   C
       \ /
        D

Here:
B and C inherit from A
D inherits from B and C
So multiple inheritance + hierarchical inheritance = Hybrid inheritance


// 2️⃣ Syntax of Hybrid Inheritance
Basic syntax:
class A{
};
class B : public A{
};
class C : public A{
};
class D : public B, public C{
};

Here:
A = Base class
B and C = Derived classes
D = Derived from two classes


// 3️⃣ Properties of Hybrid Inheritance
1️⃣ Combination of inheritance types
Hybrid inheritance combines two or more inheritance structures.

2️⃣ Creates complex hierarchy
It forms complex class relationships.

Example
 A
/ \
B  C
\ /
 D

3️⃣ May cause ambiguity
If both parent classes inherit from the same base class, ambiguity occurs.

Example:
 A
/ \
B  C
 \ /
  D
D may receive two copies of A.


4️⃣ Solved using scope resolution
obj.B::display();
obj.C::display();

5️⃣ Virtual inheritance can solve duplication
Using:
class B : virtual public A
This prevents diamond problem duplication.

*/