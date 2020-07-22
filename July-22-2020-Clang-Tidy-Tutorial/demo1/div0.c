
#define ZERO 0

void test(int b) {
    int a, c;
    double *d;
    switch (b) {
      case 1:
        a = b/0; break;
      case 2:
	a = b/ZERO; break;
      case 4:
        c = b-4;
        a = b/c; break;
    }
}    
