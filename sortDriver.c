#include <stdio.h>
#include <time.h>

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void bubbleSort(int array[], int size)
{
  int swappings = 0, comparisons = 0;
  for (int i = 0; i < size; i++)
  {
    for (int j = 1; j < size - i; j++)
    {
      comparisons++;
      if (array[j - 1] > array[j])
      {
        swap(&array[j - 1], &array[j]);
        swappings++;
      }
    }
  }
  printf("Comparisons: %d and Swappings: %d\n", comparisons, swappings);
}

void insertionSort(int array[], int size)
{
  int swappings = 0, comparisons = 0;
  for (int i = 1; i < size; i++)
  {
    int key = array[i];
    int j = i - 1;
    while (j >= 0 && key < array[j])
    {
      comparisons++;
      array[j + 1] = array[j];
      j--;
    }
    array[j + 1] = key;
  }
  printf("Comparisons: %d and Swappings: %d\n", comparisons, swappings);
}

void selectionSort(int array[], int size)
{
  for (int i = 0; i < size - 1; i++)
  {
    int min = i;
    for (int j = i + 1; j < size; j++)
    {
      if (array[j] < array[min])
      {
        min = j;
      }
    }
    int temp = array[i];
    array[i] = array[min];
    array[min] = temp;
  }
}

void printArray(int array[], int size)
{
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array[i]);
  }
}

void main()
{
  FILE *fptr;
  // fptr = fopen("randomNum.txt", "r");
  fptr = fopen("./Numbers/descendNum.txt", "r");
  // fptr = fopen("descendNum.txt", "r");
  int array[50000];
  for (int i = 0; i < 50000; i++)
  {
    int num;
    fscanf(fptr, "%d", &num);
    array[i] = num;
  }
  fclose(fptr);
  clock_t initialTime = clock();
  insertionSort(array, 50000);
  clock_t finalTime = clock();
  printf("Elapsed Time: %f seconds\n", (double)(finalTime - initialTime) / CLOCKS_PER_SEC);
}