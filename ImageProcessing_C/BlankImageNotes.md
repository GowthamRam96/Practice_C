Mat::Mat(int rows, int cols, int type, const Scalar& s)

This constructor will create a Mat object with specified number of rows and number of cols and initialize each element with the value given in s.
  - **rows** - Number of rows in the 2D array ( i.e. - height of the image in pixels )
  - **cols** - Number of columns in the 2D array ( i.e. - width of the image in pixels )
  - **type** - Data type of the 2D array which specify the depth and the data type of each element in each channel and number of channels. (Of course, if number of channels is more than 1, 2D array becomes 3D array). More details of data types can be found in the OpenCV C++ API. Possible values for this argument are,
_______________________________________________________________________    
    |CV_8UC1|    |CV_8UC2|    |CV_8UC3|    |CV_8UC4|    |CV_8UC(n)|
_______________________________________________________________________
    |CV_8SC1|    |CV_8SC2|    |CV_8SC3|    |CV_8SC4|    |CV_8SC(n)|
_______________________________________________________________________
    |CV_16UC1|    |CV_16UC2|    |CV_16UC3|    |CV_16UC4|    |CV_16UC(n)|
_______________________________________________________________________
    |CV_16SC1|    |CV_16SC2|    |CV_16SC3|    |CV_16SC4|    |CV_16SC(n)|
_______________________________________________________________________
    |CV_32SC1|    |CV_32SC2|    |CV_32SC3|    |CV_32SC4|    |CV_32SC(n)|
_______________________________________________________________________
    |CV_32FC1|    |CV_32FC2|    |CV_32FC3|    |CV_32FC4|    |CV_32FC(n)|
_______________________________________________________________________
    |CV_64FC1|    |CV_64FC2|    |CV_64FC3|    |CV_64FC4|    |CV_64FC(n)|
    
  - **s** - Initialize each array element (pixels) with the value given by s for each channel. 
