/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUAbstractScaleNode.h>

@interface NUScaleNode : NUAbstractScaleNode {

	long long _sampleMode;
	SCD_Struct_NU7 _targetScale;
	SCD_Struct_NU7 _effectiveScale;

}

@property (readonly) SCD_Struct_NU7 targetScale;                 //@synthesize targetScale=_targetScale - In the implementation block
@property (readonly) SCD_Struct_NU7 effectiveScale;              //@synthesize effectiveScale=_effectiveScale - In the implementation block
-(SCD_Struct_NU7)effectiveScale;
-(id)resolvedNodeWithCachedInputs:(id)arg1 settings:(id)arg2 pipelineState:(id)arg3 error:(out id*)arg4 ;
-(id)_evaluateImageGeometry:(out id*)arg1 ;
-(id)_evaluateImage:(out id*)arg1 ;
-(id)initWithInput:(id)arg1 settings:(id)arg2 ;
-(id)initWithScale:(SCD_Struct_NU7)arg1 sampleMode:(long long)arg2 input:(id)arg3 ;
-(id)initWithTargetScale:(SCD_Struct_NU7)arg1 effectiveScale:(SCD_Struct_NU7)arg2 sampleMode:(long long)arg3 input:(id)arg4 ;
-(id)initWithPipelineState:(id)arg1 input:(id)arg2 ;
-(id)_settingsWithTargetScale:(SCD_Struct_NU7)arg1 effectiveScale:(SCD_Struct_NU7)arg2 sampleMode:(long long)arg3 ;
-(SCD_Struct_NU7)targetScale;
@end
