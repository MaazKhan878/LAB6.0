
#ifndef MODE_H
#define MODE_H

typedef enum {
  AVERAGE,
  LIGHTNESS,
  LUMINOSITY
} Mode;

// assign value to my own data type using enumerator
typedef enum {
  NO_ERROR = 0,
  ERROR_PRESENT,
}Error;

#endif /* MODE_H */

/**
 * Returns the maximum value among the three given values
 */
int max(int a, int b, int c);

/**
 * Returns the minimum value among the three given values
 */
int min(int a, int b, int c);

/**
 * we made our error data type which return the error value and also we give value to this funtion by reference no need of return of value
 * There are also used another enum which use to select the mode according which mode should used for.
 */
Error toGrayScale(int *r, int *g, int *b, Mode mode);

/**
 * In the lab 5 we use different function for return the different value because one return one value
 * but this time we pass value by refrence which give the location of memory to the funtction make changes directly;
 */
Error toSepia(int *r, int *g, int *b);
