/* Testing Code */

#include <limits.h>
int test_bitNor(int x, int y)
{
  return ~(x|y);
}
int test_minusOne(void) {
  return -1;
}
int test_evenBits(void) {
  int result = 0;
  int i;
  for (i = 0; i < 32; i+=2)
    result |= 1<<i;
  return result;
}
int test_isEqual(int x, int y)
{
  return x == y;
}
int test_getByte(int x, int n)
{
  union {
    int word;
    unsigned char bytes[4];
  } u;
  int test = 1;
  int littleEndian = (int) *(char *) &test;
  u.word = x;
  return littleEndian ? (unsigned) u.bytes[n] : (unsigned) u.bytes[3-n];
}
int test_copyLSB(int x)
{
  return (x & 0x1) ? -1 : 0;
}
int test_isPositive(int x) {
  return x > 0;
}
int test_isLessOrEqual(int x, int y)
{
  return x <= y;
}
int test_isNegative(int x) {
  return x < 0;
}
int test_bitMask(int highbit, int lowbit)
{
  int result = 0;
  int i;
  for (i = lowbit; i <= highbit; i++)
    result |= 1 << i;
  return result;
}
int test_abs(int x) {
  return (x < 0) ? -x : x;
}
int test_logicalNeg(int x)
{
  return !x;
}
