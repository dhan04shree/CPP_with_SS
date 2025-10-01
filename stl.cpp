//STL is standard template library
//It is a powerful set of c++ template classes
//At the core of the C++ Standard Template Library are following three well-structured components 
//1.containers
//2. Algorithms
//3. Iterators

//1. Containers are used to manage collections of objects of a certain kind.
//container library in STL provide containers that are used to create data structures like arrays,linked list,trees,etc.
//these container are generic, they can hold elements of any data types.
//example : vector

//2.Algorithms act on containers. They provide the means by which you will perform initialization, sorting, searching, and transforming of the contents of containers.
//Algorithms library contains built in functions that performs complex algorithms on the data structures.

//3. Iterators are used to step through the elements of collections of objects. these collections may be containers or subsets of containers.
//Iterators in STL are used to point to the containers. 
//Iterators actually acts as a bridge between containers and algorithms.

//1. Containers
//containers library is a collections of classes.
//the containers are implemented as generic class templates.
//containers help us to implement and replicate simple and complex data structures very easily like arrays,list,trees,associative arrays and many more.
//containers can be used to hold different kind of objects.

//vector : replicates arrays
//queue : replicates queues
//stack : replicates stack
//priority_queue : replicates heaps
//list : replicate linked list
//set : replicates trees
//map : associative arrays

//classification of containers
//sequence containers : like array,linked list,etc.
//associative containers : sorted data structures like map,set,etc
//unordered associative containers : unsorted data structures
//containers adapters : interfaces to sequence containers

#include<iostream>
#include<list>
using namespace std;
int main(){
    list <int> obj;
}