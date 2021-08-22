<h1>Important functions used</h1>

```c++
 erode( src, erosion_dst, element );
```

**erode()** function erodes the image using the specified kernel which determines the neighborhood of a pixel over which the minimum is taken.
The function that performs the erosion operation is cv::erode . As we can see, it receives three arguments:

- **src**: The source image
- **erosion_dst**: The output image
- **element**: This is the kernel we will use to perform the operation. If we do not specify, the default is a simple 3x3 matrix. Otherwise, we can specify its shape.  For this, we need to use the function **cv::getStructuringElement**


```c++
getStructuringElement( erosion_type, Size( 2*erosion_size + 1, 2*erosion_size+1 ), Point( erosion_size, erosion_size ) );
```

**getStructuringElement(MORPH_RECT, Size(3, 3))** function is used to get the rectangular kernel with the size of 3 x 3 for this morphological operation.

We can choose any of three shapes for our kernel:

- **Rectangular box:** MORPH_RECT
- **Cross:** MORPH_CROSS
- **Ellipse:** MORPH_ELLIPSE

# Results
![image](https://user-images.githubusercontent.com/84629235/130345871-fa5fef69-d018-4ed8-8449-8023e204070b.png)
