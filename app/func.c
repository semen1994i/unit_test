#include <math.h>
#include "func.h"

solution Func(double a, double b, double c) {
    solution res;

    if (a == 0){
	    if (b == 0){
		    if (c == 0){
			    res.count = 1111;
			    return res;
		    }
		    else{
			    res.count = 0;
			    return res;
		    }
	    }
	    else{
		    res.x1 = -c / b;
		    return res;
	    }
    }
		
    double d = b * b - 4 * a * c;

    if (d < 0.0){
        res.count = 0;
    }
	
    if (d == 0.0) {
        res.x1 = -b/(2*a);
    }
    if (d > 0.0) {
        res.x1 = (-b - sqrt(d)) / (2*a);
        res.x2 = (-b + sqrt(d)) / (2*a);
    }
    return res;
}
