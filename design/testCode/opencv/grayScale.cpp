#include <opencv2/opencv.hpp>
#include <time.h>

using namespace cv;
using namespace std;


int main()
{
    for(int x=0; x<100000; x++){
	// ------------------------------------------
	// Start Execution time
	// ------------------------------------------

	clock_t tStart = clock();

	// ------------------------------------------
	// Read in Input Image
	// ------------------------------------------

	IplImage *im_rgb  = cvLoadImage("/home/xilinx/work/test/eval/testImage_720p.jpg");

	// ------------------------------------------
	// Convert RGB Image to Grayscale
	// ------------------------------------------

    IplImage *im_gray = cvCreateImage(cvGetSize(im_rgb),IPL_DEPTH_8U,1);
	cvCvtColor(im_rgb,im_gray,CV_RGB2GRAY);

	// ------------------------------------------
	// End Execution time
	// ------------------------------------------

	printf("Time taken: %.2fs\n", (double)(clock() - tStart)/CLOCKS_PER_SEC);

	// ------------------------------------------
	// Save New Gray Image
	// ------------------------------------------
	cvSaveImage("C:\\Users\\cgarry\\Google Drive\\dcu_masters\\project\\design\\image_algorthim\\data\\image_bw.jpg",im_gray);
	fprintf(stdout, "Image converted to gray\n");


	// ------------------------------------------
	// Convert to Mat Images
	// ------------------------------------------

	cv::Mat result;
	const cv::Mat img1 = cvarrToMat(im_rgb);
	const cv::Mat img2 = cvarrToMat(im_gray);

	// ------------------------------------------
	// Display Both Images
	// ------------------------------------------

	//namedWindow( "Display Window RGB", WINDOW_AUTOSIZE );
	//namedWindow( "Display Window GrayScale", WINDOW_AUTOSIZE );
	//imshow( "Display Window RGB", img1 );
	//imshow( "Display Window GrayScale", img2 );

	//waitKey(0);
  }
}
