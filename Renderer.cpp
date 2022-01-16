//
// Created by mobile on 14/01/22.
//

#include "Renderer.h"



void Renderer::render(std::shared_ptr<Box> box, int stepsize)
{

        this->image_ = cv::Mat::zeros(w, w, CV_8UC3);
        cv::Scalar Color ;
        cv::rectangle(this->image_, cv::Point(box->leftEnd, box->topEnd), cv::Point(box->rightEnd, box->bottomEnd),
                      cv::Scalar(255, 255, 255),
                      3, cv::LINE_8);
        for(auto &p : box->particles_)
        {
            Color = cv::Scalar(p->color_[0], p->color_[1], p->color_[2]);
            cv::circle(this->image_, cv::Point2d(p->Center()[0], p->Center()[1]), p->Radius(), Color, -1);
        }
        imshow("NONE", this->image_);
        cv::waitKey(stepsize);

}