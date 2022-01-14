//
// Created by mobile on 14/01/22.
//

#ifndef PARTICLESIMULATOR_RENDERER_H
#define PARTICLESIMULATOR_RENDERER_H

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

#include "Box.h"

class Renderer {

    int w = 410;
    cv::Mat image_ ;

public:
    void render(std::shared_ptr<Box> box, int stepsize);

};


#endif //PARTICLESIMULATOR_RENDERER_H
