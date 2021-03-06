/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:44 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/CMCapture-Structs.h>
#import <CMCapture/BWInferenceVideoRequirement.h>
#import <libobjc.A.dylib/NSCopying.h>

@class BWInferenceVideoRequirement;

@interface BWInferenceCloneVideoRequirement : BWInferenceVideoRequirement <NSCopying> {

	BWInferenceVideoRequirement* _sourceVideoRequirement;

}

@property (nonatomic,readonly) BWInferenceVideoRequirement * sourceVideoRequirement;              //@synthesize sourceVideoRequirement=_sourceVideoRequirement - In the implementation block
-(id)videoFormat;
-(BWInferenceVideoRequirement *)sourceVideoRequirement;
-(id)initWithCloneVideoRequirement:(id)arg1 ;
-(id)initWithAttachedMediaKey:(id)arg1 sourceVideoRequirement:(id)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

