#include "CanvasManager.h"

CanvasManager::CanvasManager() {
	SetPaintColor(255, 0, 0);
}

void CanvasManager::SetPaintColor(int R, int G, int B) {
	paint.SetColor(Color(R, G, B));
}

void CanvasManager::DrawRect(float x, float y, float w, float h) {
	ScreenVertex vertex[5];
	vertex[0].x = x;
	vertex[0].y = y;
	vertex[0].color = Color(255, 0, 0);

	vertex[1].x = w;
	vertex[1].y = y;
	vertex[1].color = Color(255, 0, 0);

	vertex[2].x = w;
	vertex[2].y = h;
	vertex[2].color = Color(255, 0, 0);

	vertex[3].x = x;
	vertex[3].y = h;
	vertex[3].color = Color(255, 0, 0);

	vertex[4].x = x;
	vertex[4].y = y;
	vertex[4].color = Color(255, 0, 0);

	GraphicsDevice.SetRenderState(Lighting_Disable);
	GraphicsDevice.DrawUserPrimitives(PrimitiveType_LineStrip, vertex, 4, vertex[0].FVF());
	GraphicsDevice.SetRenderState(Lighting_Enable);

	/*Canvas canvas = GraphicsDevice.LockCanvas();
	canvas.DrawRect(Rect(x,y,w,h), paint);*/
}
