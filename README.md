# Army of Two Recomp
 An attempt to recomp the Xbox 360 game Army of Two using XenonRecomp  
 Ideally, I want to create a decent base that can be used to make recomps of other games quicker  
 
 This is basically the UnleashedRecomp project (link below) copy and pasted with the Army of Two PPC files  
 [UnleashedRecomp github](https://github.com/hedge-dev/UnleashedRecomp)  

 In my opinion the development of other recomps is being limited by the lack of a central space to discuss and tackle issues but oh well

# Information
 From a quick glance, Army of Two was released in 2008 and uses Unreal Engine 3. The source code of the engine can be found below (2004 version and 2013 version)  
 [Unreal Engine 3 - 2004](https://github.com/gameboys84/unrealengine3)  
 [Unreal Engine 3 - 2013](https://github.com/CodeRedModding/UnrealEngine3)

 PowerPC passes arguments to functions normally using registers r3-r10 with the return value stored in r3
 Source: The internet where no one lies [Stack Overflow](https://stackoverflow.com/a/17309038)
 
## Things that need investigating/doing
### XenonRecomp
 1. **Errors generated during recomp**  
    XenonRecomp threw the following errors however it did generate the .ppc files
    * Found switch jump table at 0x82216794 with no switch table entry present
    * Found switch jump table at 0x82DA8EC0 with no switch table entry present
 2. **Missing instructions**  
    I used a custom build where I threw in whatever I could find for the missing instructions and haven't ran the tests
    Probably should check they actually are correct
### XenosRecomp
 1. **Shaders**  
    Need to find how UE3 games handle shaders to identify how they need dealing with.  
### Basic features
 1. **Renderer**  
    To be implemented
 2. **Sound**  
    To be implemented  
 3. **Input**  
    To be implmeneted
 4. **Saving/Loading**  
    To be implemented
### Advanced features
 1. **Networking**  
    To be implemented  
 2. **Improved renderer**  
    To be implemented  
    
    
 
