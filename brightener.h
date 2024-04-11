#pragma once
#include <cstdint>

struct Image {
	int rows;
	int columns;
	uint8_t* pixels = new uint8_t[1024 * 1024]; // max 1k x 1k image
};

class ImageBrightener {
private:
	Image m_inputImage;
public:
	ImageBrightener(Image& inputImage);
	int BrightenWholeImage();
};
