#include <iostream>
using namespace std;

const int COLS = 5;

int getTotal(int [][COLS], int);
double getAverage(int [][COLS], int);
int getRowTotal(int [][COLS], int);
int getColumnTotal(int [][COLS], int, int);
int getHighestInRow(int [][COLS], int);
int getLowestInRow(int [][COLS], int);

int main()
{
	const int ROWS = 4;  
	
	
	int testArray[ROWS][COLS] =
					{ { 1,   2,  3,  4,  5 },
					{   6,   7,  8,  9, 10 },
					{  11,  12, 13, 14, 15 },
					{  16,  17, 18, 19, 20 } };
   
	
	cout << "The total of the array elements is "
		 << getTotal(testArray, ROWS)
		 << endl;
   

	cout << "The average value of an element is "
		 << getAverage(testArray, ROWS)
		 << endl;


	cout << "The total of row 0 is "
		 << getRowTotal(testArray, 0)
		 << endl;


	cout << "The total of col 2 is "
		 << getColumnTotal(testArray, 2, ROWS)
		 << endl;

     
	cout << "The highest value in row 2 is "
		 << getHighestInRow(testArray, 2)
		 << endl;

//.
	cout << "The lowest value in row 2 is "
		 << getLowestInRow(testArray, 2)
		 << endl;
        
    system("PAUSE");
	return 0;
}

// Comment1: Use 2D array as argument and return the total of values in the array
int total = 0;
int getTotal(int array[][COLS], int rows)
{
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < COLS; j++){
			total += array[i][j];
		}
	}
	return total;
}

// Comment2: Use 2D array as argument and return the average of values in the array
double getAverage(int array[][COLS], int rows)
{
	double avg;
    avg = static_cast<double>(total) / (rows * COLS);
	return avg;
}

// Comment3: Use 2D array and specified number of row as arguments, return the total of values in the specified row
int getRowTotal(int array[][COLS], int rowToTotal)
{
	int rowTotal = 0;
	for (int j = 0; j < COLS; j++)
		rowTotal += array[rowToTotal][j];
	return rowTotal;
}

// Comment4: Use 2D array and specified number of column as arguments, return the total of values in the specified column
int getColumnTotal(int array[][COLS], int colToTotal, int rows)
{
	int colTotal = 0;
	for (int i = 0; i < rows; i++)
		colTotal += array[i][colToTotal];
	return colTotal;
}

// Comment5: Use 2D array and specified number of row as arguments, return the maximum value in the specified row
int getHighestInRow(int array[][COLS], int rowToSearch)
{
	int maxInRow = array[rowToSearch][0];
	for (int j = 1; j < COLS; j++) {
		if (array[rowToSearch][j] > maxInRow)
			maxInRow = array[rowToSearch][j];
	}
	return maxInRow;
}


int getLowestInRow(int array[][COLS], int rowToSearch)
{
	
}

