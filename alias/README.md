# alias

Datatype aliases are defined using the keyword `using` 
```c++
#include <iostream>
//

using LargePositiveNumber = unsigned long long int;
int main()
{

    LargePositiveNumber account_balance = 3000000;
    std::cout << account_balance << std::endl;
    return 0;
}

```

older C++ uses the typedef keyword 

```c++
#include <iostream>
//

typedef LargePositiveNumber  unsigned long long int;
int main()
{

    LargePositiveNumber account_balance = 3000000;
    std::cout << account_balance << std::endl;
    return 0;
}

```