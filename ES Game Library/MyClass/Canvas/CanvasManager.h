#pragma once
#include "../../ESGLib.h"

class CanvasManager {
private:
	Paint paint;
public:
	CanvasManager();
	void SetPaintColor(int R, int G, int B);
	void DrawRect(float x,float y,float w,float h);


};