/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Silex/SXAdResponse.h>

@protocol SXPrerollAdMetadata;
@class NSURL;

@interface SXPrerollAdResponse : SXAdResponse {

	NSURL* _videoURL;
	double _skipDuration;
	id<SXPrerollAdMetadata> _prerollAdMetadata;

}

@property (nonatomic,retain) NSURL * videoURL;                                       //@synthesize videoURL=_videoURL - In the implementation block
@property (assign,nonatomic) double skipDuration;                                    //@synthesize skipDuration=_skipDuration - In the implementation block
@property (nonatomic,retain) id<SXPrerollAdMetadata> prerollAdMetadata;              //@synthesize prerollAdMetadata=_prerollAdMetadata - In the implementation block
-(NSURL *)videoURL;
-(void)setVideoURL:(NSURL *)arg1 ;
-(void)setSkipDuration:(double)arg1 ;
-(double)skipDuration;
-(id<SXPrerollAdMetadata>)prerollAdMetadata;
-(void)setPrerollAdMetadata:(id<SXPrerollAdMetadata>)arg1 ;
@end

