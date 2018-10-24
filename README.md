# UNREAL_TUTORIAL_2_3
## MISSING FILES
https://drive.google.com/open?id=1kfKFLIy12DQvnrec6F-rP0y3WcIZfR0W

## What I Learned
This tutorial kind of just used all the other tutorials I following into one. It had input, animations, physics, etc. It's a good general tutorial (even if the end result looks pretty crappy). This tutorial doesn't do a good job at explaining what things do. It's kinda just "copy and paste this". Though, since I already learned the stuff in depth in other tutorials, I knew what was going on. If I hadn't, I'd be lost.

## Notes
* Default generated code is different

* All files are missing, you have to get them from my link above or here: https://wiki.unrealengine.com/First_Person_Shooter_C%2B%2B_Tutorial#Adding_a_mesh_to_your_Character

* Be aware that the StartPlay function won't work until you move along with the tutorial. Turns out I didn't need to spend an hour debugging :|

* GEngine shows an error, but it's not an issue

* PlayerInputComponent false error

* _GetCapsuleComponent()_ doesn't work anymore, use _GetRootComponent()_ instead

* Must use: _#include "Engine.h"_

* Must use: _#include "Camera/CameraComponent.h"_

* TSubclassOf<Class AFPSProjectile> ProjectileClass;
needs to be
TSubclassOf<class AFPSProjectile> ProjectileClass;

* Double-click the BP_FPSCharacter icon to open it in the Blueprint Editor.
needs to be
Double-click the BP_FPSProjectile icon to open it in the Blueprint Editor.

* Open Class Defaults Mode 
(You don't have to open that mode)
