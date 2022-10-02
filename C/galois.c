int add_inv(int n)
{
    return 11-n;
}
int mup_inv(int n)
{int key = 0;
int flag = 0;
for(int i = 0;i<11;i++)
{
    flag = (n*i)%11;
    if(flag == 1)
    key = i;
}
    return key;
}



int main()
{   int q=11,g,g1;
    int points[q][q];
    for(int i = 0;i<q;i++)
    {
        for(int j = 0;j<q;j++)
        {
             g = (i*i*i)+i+6;
            g = g%q;
            g1 = (j*j - add_inv(g))%q;
            if(g1 == 0)
            { printf("X value is : %d", i);
            printf(" Y value is : %d \n", j);
            points[i][j] = 1;
            }
        }
    }
int px,py,qx,qy,rx,ry;
int m;
// Case 1: px != qx || py != qy
if(px != qx || py != qy)
{
    m = (qy + add_inv(py))*mup_inv(qx + add_inv(px))%q;

}

// Case 2: px == qx && py == qy
else if(px == qx  && px == qx)
{
    m = ((3*px*px*1)*mup_inv(2*py))%q;

}
//Case 3: 
// Case 4: 
else if ((px == qy)  && (py == add_inv(qx)))
  {
      rx = 0;
      ry = 1;
  }

  ry = add_inv(ry);
  printf("%d %d\n", rx,ry);
}