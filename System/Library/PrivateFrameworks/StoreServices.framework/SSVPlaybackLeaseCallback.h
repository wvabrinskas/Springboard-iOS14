/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SSVPlaybackLeaseResponse, NSError;

@interface SSVPlaybackLeaseCallback : NSObject {

	/*^block*/id _block;
	SSVPlaybackLeaseResponse* _response;
	NSError* _error;

}

@property (nonatomic,copy) id block;                                           //@synthesize block=_block - In the implementation block
@property (nonatomic,retain) SSVPlaybackLeaseResponse * response;              //@synthesize response=_response - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setBlock:(id)arg1 ;
-(void)setResponse:(SSVPlaybackLeaseResponse *)arg1 ;
-(id)block;
-(SSVPlaybackLeaseResponse *)response;
@end

