/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:45 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class CKUploadRequestMetadata;

@interface CKRequestAssetOperation : NSOperation {

	long long _state;
	CKUploadRequestMetadata* _metadata;
	/*^block*/id _assetRequestCompletionBlock;
	/*^block*/id _requestCallback;

}

@property (nonatomic,retain) CKUploadRequestMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) id requestCallback;                                //@synthesize requestCallback=_requestCallback - In the implementation block
@property (assign) long long state;                                           //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id assetRequestCompletionBlock;                    //@synthesize assetRequestCompletionBlock=_assetRequestCompletionBlock - In the implementation block
-(BOOL)isExecuting;
-(void)start;
-(BOOL)isAsynchronous;
-(void)setState:(long long)arg1 ;
-(void)setMetadata:(CKUploadRequestMetadata *)arg1 ;
-(CKUploadRequestMetadata *)metadata;
-(long long)state;
-(id)requestCallback;
-(BOOL)isFinished;
-(void)setRequestCallback:(id)arg1 ;
-(id)initWithAssetMetadata:(id)arg1 requestCallback:(/*^block*/id)arg2 ;
-(void)setAssetRequestCompletionBlock:(id)arg1 ;
-(id)assetRequestCompletionBlock;
@end
