/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:06 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NeutrinoCore/NURenderJob.h>

@class AVAsset, NSDictionary;

@interface PIAutoLoopAnalysisJob : NURenderJob {

	AVAsset* _videoSource;
	NSDictionary* _recipe;

}

@property (nonatomic,retain) AVAsset * videoSource;              //@synthesize videoSource=_videoSource - In the implementation block
@property (nonatomic,retain) NSDictionary * recipe;              //@synthesize recipe=_recipe - In the implementation block
-(id)cacheKey;
-(NSDictionary *)recipe;
-(void)setRecipe:(NSDictionary *)arg1 ;
-(BOOL)render:(out id*)arg1 ;
-(BOOL)prepare:(out id*)arg1 ;
-(id)result;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(id)scalePolicy;
-(BOOL)wantsOutputVideo;
-(AVAsset *)videoSource;
-(void)setVideoSource:(AVAsset *)arg1 ;
-(id)analysisRequest;
@end

