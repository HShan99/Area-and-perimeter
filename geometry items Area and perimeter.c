#include<stdio.h>
int main()
{
int number;
float radius,area,perimiter,volume,base,hight,width,side_length;
printf("Circle = 1\n");
printf("Square = 2\n");
printf("Rectangle = 3\n");
printf("Triangle = 4\n");
printf("Cylinder = 5\n");
printf("Cone = 6\n");
printf("Cube = 7\n");
printf("Cuboid = 8\n");
printf("Enter Geometric Item Name Number::");
scanf("%d",&number);
if(number==1)
	 {
		/*circle area and perimeter*/
 		printf("Enter Radius: ");
		scanf("%f",& radius);
 		area=radius*radius*3.14;
 		perimiter=2*3.14*radius;
		printf("Area Of Circle=%f \n",area);
		printf("Perimeter Of Circle=%f\n",perimiter);
	 }
else if(number==2)
	 {
	 	/*square area and perimeter*/
 		printf("Enter One Side: ");
  		scanf("%f",& side_length);
  		area=side_length*side_length;
  		perimiter=4*side_length;
		printf("Area Of Square=%f \n",area);
		printf("Perimeter Of Square=%f\n",perimiter);
	 }
else if(number==3)
	 {
	 	/*rectangle area and perimeter*/
	 	printf("Enter Width: ");
		scanf("%f",&width);
		printf("Enter Hight: ");
		scanf("%f",&hight);
		area=width*hight;
		perimiter=2*width + 2*hight;
		printf("Area Of The Rectangle=%f \n",area);
		printf("Perimeter Of Rectangle=%f\n",perimiter);

	 }
else if(number==4)
 	 {
	 	/*triangle area and perimeter*/
	    printf("Enter Triangle Base Value: ");
		scanf("%f",&base);
		printf("Enter Triangle Hight: ");
		scanf("%f",&hight);
		area=0.5*base*hight;

        printf("Area Of Triangle=%f\n",area);
	 }
else if(number==5)
	 {
	    /*area and volume of cylinder*/
	 	printf("Enter Radius Cylinder: ");
		scanf("%f",&radius);
	 	printf("Enter Hight Of Cylinder: ");
		scanf("%f",&hight);
		area=2*3.14*radius*radius + 2*3.14*hight;
		volume=3.14*radius*hight;
		printf("Area Of Cylinder=%f \n",area);
		printf("Volume Of Cylinder=%f\n",volume);

	 }
else if(number==6)
	 {
	  	/* area and volume of cone*/
	 	printf("Enter Radius Of Cone: ");
		scanf("%f",&radius);
		printf("Enter Hight Of Cone: ");
		scanf("%f",&hight);
		printf("Enter Side Length Of Cone: ");
		scanf("%f",&side_length);
		area=3.14*radius*radius + 3.14*radius*side_length;
		volume=(3.14*radius*radius*hight)/3;
		printf("Area of The Cone=%f \n",area);
		printf("Volume Of The Cone=%f\n",volume);
	 }
else if(number==7)
	 {
	 	/* area and volume of cube*/
	 	printf("Enter Side Length Of Cube: ");
		scanf("%f",&side_length);
		area=(side_length*side_length)*6;
		volume=side_length*side_length*side_length;
		printf("Area Of Cube=%f \n",area);
		printf("Volume Of Cube=%f\n",volume);

	 }
else if(number==8)
	 {
	 	/*area and volume of cuboid*/
		printf("Enter Side Length: ");
		scanf("%f",&side_length);
		printf("Enter Width: ");
		scanf("%f",&width);
		area=(width*width)*2 + (side_length*width)*4;
		volume=width*width*side_length;
		printf("Area Of Cuboid=%f\n",area);
		printf("Volume Of Cuboid=%f\n",volume);
	 }
else
    {
        printf("Invalid Data Input");
    }
return (0);
}



