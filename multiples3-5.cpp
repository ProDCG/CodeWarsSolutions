int solution(int number) 
{
  int num = 0;
  for (int i = 0; i < number; ++i) {
    if ((i % 3 == 0) || (i % 5 == 0)) {
      num += i;
    }
  }
  return num;
}