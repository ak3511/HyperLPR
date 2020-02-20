#ifndef _PLATEDETECT_H_
#define _PLATEDETECT_H_
#include <opencv2/opencv.hpp>
#include <vector>
#include "PlateInfo.h"
namespace pr
{
	class PlateDetection {
	public:
		PlateDetection(std::string ssd_prototxt, std::string ssd_caffe_model);
		void Detectssd(cv::Mat inputImg, std::vector<pr::PlateInfo>  &plateInfos);
	private:
		cv::dnn::Net ssdNet;
	};
}//namespace pr
#endif // !_PLATEDETECT_H_