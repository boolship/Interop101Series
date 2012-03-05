// HelloWorldWrapper.cpp : Implementation of CHelloWorldWrapper

#include "stdafx.h"
#include "HelloWorldWrapper.h"

// CHelloWorldWrapper

STDMETHODIMP CHelloWorldWrapper::SayThis(BSTR phrase)
{
	hw->SayThis(phrase);
	return S_OK;
}
