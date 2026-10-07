#include <stdio.h>

enum ShapeType{
    CIRCLE,
    RECTANGLE,
    TRIANGLE
};

typedef enum ShapeType Shape;

float calculateArea(Shape shape, float dimension1, float dimension2);
void printShapeInfo(Shape shape);

int main(){

    Shape selectedShape;
    float dim1,dim2;

    printf("\nEnter a shape: \n");
    printf("\n0)CIRCLE\n1)RECTANGLE\n2)TRIANGLE\n");
    scanf("%d", &selectedShape);

    switch(selectedShape){
        case 0:
            selectedShape = CIRCLE;
            break;
        case 1:
            selectedShape = RECTANGLE;
            break;
        case 2:
            selectedShape = TRIANGLE;
            break;
    }
    
    printf("Enter dimensions: ");
    scanf("%f %f", &dim1, &dim2);

    printf("\n");
    
    printShapeInfo(selectedShape);
    printf("Dimensions: %.1f %.1f\n", dim1,dim2);

    float area = calculateArea(selectedShape, dim1,dim2);
    printf("Area: %.1f\n", area);

    if(area < 10.0){
        printf("Category: Small\n");
    }
    else if(area >= 10.0 && area <= 50.0){
        printf("Category: Medium\n");
    }
    else if(area > 50.0){
        printf("Category: Large\n");
    }


    return 0;
}

float calculateArea(Shape shape, float dimension1, float dimension2){
    float area;
    switch(shape){
        case CIRCLE:
            area = 3.14159 * dimension1 * dimension1;
            break;
        case RECTANGLE:
            area = dimension1 * dimension2;
            break;
        case TRIANGLE:
            area = (0.5*(dimension1*dimension2));
            break;
    }
    return area;
}

void printShapeInfo(Shape shape){
    switch(shape){
        case CIRCLE:
            printf("Shape: CIRCLE\n");
            break;
        case RECTANGLE:
            printf("Shape: RECTANGLE\n");
            break;
        case TRIANGLE:
            printf("Shape: TRIANGLE\n");
    }
}