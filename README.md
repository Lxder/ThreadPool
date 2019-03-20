ThreadPool
==========

A simple C++11 Thread Pool implementation.

Basic usage:
```c++
// create thread pool with 4 worker threads, task queue length is 100
ThreadPool pool(4, 100);

// enqueue and store future
auto result = pool.enqueue([](int answer) { return answer; }, 42);

// get result from future
std::cout << result.get() << std::endl;

```

You can compile example.cpp like that:
```
g++   -g -Wall -std=c++11 -pthread  example.cpp  -o example
```