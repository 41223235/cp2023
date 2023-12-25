void draw_roc_flag(gdImagePtr img) {
    // ... 其他程式碼 ...

    // 繪製 ABED 等四個點之間的直線
    int line_color = gdImageColorAllocate(img, 255, 255, 255);  // 白色
    gdImageLine(img, points[0].x, points[0].y, points[1].x, points[1].y, line_color);
    gdImageLine(img, points[1].x, points[1].y, points[2].x, points[2].y, line_color);
    gdImageLine(img, points[2].x, points[2].y, points[3].x, points[3].y, line_color);
    gdImageLine(img, points[3].x, points[3].y, points[0].x, points[0].y, line_color);

    // ... 其他程式碼 ...
}
