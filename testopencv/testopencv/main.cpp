#include <opencv2\opencv.hpp>
#include <iostream>

using namespace cv;
int WinMain(int argc, char** argv)
{
	//IMREAD_UNCHANGED(<0)¼ÓÔØÔ­Í¼	IMREAD_COLOR(>0)¼ÓÔØRGBÍ¼Ïñ
	Mat src = imread("../x64/Debug/yafeilinux.jpg");

	if (src.empty())
	{
		printf("could not load image...");
		return -1;
	}
	namedWindow("test opencv setup", CV_WINDOW_AUTOSIZE);
	imshow("test opencv setup", src);

	namedWindow("output windows", CV_WINDOW_AUTOSIZE);
	Mat outPut_image;
	cvtColor(src, outPut_image, CV_BGR2HSV);
	imshow("output windows", outPut_image);

	imwrite("../x64/Debug/hsvimage.tif", outPut_image);
	waitKey(0);
	return 0;
}