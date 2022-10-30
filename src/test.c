struct Test {
  int a;
  int b;
};
struct Test t;

int x(int a) {
  int b = 0;
  
  b = a;
  if (a == 12) { 
    a = 13;

    if (b == 13) {
      b = 12;
    } else {
      b = 15;
    }
  }
  else {
    if (b == 13) {
      b = 12;
    } else {
      b = 15;
    }
  }

  { 
    a = b;
    b = a;
  }
  
  do {
    a ++;
    b ++;
  }while(b < 20);

  while(b < 12) {
    b++;

    if (b > 10) {
      a++;
    }
  }

  switch(b) {
  case 12:
    a = 12;
    break;
  case 3:
    a = 13;
    break;
  default:
    b = 12;
    break;
  }
  
  return a;
}

int main(int argc, char** argv) {
  int d = 0;

  return x(d);
}
