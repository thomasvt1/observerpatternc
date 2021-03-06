// Game.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"
#include "string"
#include "list"

#include "Observer.h"
#include "Subject.h"

#include "WindowObserver.h"
#include "SoundObserver.h"

using namespace std;

int main()
{
	Subject subject;
	subject.add_observer(*new SoundObserver);
	subject.add_observer(*new WindowObserver);
	subject.set_name("Yuya");
	subject.set_name("John");
	system("pause");
    return 0;
}