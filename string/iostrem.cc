#include <iostream>
int main()
{
        std::cout << "Enter two numbers:" << std::endl;
        int v1, v2;
        std::cin >> v1 >> v2;
        std::cout << "the sum of " << v1 << " and " << v2 << " is " 
                << v1 + v2 << std::endl;
        std::cout << "/*";
        std::cout << "*/";
        // std::cout << /* "*/" */;
        std::cout << /* "*/" /* "/*" */;
        return 0;
}
