// C++ program to replace all of the O's in the matrix
// with their shortest distance from a guard
#include <bits/stdc++.h>
using namespace std;

// An Data Structure for queue used in BFS
struct queueNode
{
	// i, j and distance stores x and y-coordinates
	// of a matrix cell and its distance from guard
	// respectively
	int i, j, distance;
};

// These arrays are used to get row and column
// numbers of 4 neighbors of a given cell
int row[] = { -1, 0, 1, 0};
int col[] = { 0, 1, 0, -1 };

// return true if row number and column number
// is in range
bool isValid(int i, int j)
{
	if ((i < 0 || i > M - 1) || (j < 0 || j > N - 1))
		return false;

	return true;
}

// return true if current cell is an open area and its
// distance from guard is not calculated yet
bool isSafe(int i, int j, char matrix[][N], int output[][N])
{
	if (matrix[i][j] != 'O' || output[i][j] != -1)
		return false;

	return true;
}

// Function to replace all of the O's in the matrix
// with their shortest distance from a guard
void findDistance(char matrix[][N])
{
	int output[M][N];
	queue<queueNode> q;

	// finding Guards location and adding into queue
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			// initialize each cell as -1
			output[i][j] = -1;
			if (matrix[i][j] == 'G')
			{
				queueNode pos = {i, j, 0};
				q.push(pos);
				// guard has 0 distance
				output[i][j] = 0;
			}
		}
	}

	// do till queue is empty
	while (!q.empty())
	{
		// get the front cell in the queue and update
		// its adjacent cells
		queueNode curr = q.front();
		int x = curr.i, y = curr.j, dist = curr.distance;

		// do for each adjacent cell
		for (int i = 0; i < 4; i++)
		{
			// if adjacent cell is valid, has path and
			// not visited yet, en-queue it.
			if (isSafe(x + row[i], y + col[i], matrix, output)
				&& isValid(x + row[i], y + col[i]))
			{
				output[x + row[i]][y + col[i]] = dist + 1;

				queueNode pos = {x + row[i], y + col[i], dist + 1};
				q.push(pos);
			}
		}

		// dequeue the front cell as its distance is found
		q.pop();
	}

	// print output matrix
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
			cout << std::setw(3) << output[i][j];
		cout << endl;
	}
}

// Driver code
int main()
{
    int m,n;
    cin>>m>>n;
    char matrix[][];
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
        {
            matrix[i][j]='O';
        }
    }
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin>>x>>y;
        matrix[x][y]='G';
    }
    for(int i=1;i<=n;i++)
    {
        int x,y;
        cin>>x>>y;
        matrix[x][y]='W';
    }

	findDistance(matrix);

	return 0;
}
