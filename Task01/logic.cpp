#include "logic.h"

// C/C++
void get_extream_position(int* array, int n, int m, int* imax, int* jmax) {
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			if (array[i * m + j] > array[*imax * n + *jmax]) {
				*imax = i;
				*jmax = j;
			}
		}
	}
}

//C++
//void get_extream_position(int* array, int n, int m, int& imax, int& jmax) {
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < m; j++)
//		{
//			if (array[i * m + j] > array[imax * n + jmax]) {
//				imax = i;
//				jmax = j;
//			}
//		}
//	}
//}