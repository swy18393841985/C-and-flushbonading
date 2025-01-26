## hello,C++
>  * 只写我不知道的c++的语法知识
### 第一个c++程序
- 打印“hello world”
```c++
#include<iostream>
using namespace std;

int main()
{
	cout << "hello world"<<endl;
	system("pause");
	return 0;
}
```
- #include<iostream> 
  - C++编程语言中的一个预处理指令，用于包含（或导入）标准输入输出流库。这个库提供了进行输入输出操作的类和函数，是C++标准库的一部分。

  - 在 #include<iostream> 指令被处理后，程序就可以使用 iostream 库中定义的各种功能了，这些功能主要包括：

    - std::cin：用于从标准输入（通常是键盘）读取数据。
    - std::cout：用于向标准输出（通常是屏幕）写入数据。
    - std::cerr：用于向标准错误输出写入数据，通常用于报告错误消息。这个输出流也是输出到屏幕，但通常与 std::cout 分开处理，以便可以将错误消息与普通输出区分开来。
    - std::clog：用于记录日志信息，它也是输出到标准错误输出，但通常用于更详细的、非紧急的日志记录。
    - 此外，iostream 库还提供了输入和输出操作符（如 >> 和 <<），这些操作符被重载以支持各种数据类型的输入和输出。

  - 在使用 #include<iostream> 后，通常还需要使用 using namespace std; 语句（尽管这不是强制的），以便能够直接使用 cin、cout 等而不需要每次都加上 std:: 前缀。然而，如前所述，在生产级代码中，为了避免命名冲突和提高代码的可读性和可维护性，最好避免使用 using namespace std;，而是在需要的地方使用 std:: 前缀。
- using namespace std; 
  - 这行代码在C++中的意思是引入标准命名空间（Standard Namespace）。在C++中，标准库的所有标识符（比如类、函数等）都定义在一个名为std的命名空间中。这样做的目的是为了避免命名冲突，因为你可以定义自己的类、函数等，而这些可能与标准库中的名称相同。
  
  - 当你在代码的顶部写上using namespace std;后，就告诉编译器在接下来的代码中，如果遇到未明确指定命名空间的标识符，就默认在std命名空间中查找。这意味着你可以直接使用cout、cin、vector等而不需要每次都写成std::cout、std::cin、std::vector等。
  
  - 然而，虽然这样做可以让代码看起来更简洁，但在大型项目中通常不推荐使用using namespace std。
- system("pause");
  - system("pause"); 是一行在C++程序中经常见到的代码，特别是在Windows操作系统环境下。这行代码调用了系统的命令行解释器（通常是cmd.exe），并传递给它一个命令 pause。pause 命令的作用是暂停命令行的执行，直到用户按下任意键。

  - 在C++程序中，system("pause"); 通常被放在程序的末尾，尤其是在控制台应用程序中。其目的是防止程序在显示完其输出后立即关闭控制台窗口，从而允许用户有时间看到程序的输出结果。

  - 然而，尽管 system("pause"); 在学习和简单程序中很常见，但在生产级代码中通常不推荐使用它
### C++的头文件
- C++ 有头文件（header files）。头文件通常用于声明函数、类、宏、常量等，以便在多个源文件之间共享。头文件通常以 .h 或 .hpp 作为文件扩展名（尽管 .h 更常见于 C 语言，而 .hpp 逐渐成为 C++ 中更常见的扩展名，以区分 C 和 C++ 的头文件）。
- 头文件的使用方式如下
  - 创建头文件：
  创建一个头文件，例如 Hello.hpp，并在其中声明类、函数原型等。
```c++
#ifndef _HELLO_H_
#define _HELLO_H_

void print();

#endif
```
  - 创建源文件：
创建一个源文件，例如 Hello.cpp，并在其中定义头文件中声明的函数和类成员。
```c++
#include<iostream>
#include "Hello.hpp"
using namespace std;

void print()
{
	cout << "hello world" << endl;
}
```
  - 在另一个源文件中使用头文件：
在另一个源文件中，例如 main.cpp，包含头文件并使用其中声明的类或函数。
```c++
#include<iostream>
#include"Hello.hpp"
using namespace std;

int main()
{
	print();
	system("pause");
	return 0;
}
```
### c++的标准输入和输出
#### 1.标准输出cout
##### 设置域宽及位数
- 对于实型，cout 默认输出六位有效数据，setprecision(2) 可以设置有效位数，setprecision(n)<<setiosflags(ios::fixed)合用，可以设置小数点右边的位数。
示例代码：
```c++
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	printf("%c\n%d\n%f\n",'a',100,120.00);
	printf("%5c\n%5d\n%6.2f\n",'a',100,120.00);
	cout
	<<setw(5)<<'a'<<endl
	<<setw(5)<<100<<endl
	<<setprecision(2)<<setiosflags(ios::fixed)<<120.00<<endl;
	return 0;
}
```
```
输出结果：
a
100
120.000000
    a
  100
120.00
    a
  100
120.00
```
##### 按进制输出
```c++
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int i = 123;
	cout<<i<<endl;
	cout<<dec<<i<<endl;
	cout<<hex<<i<<endl;
	cout<<oct<<i<<endl;
	cout<<setbase(16)<<i<<endl;
	return 0;
}
```
```
输出结果：
123
123
7b
173
7b
```
##### 设置填充符
```c++
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout<<setw(10)<<1234<<endl;
	cout<<setw(10)<<setfill('0')<<1234<<endl;
	cout<<setw(10)<<setfill('0')<<setiosflags(ios::left)<<1234<<endl;
	cout<<setw(10)<<setfill('-')<<setiosflags(ios::right)<<1234<<endl;
	return 0;
}
```
```
输出结果：
      1234
0000001234
1234000000
------1234
```
##### 设置浮点数的输出是以科学记数法
```c++
double dd=123.4567;
cout<<setiosflags(ios::scientific)<<dd<<endl;
```
##### 输出进制时控制英文字母大小写
setiosflags(ios::uppercase)
resetiosflags(ios::uppercase)
```c++
int num=510;
cout<<"16 进制数(默认：小写方式):"<<hex<<num<<endl;
cout<<"以大写方式输出进制数: "<<setiosflags(ios::uppercase)<<hex<<num<<endl;
cout<<"恢复小写方式输出进制数: "<<resetiosflags(ios::uppercase)<<hex<<num<<endl;
```
```
16 进制数(默认：小写方式):1fe
以大写方式输出进制数: 1FE
恢复小写方式输出进制数: 1fe
```
#####  成员函数
格式:ostream put( char )
功能:输了一个字符。
```c++
#include <iostream>
using namespace std;
int main()
{
	char str[]="Programming with C++";
	for( int i=sizeof(str)/sizeof(str[0])-2 ; i>=0; i--)
	  cout.put(*(str+i));
	cout.put('\n');
	return 0;
}
```
```
++C htiw gnimmargorP
```
#### 2.标准输入cin
#####
### C++的变量
- 命名形式与C语言一模一样，不再赘述
```c++
#include<iostream>
using namespace std;

int main()
{
	int a = 10;
	cout << "a=" << a << endl;
	system("pause");
	return 0;
}
```
- 常量
  - 宏常量#define
  - const修饰变量
```c++
#include<iostream>
using namespace std;
#define day 7

int main()
{
	cout << "一周有"<< day<<"天" << endl;
	system("pause");
	return 0;
}
```
- 关键字（与c一样，不做解释） 
