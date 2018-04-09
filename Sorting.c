#include "Sortings.h"

/* 버블 정렬을 이용한 오름차순 정렬 */
void BubbleSort(int* data, int len) //len : data의 수
{
	int i, j, temp;
	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < len - i - 1; j++)
		{
			if (data[j] > data[j + 1])
			{
				temp = data[j + 1];
				data[j + 1] = data[j];
				data[j] = temp;
			}
		}
	}
}

void InsertionSort(int *data, int len)
{
	int i, j, temp;
	for (i = 1; i < len; i++)
	{
		if (data[i] >= data[i - 1])continue;
		temp = data[i];
		for (j = i - 1; j >= 0 && data[j] >= temp; j--)
			data[j + 1] = data[j];
		data[j + 1] = temp;
	}
}

void QuickSort(int* data, int left, int right)
{
	if (right > left)
	{
		int new_pivot = partition(data, left, right);
		QuickSort(data, left, new_pivot - 1);
		QuickSort(data, new_pivot + 1, right);
	}
}

int partition(int* data, int left, int right)
{
	int pivot; // 기준점(첫 요소)의 데이터
	int temp; // 정렬을 위한 데이터 교환 시 temp 변수
	int low, high; // 정렬 여부를 판별하기 위해 사용할 인덱스
	pivot = data[left];
	low = left;
	high = right + 1;

	do
	{
		do
		{
			low++;
		} while (low <= right && data[low] < pivot);

		do
		{
			high--;
		} while (left <= high && data[high] > pivot);
		if (low < high)
			SWAP(data[low], data[high], temp);
	} while (low < high);
	SWAP(data[left], data[high], temp);

	return high;
}