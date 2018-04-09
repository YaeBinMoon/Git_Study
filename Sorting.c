#include "Sortings.h"

/* ���� ������ �̿��� �������� ���� */
void BubbleSort(int* data, int len) //len : data�� ��
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
	int pivot; // ������(ù ���)�� ������
	int temp; // ������ ���� ������ ��ȯ �� temp ����
	int low, high; // ���� ���θ� �Ǻ��ϱ� ���� ����� �ε���
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