#include <stdio.h>
#include <stdbool.h>

int main() {
  // Character Types
  char a = 'C';             // Single character: 'C'
  char b[] = "Bro";         // String (Array of characters): "Bro"
    
  // Floating-point Types
  float c = 3.141592;          // Single-precision floating point (4 bytes)
  double d = 3.14159265358973; // Double-precision floating point (8 bytes)

  // Boolean Type
  bool e = true;            // Boolean value: true (1 byte)
    
  // Unsigned Character
  unsigned char g = 255;    // Unsigned character (1 byte, 0-255)

  // Integer Types
  short int h = 32767;          // Short integer (-32,768 to +32,767)
  unsigned short int i = 65535; // Unsigned short integer (0 to 65,535)
  int j = 214748364;            // Integer (-2,147,483,648 to +2,147,483,647)
  unsigned int k = 214748364;   // Unsigned integer (0 to 4,294,967,295)

  // Long Types
  long long int l = 922132829381279;               // Long long integer (-9 quintillion to +9 quintillion)
  unsigned long long int m = 3128391284274218976U; // Unsigned long long (0 to 18 quintillion)

  // Print Values
  printf("Character a: %c\n", a);
  printf("String b: %s\n", b);
  printf("Float c: %.6f\n", c);
  printf("Double d: %.14f\n", d);
  printf("Boolean e: %d\n", e);
  printf("Unsigned char g: %d\n", g);
  printf("Short int h: %d\n", h);
  printf("Unsigned short int i: %u\n", i);
  printf("Integer j: %d\n", j);
  printf("Unsigned int k: %u\n", k);
  printf("Long long int l: %lld\n", l);
  printf("Unsigned long long int m: %llu\n", m);

  return 0;
}

/*
  * `char`                   | Single character, 1 byte (-128 to +127) %d or %c
  * `char[]`                 | Array of characters (String) %s
  * `float`                  | 4 bytes (6-7 digits of precision) %f
  * `double`                 | 8 bytes (15-16 digits of precision) %lf
  * `bool`                   | 1 byte (true or false) %d
  * `unsigned char`          | 1 byte (0 to 255) %d or %c
  * `short int`              | 2 bytes (-32,768 to +32,767) %d
  * `unsigned short int`     | 2 bytes (0 to 65,535) %d
  * `int`                    | 4 bytes (-2,147,483,648 to +2,147,483,647) %d
  * `unsigned int`           | 4 bytes (0 to 4,294,967,295) %u
  * `long long int`          | 8 bytes (-9 quintillion to +9 quintillion) %lld
  * `unsigned long long int` | 8 bytes (0 to 18 quintillion) %llu
*/