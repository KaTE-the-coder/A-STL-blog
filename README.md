# A-STL-blog

Hello everyone, welcome back to my blog, and today we will discuss a little bit about Standard Template Library or STL for short.<br/>

Before we jump into what STL is and what it does, we first have to ask ourselves, what is a class/function template? <br/>
It is best described with an analogy. Let's just say you want to create 10 letter 'K's with the same font but with different colors and patterns, in normal convention, you would have to paint by hand all 10 of those 'K's and then decorate them, but what if you have a stencil? By placing the stencil on another object, then spraying paint through the hole, you can create multiple letter 'K's with a variety of patterns.<br/>
That's what a class/function template does, class/function templates are classes/functions that serve as a pattern for creating other similar classes/functions. We can create a generic class/function without having to specify the exact type(s) of some or all of the variables.<br/>
Now that we know what a class/function template is, we can start asking the bigger question: "What is STL and what are its uses in C++"?<br/>
Again this is best explained through an analogy, let's go back to our stencil analogy, imagine STL being a store that sells stencils, when you walk inside the store, you will meet lanes which in this case represent header files.<br/>
In those lanes, lots of stencils(class/function templates) are on display, if you want to create something with that stencil, you buy it and use it to your own desire.<br/>

![](images/STL%20illustration.JPG)

That's technically what STL is: a place that holds class and function templates. And when you want to use those templates, you create a statement with the form:<br/>
                   class/function_template_name <type> class/function_name ;<br/>
STL is very powerful because it is equipped with all the common classes and functions that you can use in your code. Without STL, you will have to manually create new functions and classes everytime your data type needs to change, which could take a a long time. If you know how to use STL correctly, your coding will feel so much easier.<br/>
By far the most commonly used functionality of the STL library are the STL container classes.<br/>
The STL contains many different container classes that can be used in different situations.<br/>

Containers in STL are divided into the following types:
1. Sequence containers :
* Vector
* Deque
* List
2. Associative containers :
* Set
* Multiset
* Map
* Multimap
3. Container adapters :
* Stack
* Queue
* Priority-queue
In each container, there are a lot of member functions which you can use to perform different tasks on your object.<br/>

Let's see how some of them works, shall we?
1. Vector:<br/>
![](images/vectorTable.JPG)<br/>


Click the link below to see how vector works with its member functions:
[vector codes](https://github.com/KaTE-the-coder/A-STL-blog/blob/master/vector.cpp)

In main, type in the function setVector():
[vector main](https://github.com/KaTE-the-coder/A-STL-blog/blob/master/main.cpp)

When we output it, it will have the result:<br/>
Before std::sort:<br/>
1 2 4 3 6 10 - 1 0 <br/>
After std::sort:<br/>
-1 0 1 2 3 4 6 10 <br/>

So the std::vector by default doesn't do the sorting, the order of the values in it is the exact order we put the values in.
By using std::sort from <algorithm> header file can we sort the values.<br/>

Fortunately there's one class container we can use to fix std::vector downside, std::set.<br/>

2. Set:<br/>
![](images/setTable.JPG)<br/>



Click the link below to see how set works with its member functions:
[set code](https://github.com/KaTE-the-coder/A-STL-blog/blob/master/set.cpp)

In main, type in the function setSet():
[set main](https://github.com/KaTE-the-coder/A-STL-blog/blob/master/main.cpp)


The output will be:<br/>
-1 0 1 2 3 4 5 7 100 <br/>
As you can see, it automatically sort them in ascending order and no duplication of integers are performed.<br/>

3. Map:<br/>
std::map is similar to std::set however std::map has a combination of a key value and a mapped value while std::set only has the key value.<br/>
![](images/mapTable.JPG)<br/>



Click the link below to see how map works with its member functions: 
[map codes](https://github.com/KaTE-the-coder/A-STL-blog/blob/master/map.cpp)

In main, type in the function setMap() :
[map main](https://github.com/KaTE-the-coder/A-STL-blog/blob/master/main.cpp)

The output will be:<br/>
Ariadne 23 <br/>
Arthur 29 <br/>
Cobb 36 <br/>
Eames 33 <br/>
Robert 33 <br/>

So by default, std::map sorts key values in ascending order.<br/>

All of the conatiners in STL all have similar member functions and if you use them correctly, they can be very useful for you.<br/>
That's all for today, folks. I will see you a next time.
