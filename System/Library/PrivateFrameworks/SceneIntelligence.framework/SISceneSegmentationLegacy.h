/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:25 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SceneIntelligence.framework/SceneIntelligence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <SceneIntelligence/SceneIntelligence-Structs.h>
@interface SISceneSegmentationLegacy : NSObject {

	void* _context;
	void* _plan;
	SCD_Struct_SI0* _network;
	networkparams_t* _parameters;
	networkvariables_t* _variables;

}
-(id)init;
-(BOOL)initMLNetwork;
-(void)initMLVariables;
-(CVBufferRef)copyResultLabelsToPixelBuffer;
-(CGSize)inputResolution;
-(CGSize)outputResolution;
-(CVBufferRef)evaluateSemanticsForImage:(CVBufferRef)arg1 ;
@end
