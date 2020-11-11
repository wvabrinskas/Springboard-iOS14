/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Photos.framework/Photos
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Photos/PHMediaRequestContext.h>

@class NSProgress, PHVideoRequestOptions;

@interface PHVideoRequestContext : PHMediaRequestContext {

	NSProgress* _progress;
	PHVideoRequestOptions* _videoOptions;
	long long _intent;

}

@property (nonatomic,readonly) PHVideoRequestOptions * videoOptions;              //@synthesize videoOptions=_videoOptions - In the implementation block
@property (nonatomic,readonly) long long intent;                                  //@synthesize intent=_intent - In the implementation block
-(/*^block*/id)progressHandler;
-(long long)intent;
-(id)initialRequests;
-(BOOL)isNetworkAccessAllowed;
-(id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 options:(id)arg5 intent:(long long)arg6 resultHandler:(/*^block*/id)arg7 ;
-(PHVideoRequestOptions *)videoOptions;
-(long long)type;
-(BOOL)representsShareableHighQualityResource;
-(id)_lazyProgress;
-(void)processMediaResult:(id)arg1 forRequest:(id)arg2 ;
-(id)progresses;
-(BOOL)shouldReportProgress;
@end
