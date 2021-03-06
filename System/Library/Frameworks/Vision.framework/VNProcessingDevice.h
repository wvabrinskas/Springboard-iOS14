/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VNProcessingDevice : NSObject <NSCopying>
+(id)allDevices;
+(id)defaultDevice;
+(void)_lockStaticObjectsAccessLock;
+(void)_unlockStaticObjectsAccessLock;
+(id)defaultCPUDevice;
+(id)defaultMetalDevice;
+(id)deviceForMetalDevice:(id)arg1 ;
+(id)directANEDevice;
+(id)defaultANEDevice;
+(void)forcedCleanup;
-(BOOL)targetsGPU;
-(unsigned long long)hash;
-(int)espressoStorageType;
-(int)espressoEngine;
-(int)espressoDeviceID;
-(id)metalDevice;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)targetsANE;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)targetsCPU;
@end

