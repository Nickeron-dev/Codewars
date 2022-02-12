#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int size;
		cin >> size;
		int arr[size];
		for (int j = 0; j < size; j++)
		{
			cin >> arr[j];
		}
		
		bool verdict = false;
		int arr_copy[size];
		for (int j = 1; j <= size - 1; j++)
		{
			copy(arr, arr + size, arr_copy);
			sort(arr_copy, arr_copy + j);
			sort(arr_copy + j, arr_copy + size);
			//cout << "arr: \n";
			//for (int k = 0; k < size; k++)
			//{
				//cout << arr_copy[k] << " ";
			//}
			if (is_sorted(arr_copy, arr_copy + size))
			{
				verdict = verdict == true ? true : false;
				//cout << "NO, it is sorted\n";
			}
			else
			{
				verdict = true;
				//cout << "YES, it is NOT sorted\n";
			}
			
			
			//cout << endl;
		}
		if ( ! verdict )
		{
			cout << "NO\n";
		}
		else 
		{
			cout << "YES\n";
		}
	}
	return 0;
}

//int main()
//{
	//int t;
	//cin >> t;
	//for (int i = 0; i < t; i++)
	//{
		//int size;
		//cin >> size;
		//int arr[size];
		//for (int j = 0; j < size; j++)
		//{
			//cin >> arr[j];
		//}
		//if (is_sorted(arr, arr + size))
		//{
			//cout << "NO\n";
			//return 0;
		//}
		//bool verdict = false;
		//int max;
		//int min;
		////int arr_copy[size];
		//for (int j = 1; j <= size - 1; j++)
		//{
			////copy(arr, arr + size, arr_copy);
			//max = *max_element(arr, arr + j);
			//min = *min_element(arr + j, arr + size);
			////sort(arr_copy, arr_copy + j);
			////sort(arr_copy + j, arr_copy + size);
			////cout << "arr: \n";
			////for (int k = 0; k < size; k++)
			////{
				////cout << arr_copy[k] << " ";
			////}
			////cout << "\n max: " << max << endl;
			////cout << "\n min: " << min << endl;
			//if (max > min)
			//{
				//verdict = verdict == true ? true : false;
			//}
			//else
			//{
				//verdict = true;
			//}
		//}
		//if ( ! verdict )
		//{
			//cout << "YES\n";
		//}
		//else 
		//{
			//cout << "NO\n";
		//}
	//}
	//return 0;
//}
			//if (is_sorted(arr_copy, arr_copy + size))
			//{
				//verdict = verdict == true ? true : false;
				////cout << "NO, it is sorted\n";
			//}
			//else
			//{
				//verdict = true;
				////cout << "YES, it is NOT sorted\n";
			//}
			
			
			////cout << endl;
		//}
		//if ( ! verdict )
		//{
			//cout << "NO\n";
		//}
		//else 
		//{
			//cout << "YES\n";
		//}
		
		//bool verdict = false;
		//int arr_copy[size];
		//for (int j = 1; j <= size - 1; j++)
		//{
			//copy(arr, arr + size, arr_copy);
			//sort(arr_copy, arr_copy + j);
			//sort(arr_copy + j, arr_copy + size);
			////cout << "arr: \n";
			////for (int k = 0; k < size; k++)
			////{
				////cout << arr_copy[k] << " ";
			////}
			//if (is_sorted(arr_copy, arr_copy + size))
			//{
				//verdict = verdict == true ? true : false;
				////cout << "NO, it is sorted\n";
			//}
			//else
			//{
				//verdict = true;
				////cout << "YES, it is NOT sorted\n";
			//}
			
			
			////cout << endl;
		//}
		//if ( ! verdict )
		//{
			//cout << "NO\n";
		//}
		//else 
		//{
			//cout << "YES\n";
		//}
	//}
	//return 0;
//}
