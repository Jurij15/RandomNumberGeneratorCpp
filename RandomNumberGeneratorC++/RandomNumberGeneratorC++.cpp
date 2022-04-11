
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <thread>
#include <chrono>

int main()
{
    while (true)
    {
        int randomnumber;
        srand(time(NULL));
        randomnumber = rand() % 100;
        std::this_thread::sleep_for(std::chrono::seconds(1));
        printf("%d\n", randomnumber);
        //return 0;
    }
}
