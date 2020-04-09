/* A program to properly calculate the distance between two locations on Earth.
User inputs the latitude and longitude of two separate location and distance is calculated appropriately
@Author - Jordan Tekelis */

#include <stdio.h>
#include<math.h>

//variables created for radius of the earth, 2 latitudes(km),2 longitudes(km) and pi
float eRadius = 6371.01;
float pi = 3.141592654;
float place1Lat, place1Long, place2Lat, place2Long;
double dist;
char answer = 'y';

float calculateDistance(float a, float b, float c, float d);

int main()
{

do {

    printf("Please enter the Starting Latitude: \n");
    scanf("%f",&place1Lat);
    printf("Enter the Starting Longitude: \n");
    scanf("%f",&place1Long);
    printf("Enter the Ending Latitude: \n");
    scanf("%f",&place2Lat);
    printf("Enter the Ending Longitude: \n");
    scanf("%f",&place2Long);

    //Converts inputed latitudes and longitudes into radians
    place1Long = place1Long * ( pi / 180 );
    place1Lat = place1Lat * ( pi / 180 );
    place2Long = place2Long * ( pi / 180 );
    place2Lat = place2Lat * ( pi / 180 );


    printf("The distance between the two points on Earth is %f Km\n", calculateDistance(place1Lat, place1Long, place2Lat, place2Long));
    printf("\nWould you like to calculate another distance? y or n ");
    scanf("%c", &answer);
}

while(answer == 'y');
return 0;

}

float calculateDistance( float latitude1, float  longitude1, float latitude2,float longitutde2)
{

    return eRadius*acos(sin(latitude1)*sin(latitude2)+cos(latitude1)*cos(latitude2)*cos(longitude1-longitutde2));

}





