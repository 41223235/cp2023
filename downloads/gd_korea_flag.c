#include <stdio.h>
#include <gd.h>
#include <math.h>

void draw_korea_flag(gdImagePtr img);
void draw_half_and_half_sun(gdImagePtr img, int center_x, int center_y, int sun_radius, int red, int blue);

int main() {
    // width 3: height 2
    int width = 1200;
    int height = (int)(width * 2.0 / 3.0);

    gdImagePtr img = gdImageCreateTrueColor(width, height);
    gdImageAlphaBlending(img, 0);

    draw_korea_flag(img);

    FILE *outputFile = fopen("./../images/korea_flag.png", "wb");
    if (outputFile == NULL) {
        fprintf(stderr, "Error opening the output file.\n");
        return 1;
    }
    gdImagePngEx(img, outputFile, 9);
    fclose(outputFile);
    gdImageDestroy(img);
    return 0;
}

void draw_korea_flag(gdImagePtr img) {
    int width = gdImageSX(img);
    int height = gdImageSY(img);
    int red, blue, white;
    int center_x = (int)(width / 2);
    int center_y = (int)(height / 2);
    int radius = (int)(width / 2);

    // Colors for the flag
    red = gdImageColorAllocate(img, 242, 0, 0);    // Red color
    blue = gdImageColorAllocate(img, 0, 41, 204);   // Blue
    white = gdImageColorAllocate(img, 255, 255, 255); //white
  
    // 繪製矩形區域
    gdImageFilledRectangle(img, 0, 0, width, height, white);

  

void drawTaiChi(gdImagePtr img, int center_x, int center_y, int radius) {
  // 繪製白色半圓
  gdImageFilledArc(img, center_x, center_y, radius * 2, radius * 2, 0, 180, gdImageColorAllocate(img, 255, 255, 255), gdArc);

  // 繪製黑色半圓
  gdImageFilledArc(img, center_x, center_y, radius * 2, radius * 2, 180, 360, gdImageColorAllocate(img, 0, 0, 0), gdArc);

  // 繪製兩個小圓點（黑色和白色）
  gdImageFilledEllipse(img, center_x - radius / 2, center_y, radius / 4, radius / 4, gdImageColorAllocate(img, 255, 255, 255));
  gdImageFilledEllipse(img, center_x + radius / 2, center_y, radius / 4, radius / 4, gdImageColorAllocate(img, 0, 0, 0));
}
}
