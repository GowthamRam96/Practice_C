<h1>Important functions used</h1>

```c++
void Mat::convertTo( OutputArray m, int rtype, double alpha=1, double beta=0 ) const
```

This function converts the each pixel value to the target data type and changes the value as per the following formula.
pixel_value_of_output_image(x, y) = pixel_value_of_input_image(x, y) * alpha + beta;

1. **m** - Output image. This data structure will be reallocated if required.
2. **rtype** - Type of the output image. If rtype is a negative value, the type of the output image will be same as the input image.
3. **alpha** - Each pixels in the input image will be multiplied by this number before assigning to the output image.
4. **beta** - This value will be added to each pixels in the input image and assigned to the output image.


<h1>Result</h1>

![Brightness](https://user-images.githubusercontent.com/84629235/128623628-630905bd-4ba1-42fe-9a05-fb4771a431ff.PNG)

You may find the differences in brightness based on the images.
