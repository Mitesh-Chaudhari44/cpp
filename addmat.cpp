#include <iostream>
using namespace std;

class triplet
{
public:
	int row, col, n;
	int mat[20][3];

	triplet(int r1, int c1, int n1)
	{
		row = r1;
		col = c1;
		n = n1;
	}

	void GetTriplet()
	{
		mat[0][0] = row;
		mat[0][1] = col;
		mat[0][2] = n;

		cout << "Enter the non-zero elements as triplets (row, column, value):" << endl;
		for (int i = 1; i <= n; i++)
		{
			cin >> mat[i][0] >> mat[i][1] >> mat[i][2];
		}
	}

	void DisplayTriplet()
	{
		cout << "Displaying matrix in triplet form:" << endl;
		for (int i = 0; i <= n; i++)
		{
			cout << mat[i][0] << " " << mat[i][1] << " " << mat[i][2] << endl;
		}
	}

	void addition(triplet t2)
	{
		int result[20][3];
		int i = 1, j = 1, k = 1;

		if (mat[0][0] == t2.mat[0][0] && mat[0][1] == t2.mat[0][1])
		{
			result[0][0] = mat[0][0];
			result[0][1] = mat[0][1];
			result[0][2] = 0;

			while (i <= mat[0][2] && j <= t2.mat[0][2])
			{
				if (mat[i][0] == t2.mat[j][0] && mat[i][1] == t2.mat[j][1])
				{
					result[k][0] = mat[i][0];
					result[k][1] = mat[i][1];
					result[k][2] = mat[i][2] + t2.mat[j][2];
					i++;
					j++;
					k++;
				}
				else if ((mat[i][0] < t2.mat[j][0]) || (mat[i][0] == t2.mat[j][0] && mat[i][1] < t2.mat[j][1]))
				{
					result[k][0] = mat[i][0];
					result[k][1] = mat[i][1];
					result[k][2] = mat[i][2];
					i++;
					k++;
				}
				else
				{
					result[k][0] = t2.mat[j][0];
					result[k][1] = t2.mat[j][1];
					result[k][2] = t2.mat[j][2];
					j++;
					k++;
				}
			}

			while (i <= mat[0][2])
			{
				result[k][0] = mat[i][0];
				result[k][1] = mat[i][1];
				result[k][2] = mat[i][2];
				i++;
				k++;
			}

			while (j <= t2.mat[0][2])
			{
				result[k][0] = t2.mat[j][0];
				result[k][1] = t2.mat[j][1];
				result[k][2] = t2.mat[j][2];
				j++;
				k++;
			}

			result[0][2] = k - 1;

			cout << "Resultant Matrix in Triplet Form: " << endl;
			for (int l = 0; l < k; l++)
			{
				cout << result[l][0] << " " << result[l][1] << " " << result[l][2] << endl;
			}
		}
		else
		{
			cout << "Cannot add matrices with different dimensions." << endl;
		}
	}
};

int main()
{
	int r1, r2, c1 = 3, c2 = 3, n1, n2;

	cout << "Enter number of rows: " << endl;
	cin >> r1;

	cout << "Enter number of non-zero elements: " << endl;
	cin >> n1;

	triplet t1(r1, c1, n1);
	t1.GetTriplet();
	t1.DisplayTriplet();

	cout << "Enter number of rows: " << endl;
	cin >> r2;

	cout << "Enter number of non-zero elements: " << endl;
	cin >> n2;

	triplet t2(r2, c2, n2);
	t2.GetTriplet();
	t2.DisplayTriplet();

	t1.addition(t2);

	return 0;
}