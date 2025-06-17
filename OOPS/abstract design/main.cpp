#include <bits/stdc++.h>
using namespace std;
#include "bird.h"


void birddoesomething(Bird *&bird){

    bird->eat();
    bird->fly();
    bird->eat();
}


int main() {
    Bird* b1 = new sparrow();
    Bird* b2 = new Eagle();

    birddoesomething(b1);
    birddoesomething(b2);

    return 0;
}