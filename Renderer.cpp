//
// Created by mobile on 14/01/22.
//

#include "Renderer.h"



void Renderer::render(std::shared_ptr<Box> box, int stepsize)
{

        this->image_ = cv::Mat::zeros(w, w, CV_8UC3);
        cv::Scalar Color = cv::Scalar(255, 255, 255);

        for(auto &p : box->particles_)
        {

            cv::circle(this->image_, cv::Point2d(p.Center()[0], p.Center()[1]), p.Radius(), Color, -1);
        }
        imshow("NONE", this->image_);
        cv::waitKey(stepsize);

}