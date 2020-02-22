#include <bits/stdc++.h>

using namespace std;

void shellsort(int a[], int size)
{
    int i, j, gap;
	for (gap = size / 2; gap > 0; gap /= 2) // 每次的增量，递减趋势
		{
			for (i = gap; i < size; i++) //每次增量下，进行几组插入排序，如第一步就是（从12，9，73，26，37）5次
				for (j = i ; j -gap >= 0 && a[j-gap] > a[j]; j -= gap)// 每个元素组中进行直接插入排序，看例子
					swap(a[j-gap], a[j]); //如果增量为2时他的插入查询操作下标为：
										//（2-0，3-1/ 4-2-0，5-3-1/ 6-4-2-0，7-5-3-1/ 8-6-4-2-0，9-7-5-3-1）
        	for(int k=0; k<size; k++) // 输出每轮排序结果
            	cout<<a[k]<<",";
        	cout<<endl;
		}
}