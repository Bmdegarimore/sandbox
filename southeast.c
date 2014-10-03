//Brandon Degarimore
//The Southeast Porgram

#include <stdio.h>

void go_south_east(int lat, int lon) //The Function for Latitude and Longitude
{
	lat = lat - 1;
	lon = lon + 1;

}

int main(void)
{

	int latitude = 32; //Variables
	int longitude = 64;

	go_south_east(latitude, longitude);

	printf("Avast! Now at %i %i\n", latitude, longitude);


	return 0;
}