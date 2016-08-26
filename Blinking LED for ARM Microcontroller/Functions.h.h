#ifndef__FUNCTION_H__

void delay(int *limit);
int recurse(int num);

int recurse(int num)
{
    
        return num;
}


void delay(int *limit)
{
     int count = 0;
     while(count < *(limit))
     {
       count++;
     }
}