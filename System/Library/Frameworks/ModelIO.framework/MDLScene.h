/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <ModelIO/ModelIO-Structs.h>
@class NSMutableArray, NSArray;

@interface MDLScene : NSObject {

	mutex* _sceneMutex;
	vector<ModelIO::RTRenderable *, std::__1::allocator<ModelIO::RTRenderable *> >* _sceneObjects;
	vector<MDLLight *, std::__1::allocator<MDLLight *> >* _sceneLights;
	NSMutableArray* _objects;
	int _signature;

}

@property (nonatomic,retain,readonly) NSArray * objects;              //@synthesize objects=_objects - In the implementation block
-(void)clear;
-(NSArray *)objects;
-(id)init;
-(void)addObject:(id)arg1 ;
-(void)dealloc;
-(id)raytraceSceneWithCamera:(const RTCamera*)arg1 reflection:(id)arg2 irradiance:(id)arg3 ;
-(int)acquireLockGuard;
-(void)releaseLockGuard:(int)arg1 ;
-(5)hitTestRayFrom:(id)arg1 ;
-(BOOL)castRayFrom:(RTCamera*)arg1 withDirection:(RTIntersectionResult*)arg2 ;
@end
