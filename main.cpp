/*
#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

char * MakeStrAdr(int len)
{
    char*str=(char*)malloc(sizeof(char)*len);
    return str;
}
int main()
{
    char * str=MakeStrAdr(20);
    strcpy(str,"I am so happy~");
    cout <<str<< endl;
    free(str);
    return 0;
}

#include <iostream>
#include <string.h>
using namespace std;

char * MakeStrAdr(int len)
{
    //char*str=(char*)malloc(sizeof(char)*len);
    char*str=new char[len];
    return str;
}
int main()
{
    char * str=MakeStrAdr(20);
    strcpy(str,"I am so happy~");
    cout <<str<< endl;
    //free(str);
    delete []str;
    return 0;
}
*/
#include <iostream>

using namespace std;

void SwapPointer(int*(&ref1),int*(&ref2))
{
    int tmp=ref1;
    ref1=ref2;
    ref2=tmp;
}
int main()
{
    int num1=5;
    int *ptr1=&num1;
    int num2=10;
    int *ptr2=&num2;
    cout<<*ptr1<<' '<<*ptr2<<endl;
    SwapPointer(ptr1,ptr2);
    cout<<*ptr1<<' '<<*ptr2<<endl;
    return 0;
}
