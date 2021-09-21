#include <iostream>
using namespace std;

//sorting function
void sort(int numbers[], int values){
	//outer loop

	for(int i =0; i < values; i++){
		//inner loop
		for(int j = i+1; j< values; j++){
			//comparison
			if(numbers[j] < numbers[i]){
				//swapping values
				int temp = numbers[j];
				numbers[j] = numbers[i];
				numbers[i] = temp;
			}

		}

	}
}



int main() {

	int numValues = 8;
	int numbers[] = {89, 7, 99, 8, 12, 76, 78, 6};

	cout << "origional array:" << endl;
	for (int i =0 ; i < numValues; i++){
		cout << numbers[i]<< " ";

	}

	cout << endl;
	cout << "Sorted array: "<< endl;

	sort(numbers,numValues);
	for (int i =0 ; i < numValues; i++){
		cout << numbers[i]<< " ";

	}






return 0;

}






