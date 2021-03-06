#include "Character.h"


MODEL Character::loaded_model[] = {};

Character::Character() {
	remove_flag = false;
}


void Character::SetModel(LPCTSTR file_name) {
	if (loaded_model[GetType()] == NULL) {
		loaded_model[GetType()] = GraphicsDevice.CreateModelFromFile(file_name);
	}
	model = loaded_model[GetType()];
}

void Character::SetPosition(float px, float py) {
	x = px; y = py;
}

void Character::Draw3D() {
	model->SetPosition(Vector3(x, y, 0));
	model->Draw();
}                                                                                                                                                                                                                                                                                        
