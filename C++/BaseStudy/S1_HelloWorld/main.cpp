#include <iostream>

/// <summary>
/// 
/// </summary>
/// <returns></returns>
int main() 
{
	using namespace std;
	cout << "hello world!";
}
//相对于c，c++引入了面向对象编程和泛型编程机制

/* vs编译错误，提示:无法打开包括文件stdio.h ctype.h ucrtd.lib
* 解决方案属性->vc++目录：
* 包含目录：
* c:\program files (x86)\windows kits\10\include\10.0.19041.0\ucrt
* 库目录：
* c:\program files (x86)\windows kits\10\lib\10.0.19041.0\ucrt\x64
*/

//面向过程编程的3种基本结构，顺序、分支和循环。