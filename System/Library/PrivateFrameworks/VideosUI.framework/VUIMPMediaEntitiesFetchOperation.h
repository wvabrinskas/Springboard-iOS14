/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSArray, NSError, NSOperationQueue, VUIMPMediaLibrary;

@interface VUIMPMediaEntitiesFetchOperation : VUIAsynchronousOperation {

	NSArray* _requests;
	NSArray* _responses;
	NSError* _error;
	NSOperationQueue* _privateQueue;
	VUIMPMediaLibrary* _mediaLibrary;

}

@property (nonatomic,copy) NSArray * requests;                              //@synthesize requests=_requests - In the implementation block
@property (nonatomic,copy) NSArray * responses;                             //@synthesize responses=_responses - In the implementation block
@property (nonatomic,copy) NSError * error;                                 //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;               //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) VUIMPMediaLibrary * mediaLibrary;              //@synthesize mediaLibrary=_mediaLibrary - In the implementation block
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(NSArray *)responses;
-(id)init;
-(void)setMediaLibrary:(VUIMPMediaLibrary *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setResponses:(NSArray *)arg1 ;
-(NSArray *)requests;
-(void)setRequests:(NSArray *)arg1 ;
-(VUIMPMediaLibrary *)mediaLibrary;
-(void)executionDidBegin;
-(NSOperationQueue *)privateQueue;
-(id)initWithMediaLibrary:(id)arg1 requests:(id)arg2 ;
@end
