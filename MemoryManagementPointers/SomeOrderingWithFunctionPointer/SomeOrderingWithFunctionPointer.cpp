#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

const size_t N = 256;

void do_and_print(char * buffer, size_t len, int (*f)(int)){
    for (size_t idx = 0; idx < len; idx++)
        buffer[idx] = f(buffer[idx]);
    cout << buffer << endl;
}

int main()
{
    char* buffer = new char[N];

    cin.get(buffer, N);

    size_t len = strlen(buffer);

    do_and_print(buffer, len, tolower);

    do_and_print(buffer, len, toupper);

    delete[] buffer;

    return 0;
}
