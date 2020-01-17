#include "pbdata.h"

int main(void)
{
    //main
}
/*断言函数：它的作用是在编程的过程中为程序提供参数检查*/
#ifdef USE_FULL_ASSERT
void assert_failed(u8* file,u32 line)
{
  while(1)
  {
  }
}
#endif