//Maximum and minimum of an array using minimum number of comparisons
#include <bits/stdc++.h>
#include <iostream>
 struct node{
        int min,max;
    };
using namespace std;
node ash(int * arr, int n)
{
    node minmax;
   
     if (n == 1)
    {
        minmax.max = arr[0];
        minmax.min = arr[0];    
        return minmax;
    }
     
    // If there are more than one elements,
    // then initialize min and max
    if (arr[0] > arr[1])
    {
        minmax.max = arr[0];
        minmax.min = arr[1];
    }
    else
    {
        minmax.max = arr[1];
        minmax.min = arr[0];
    }
     
    for(int i = 2; i < n; i++)
    {
        if (arr[i] > minmax.max)    
            minmax.max = arr[i];
             
        else if (arr[i] < minmax.min)    
            minmax.min = arr[i];
    }
    return minmax;
}



// method 2
// divide and conquer


// C++ program of above implementation
#include <iostream>
using namespace std;

// structure is used to return
// two values from minMax()
struct Pair {
	int min;
	int max;
};

struct Pair ash(int arr[], int low, int high)
{
	struct Pair minmax, mml, mmr;
	int mid;

	// If there is only one element
	if (low == high) {
		minmax.max = arr[low];
		minmax.min = arr[low];
		return minmax;
	}

	// If there are two elements
	if (high == low + 1) {
		if (arr[low] > arr[high]) {
			minmax.max = arr[low];
			minmax.min = arr[high];
		}
		else {
			minmax.max = arr[high];
			minmax.min = arr[low];
		}
		return minmax;
	}

	// If there are more than 2 elements
	mid = (low + high) / 2;
	mml = ash(arr, low, mid);
	mmr = ash(arr, mid + 1, high);

	// Compare minimums of two parts
	if (mml.min < mmr.min)
		minmax.min = mml.min;
	else
		minmax.min = mmr.min;

	// Compare maximums of two parts
	if (mml.max > mmr.max)
		minmax.max = mml.max;
	else
		minmax.max = mmr.max;

	return minmax;
}




int main()
{
    int arr[]={1,2,3,4,5,89898,0,-1,10000};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<(ash(arr,n)).min<<" "<<ash(arr,n).max<<endl;
    cout<<(ash(arr,0,n-1)).min<<" "<<ash(arr,0,n-1).max<<endl;
    return 0;
}