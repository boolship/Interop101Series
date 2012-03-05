// HelloWorld.h

#pragma once

class __declspec(dllexport) HelloWorld
{
public:
	HelloWorld();
	~HelloWorld();
	void SayThis(wchar_t *phrase);
};
