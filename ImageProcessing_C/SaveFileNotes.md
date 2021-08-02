```c++
bool imwrite( const String& filename, InputArray img, const std::vector& params = std::vector())
```

This function writes the given img object to the specified file. On success, this function will return true, otherwise it will return false.

1. **filename** - File name of the output image. Please note that the extension of the filename will be used to determine to the image format. (e.g. - If the filename is MyImage.jpg, a JPEG image will be written. If the filename is MyImage.png, a PNG image will be written.). jpeg, jpg, bmp, png, tiff and tif extensions are always supported. Other image file types are supported depending on your platform and installed codecs.

2. **img** - The image object to be saved. Please note that this image object should have following properties. The bit depth of the image object should be 8 bit signed or 16 bit unsigned.
Number of channels of the image should be 1 or 3. For 3 channel image objects, BGR channel order should be present. If the bit depth or the channel order of your image object is different from the above specification, you may use {_Mat::convertTo_} and {_cv::cvtColor_} functions to convert your image.

3. **params** - This is an optional parameter.

