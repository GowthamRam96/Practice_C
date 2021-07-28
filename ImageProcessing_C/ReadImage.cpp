#include <opencv2/opencv.hpp>
#include <iostream>
using namespace cv;
using namespace std;
int main(int argc, char** argv)
{
	Mat image = imread("C:/Camera/IMG20210116194805.jpg"); //give path to your image
	if (image.empty())
	{
		cout << "Could not open or find the image" << endl;
		cin.get(); //wait for any key press
		return -1;
	}
	String windowName = "Gowtham"; //Name of the window
	namedWindow(windowName); // Create a window
	imshow(windowName, image); // Show image inside the created window.
	waitKey(0); // Wait for any keystroke in the window
	destroyWindow(windowName); //destroy the created window
	return 0;
}
