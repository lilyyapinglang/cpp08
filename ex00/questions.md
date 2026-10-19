
what is containers ?

how doe standard constainers behave ?

what is stl ?
 stl = standard template library


For-Each Loop vs. Iterators ? 
When you are just reading the elements, and don't need to modify them, the for-each loop is much simpler and cleaner than iterators.

However, when you need to add, modify, or remove elements during iteration, iterate in reverse, or skip elements, you should use iterators:


What is associative container ? 
An associative container is a type of data structure or collection in programming that stores and organizes elements using keys rather than numerical index positions


Unlike sequence containers (such as arrays or vectors), where you access items by their position (e.g., list[0]), you retrieve, insert, and delete items in an associative container by looking up a unique or matching key
elements can be accessed sequentially. 
```
array = It implements non-resizable array. 
ex: int arr[10]; // array of fixed size 10.
vector = It implements dynamic array with faster random access, these are quite useful as unlike arrays they can resize. 
ex: vector<int> v; // vector of int type
dequeue It is used to implement double-ended queue with faster random access 
ex: dequeue dq; //dequeue of character type
forward_list : It implements singly linked list. 
ex: forward_list fl; // forward_list of int type.
list : It implements double linked list. 
ex: list l; // lists of int
```
map: here each key we create must be unique. 
ex: map geek_no; // Here first data type is key and second data type is value
set: here also key we create must be unique but one important distinction from map is that here the value itself acts as a key so it means that elements in set are unique i.e. no repetition. 
ex: set s; // value itself acts as a key.
multimap: same as map but here key need not to be unique. 
ex: multimap geeks_no;
multiset: same as set but here uniqueness of elements doesn't matter i.e. we can have same element multiple time unlike set. 
ex: multiset marks;
```
Associative containers

https://www.geeksforgeeks.org/cpp/sequence-vs-associative-containers-cpp/

