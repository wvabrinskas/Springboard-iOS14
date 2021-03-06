/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:23 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOMapRequestManager;

@interface GEOMapRequest : NSObject {

	GEOMapRequestManager* _requestManager;
	/*^block*/id _completionHandler;
	/*^block*/id _cancellationHandler;
	BOOL _isFinished;

}

@property (nonatomic,copy) id completionHandler;                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) id cancellationHandler;              //@synthesize cancellationHandler=_cancellationHandler - In the implementation block
@property (nonatomic,readonly) BOOL isFinished;                 //@synthesize isFinished=_isFinished - In the implementation block
-(id)cancellationHandler;
-(void)complete;
-(id)completionHandler;
-(id)initWithManager:(id)arg1 ;
-(void)setCancellationHandler:(id)arg1 ;
-(BOOL)isFinished;
-(void)setCompletionHandler:(id)arg1 ;
-(void)cancel;
-(void)_finishAndCallHandler:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

