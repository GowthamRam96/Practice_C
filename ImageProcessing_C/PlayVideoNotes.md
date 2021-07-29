**```VideoCapture::VideoCapture(int index)```**

>This is one of few constructors available in VideoCapture class. This constructor initializes and opens the camera specified by the argument index.
- You may pass 0 for the argument index to use the default camera connected to your computer. You may use a positive integer as the index, if your computer is attached to more than 1 camera.

**```bool VideoCapture::set(int propId, double value)```**

>It is possible to change some properties of VideoCapture object with VideoCapture::set function. For supported properties, this function will return true. Otherwise it will return false.
- **propID** - The property of the VideoCapture object which is to be changed. Most common properties which can be changed are
  - **CAP_PROP_POS_MSEC** - Current position of the video file in milliseconds
  - **CAP_PROP_POS_FRAMES** - Relative position of the frame to be captured next (Starting from 0, e.g. - 0, 1, 2, 3, ...)
- **value** - The new value for the specified property


**```double VideoCapture::get(int propId) const```**

>This function returns the value of the specified property of the VideoCapture object. For unsupported properties, this function will return 0.
- propId - This argument specify the property of the VideoCapture object which is to be obtained. Most common properties are 
  - **CAP_PROP_POS_MSEC** - Current position of the video file in milliseconds
  - **CAP_PROP_POS_FRAMES** - Relative position of the frame to be captured next (Starting from 0, e.g. - 0, 1, 2, 3, ...) 
  - **CAP_PROP_FRAME_WIDTH** - Width of the frames in the video
  - **CAP_PROP_FRAME_HEIGHT** - Height of the frames in the video
  - **CAP_PROP_FPS** - Frame rate of the video 
  - **CAP_PROP_FOURCC** - 4-character code of the codec 
  - **CAP_PROP_FRAME_COUNT** - Total number of frames in the video file

