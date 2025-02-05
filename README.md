# Dynamic-Allocation-of-Input
🌍 **English** | [简体中文](/README_zh.md)

This repository supplies a C header file for dynamic allocating the input char type data. The length of the char array depends on the length of the string you input. An example C code is also provided.

## How it works?
It dynamically adjust the size of array when inputting. It will not end inputting until it counters `\n` and `EOF`, which means that `' '` will be included.

## How to use it?
In your own C file, the header files below should be included.
``` c
#include <stdlib.h>
#include "DyInput.h"
```

To create a new string, you need to clarify a new `char*` pointer, since `input()` returns the address of the array.
``` c
char *text = input();
```
And don't forget to free it since it is dynamic allocated.
``` c
free(text);
```

You can use the example code to explore more.