// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Найти значение максимального из его локальных максимумов.
// Локальный максимум – элемент, который >= левого и правого соседей.
// При отсутствии локальных максимумов вернуть -1.
long long task2(unsigned A[], size_t n)
{
  int i;
  long long res = -1;
  for (i = 0; i < n; ++i)
    {
      if ((i != 0 && i != n - 1) && (A[i] >= A[i - 1] && A[i]) >= A[i + 1])
        res = (res < A[i]) ? A[i] : res;
    }
  return res;
}
