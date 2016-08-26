#ifndef __FUNCTIONS_H__
#define __FUNCTIONS_H__

void delay(int *limit);
unsigned recurse(unsigned num);

unsigned recurse(unsigned num)
{

      
      if(num == 0U)
      {
          return 1U;
      }
      else
      {
        return num * recurse(num - 1U);
      }
}


void delay(int *limit)
{
     unsigned int volatile count = 0;
     while(count < *(limit))
     {
       count++;
     }
}

#endif //__FUNCTIONS_H__