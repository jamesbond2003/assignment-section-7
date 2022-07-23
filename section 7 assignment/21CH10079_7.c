    /*
    Name            : Zaid Ahmed Khan
    Roll NO         : 21CH10079
    Assignment No   : 07
    */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct p
{
    float x;
    float y;
    float z;
} point3d;

float distarray[100][100];

point3d setpoint(float X,float Y,float Z)
{
    point3d point;

    point.x=X;
    point.y=Y;
    point.z=Z;

    return point;
}
// function to calculate the distance between 2 points
float euclidean3d(point3d p1,point3d p2)
{
    float dist=sqrt( pow(p1.x-p2.x,2)+pow(p1.y-p2.y,2)+pow(p1.z-p2.z,2) );
    return dist;
}
// function to store the distance of all point is a arry 
void finddistance(point3d pointarray[],int num,float darray[][100] )
{
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            darray[i][j]=euclidean3d(pointarray[i],pointarray[j]);
        }
    }
}
// function to calculate closest point
int findclosest(float darray[][100],int num,int i)
{
    int index=-1;
    float min=99999999999;
    for(int k=0;k<num;k++)
    {
        if(k!=i)
        {
            if(darray[i][k]<min)
            {
                min=darray[i][k];
                index=k;
            }
        }
    }
    return index;
}

int main ()
{
    point3d point,pointarray[100] ;
    int i, j, closest;
    float X, Y, Z;
    int numpoints = 10;

    // Create 10 random points in 3 dimesions
    for (i=0; i<numpoints; i++)
    {
        X = rand()%10;
        Y=rand()%10;
        Z=rand()%10 ;
        point = setpoint (X, Y, Z) ;
        pointarray[i] = point;
    }
    for(int i=0;i<numpoints;i++)
    {
        printf("Point %d: (%0.2f,%0.2f,%0.2f)\n",i,pointarray[i].x,pointarray[i].y,pointarray[i].z);
    }
    
    finddistance(pointarray, numpoints, distarray);
    printf("\ndistance array is:\n");
    for(int i=0;i<numpoints;i++)
    {
        for(int j=0;j<numpoints;j++)
        {
            printf("%0.3f ",distarray[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    // for each point print the closest point
    for (i=0; i<numpoints; i++)
    {
        closest = findclosest (distarray, 10, i);
        printf ("Closest to point %d is point %d\n", i, closest) ;
    }
    return 0;
}