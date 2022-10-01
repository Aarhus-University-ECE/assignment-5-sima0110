#include <malloc.h>
#include "circle.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

circle c[5];

void fiveCircles(circle c[]) {
for (int i = 0 ; i < 5; i++){
   c[i].p.x = i; //sets value of i to c.p.x//
   c[i].p.y = i; //sets value of i to c.p.y//
   c[i].r = i; //sets value of i to c.r//
}
}

bool circleIsValid(const circle * c) {
if ((c-> r) > 0){ //checks the precondition (r>0)//
	return true;
 } 
 else {
	return false;
}
}

void translate(circle* c, const point* p) {

c -> p.x = (c -> p.x) + (p -> x); 
c -> p.y = (c -> p.y) + (p -> y);
}
