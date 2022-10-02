/*
You’ll be given a grid as below:
    0 1 0 2 0
    0 2 2 2 1
    0 2 1 1 1
    1 0 1 0 0
    0 0 1 2 2
    1 1 0 0 1
    x x S x x
In the grid above,
  1: This cell has a coin.
  2: This cell has an enemy.
  0: It contains nothing.
  The highlighted(yellow) zone is the control zone. S is a spaceship that we need to control so that we can get 
  maximum coins.
  Now, S’s initial position will be at the center and we can only move it right or left by one cell or do not move.
  At each time, the non-highlighted part of the grid will move down by one unit.
  We can also use a bomb but only once. If we use that, all the enemies in the 5×5 region above the control zone 
  will be killed.
  If we use a bomb at the very beginning, the grid will look like this:
    0 1 0 2 0
    0 0 0 0 1
    0 0 1 1 1
    1 0 1 0 0
    0 0 1 0 0
    1 1 0 0 1
    x x S x x
  As soon as, the spaceship encounters an enemy or the entire grid has come down, the game ends.
  For example,
  At the very first instance, if we want to collect a coin we should move left( coins=1). This is because when the 
  grid comes down by 1 unit we have a coin on the second position and by moving left we can collect that coin. 
  Next, we should move right to collect another coin (coins=2).
  After this, remain at the same position (coins=4).
  This is the current situation after collecting 4 coins.
    0 1 0 2 0 0 1 0 0 0
    0 2 2 2 1 -->after using 0 0 0 0 1
    x x S x x -->bomb x x S x x
   Now, we can use the bomb to get out of this situation. After this, we can collect at most 1 coin. So maximum coins=5.


 The java solution of the give problem is given below. This question is frequently asked by SRI in its 3 hour coding interview
*/
class Solution{
    public static update matrix(int row, char [][] matrix)
    {
        if(row < 0){
            return;
        }
        int uplimit = Math.max(0,row-4);
        for(int i = row;i>=uplimit;i--)
        {
            for( int j = 0;j<=4;i++)
               {
                if(matrix[i][j] == '2')
                {
                    matrix[i][j] = '0'
                }
               }
        }
    }



public static int findMaxPoints(int row,int col,int bombs,char [][] matrix){
    if(row<=0 || col<0 || col>=5){
        return 0;
    }
    int answer=0;
    if(row>0 && matrix[row-1][col] !='2'){
        answer=Math.max(answer,(matrix[row-1][col]=='1'?1:0)+findMaxPoints(row-1,col,bombs,matrix));
    }
    if(col>0 && row>0 && matrix[row-1][col-1]!='2'){
        answer=Math.max(answer,(matrix[row-1][col-1]=='1'?1:0)+findMaxPoints(row-1,col-1,bombs,matrix));
    }
    if(col<4 && row>0 && matrix[row-1][col+1]!='2'){
        answer=Math.max(answer,(matrix[row-1][col+1]=='1'?1:0)+findMaxPoints(row-1,col+1,bombs,matrix));
    }

    if(answer==0 && bombs>0){
        updateMatrix(row-1,matrix);
        answer=findMaxPoints(row,col,bombs-1,matrix);
    }

    return answer;
}
public static void main(String args[])
{
    int t ,row;
    Scanner sc = new Scanner(System.in);
    t = sc.nextInt();
    while(t-- >0)
    {
        row = sc.nextInt();
        char [][] matrix = new int[row][5];
        for(int i = 0;i<row;i++)
        {
            for(int j = 0;j<5;j++)
            matrix[i][j] = sc.next().charAt(0);
        }
     System.out.println(findMaxPoints(row,2,1,matrix));

    }
}

}