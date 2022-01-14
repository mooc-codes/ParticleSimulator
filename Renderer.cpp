//
// Created by mobile on 14/01/22.
//

#include "Renderer.h"



void Renderer::render()
{
    int i = 100;
    while (true) {
        this->image_ = cv::Mat::zeros(w, w, CV_8UC3);
        cv::Scalar vehicleColor = cv::Scalar(255, 255, 255);
        cv::circle(this->image_, cv::Point2d(i, 100), 5, vehicleColor, -1);
        cv::circle(this->image_, cv::Point2d(100, i), 5, vehicleColor, -1);
        i++;
        imshow("NONE", this->image_);
        cv::waitKey(10);
    }
}