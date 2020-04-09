/* Program to calculate the distance of two places on the Earth
@Author - Jordan Tekelis */

#include <stdio.h>
#include<math.h>
int main()
{
//variables created for radius of the earth, 2 latitudes(km),2 longitudes(km) and pi
    float eRadius = 6371.01;
    float pi = 3.141592654;
    float inlat, inlong, outlat, outlong;
    float dist;
    char answer = 'y';
//do while loop created so user can rerun program if answer comes out as y
do {
    //asks the user for initial Latitude and Longitude and ending Latitude and Longitude
    printf("Please enter the Starting Latitude: \n");
    scanf("%f",&inlat);
    printf("Enter the Starting Longitude: \n");
    scanf("%f",&inlong);
    printf("Enter the Ending Latitude: \n");
    scanf("%f",&outlat);
    printf("Enter the Ending Longitude: \n");
    scanf("%f",&outlong);
    //Converts inputed latitudes and longitudes into radians
    inlong=inlong*(pi/180);
    inlat=inlat*(pi/180);
    outlong=outlong*(pi/180);
    outlat=outlat*(pi/180);
    //formula to calculate distance between two points
    dist=eRadius*acos(sin(inlat)*sin(outlat)+cos(inlat)*cos(outlat)*cos(inlong-outlong));
    fflush(stdin);
    //asking the user if they would like to rerun the program or not
    printf("The distance between the two points on Earth is %f Km\n",dist);
    printf("\nWould you like to calculate another distance? y or n ");
    scanf("%c", &answer);
}
//end of the do while loop
while(answer == 'y');
return 0;

}





