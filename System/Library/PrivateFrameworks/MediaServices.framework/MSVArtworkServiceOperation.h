/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:24 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class NSError, NSString, MSVArtworkServiceRequest;

@interface MSVArtworkServiceOperation : NSOperation {

	NSError* _operationError;
	NSString* _debugMessage;
	MSVArtworkServiceRequest* _request;

}

@property (nonatomic,readonly) MSVArtworkServiceRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) NSError * operationError; 
@property (nonatomic,copy,readonly) NSString * debugMessage; 
-(void)setOperationError:(NSError *)arg1 ;
-(MSVArtworkServiceRequest *)request;
-(NSError *)operationError;
-(void)setDebugMessage:(NSString *)arg1 ;
-(id)initWithArtworkRequest:(id)arg1 ;
-(NSString *)debugMessage;
@end

