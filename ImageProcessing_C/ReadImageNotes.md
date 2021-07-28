<b>Mat imread(const String& filename, int flags = IMREAD_COLOR)</b>

This function loads an image from the specified file and return is as a Mat object. If the function cannot read the file, it will return an empty Mat object.
- <b>filename</b> - You have to give the relative or absolute path of an image file. If you are giving the relative path, it should be relative to your cpp file. jpeg, jpg, bmp, png, tiff and tif image file types are always supported. Other image file types are supported depending on your platform and installed codecs.
- <b>flags</b> - There are several possible values for the flag argument. In the above program, I did not pass any value to this argument such that default IMREAD_COLOR argument will be used.
  - IMREAD_UNCHANGED - The image will be loaded as it is. If you want to get the alpha channel in your input image (if it is available), you have to use this flag.
  - IMREAD_GRAYSCALE - The image will be load as a gray-scale image (i.e. - Single channel image, Black and white image).
  - IMREAD_COLOR - The image will be loaded as a BGR image (i.e. - 3 channel image, color image).


<b>void namedWindow(const String& winname, int flags = WINDOW_AUTOSIZE)</b>

This function creates a window which can be used to place images and track bars. If a window already exists with the given name, this function does nothing.
- <b>winname</b> - Name of the window. That name will display in the title bar of the newly created window. This name is also the identifier for this window and it will be used in the later OpenCV function calls to identify the window.
- <b>flags</b> - Determine the size of the window. In the above program, I did not pass any value to this argument such that default WINDOW_AUTOSIZE argument will be used.
  - WINDOW_AUTOSIZE - User cannot resize the window. Image will be displayed in its original size. 
  - WINDOW_NORMAL- User can resize the window.


<b>void imshow(const String& winname, InputArray mat)</b>

This function shows the image in a window specified by winname. If the window is created with WINDOW_AUTOSIZE flag, image will be displayed in its original size. Otherwise image may be scaled to the size of the window. If the window has not been created by calling to namedWindow() function, this function will create a window with the WINDOW_AUTOSIZE flag.

This function call should be followed by waitKey(int) function call in order to provide sufficient time to paint and display the image in the window for the specified time duration in milliseconds. If you do not call waitKey(int) function, the image will not be displayed in the window.
- <b>winname</b> -  Name of the window which created by namedWindow() function.
- <b>mat</b> - Mat object which holds the image


<b>waitKey(0)</b> function waits for a key press forever. When any key is pressed, this function returns the ASCII value of the key and your program will continue.

If positive value is passed to the waitKey() function, it waits for a key press for only the time duration, specified by passed value in milliseconds. 
If any key is pressed during this period, this function returns the ASCII value of the key and your program will continue. If no key is pressed during this period, it will return -1 and program will continue.
