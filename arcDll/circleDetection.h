#pragma once

#define CIRCLEDETECTION_API __declspec(dllexport)

//struct outputRes
//{
//	double* condidates; //circle condidates
//	unsigned char* edgeimg_out; //edge image
//	double* gradient_vec_out; //gradient vector
//};

extern "C" CIRCLEDETECTION_API void generateCircleCandidates(Mat * inputImg, double* candidates, unsigned char* edgeimg_out, double* gradient_vec_out, int& candidates_num, int& edge_pixels_total_num);
