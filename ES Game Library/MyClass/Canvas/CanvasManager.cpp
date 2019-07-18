#include "CanvasManager.h"

CanvasManager::CanvasManager() {
	SetPaintColor(255, 0, 0);
}

void CanvasManager::SetPaintColor(int R, int G, int B) {
	paint.SetColor(Color(R, G, B));
}

void CanvasManager::DrawRect(float x, float y, float w, float h) {
	Canvas canvas = GraphicsDevice.LockCanvas();
	canvas.DrawRect(Rect(x,y,w,h), paint);
}
