#include <math.h>
#include "func.h"

solution Func(double a, double b, double c) {
    solution res;
	res.count = 0;
	
    double d = b * b - 4 * a * c;

    if (d < 0.0){
	    res.count = 0;
    }
	
    if (d == 0.0) {
	    res.x1 = -b/(2*a);
	    res.count = 1;
    }
    if (d > 0.0) {
	    res.x1 = (-b - sqrt(d)) / (2*a);
	    res.x2 = (-b + sqrt(d)) / (2*a);
	    res.count = 2;
    }
    return res;
}
