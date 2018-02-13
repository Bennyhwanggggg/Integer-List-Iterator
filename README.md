# Integer-List-Iterator

An iterator offers an easy way to traverse through a collection, add new elements, delete and modify
existing elements. Iterators are widely supported by langauges like C++ and Java. However, C does not
offer iterators. In this assignment your task is to implement two list iterators that allow the programmer to
traverse the list in either direction, modify the list during iteration, and obtain the iterator's current position in
the list.

A List Iterator has no current element; its cursor position always lies between the element that would be
returned by a call to previous and the element that would be returned by a call to next. An iterator for a list
of length n has n+1 possible cursor positions, as illustrated by the carets (^) below:
                   Element(0) Element(1) Element(2) ... Element(n-1)
cursor positions: ^          ^          ^          ^                ^
