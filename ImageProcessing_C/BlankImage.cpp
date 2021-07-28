#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	//create a new image which consists of 
	//3 channels 
	//image depth of 8 bits 
	//200 x 400 of resolution (200 wide and 400 high)
	//each pixels initialized to the value of (100, 250, 30) for Blue, Green and Red planes respectively.
	Mat image(200, 400, CV_8UC3, Scalar(10, 250, 230));

	String windowName = "Window with Blank Image"; //Name of the window

	namedWindow(windowName); // Create a window

	imshow(windowName, image); // Show our image inside the created window.

	waitKey(0); // Wait for any keystroke in the window

	destroyWindow(windowName); //destroy the created window

	return 0;
}

