//
// Created by mobile on 14/01/22.
//

#ifndef PARTICLESIMULATOR_RENDERER_H
#define PARTICLESIMULATOR_RENDERER_H

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>

class Renderer {

    int w = 400;
    cv::Mat image_ ;

public:
    void render();

};


#endif //PARTICLESIMULATOR_RENDERER_H
