/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:28 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BookLibrary.framework/BookLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <BookLibrary/BLRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol BLDownloadQueueUIManagerProtocol;
@class NSURLRequest;

@interface BLDownloadManifestRequest : BLRequest <NSSecureCoding> {

	NSURLRequest* _urlRequest;
	id<BLDownloadQueueUIManagerProtocol> _uiManager;

}

@property (nonatomic,retain) NSURLRequest * URLRequest;                                   //@synthesize urlRequest=_urlRequest - In the implementation block
@property (nonatomic,retain) id<BLDownloadQueueUIManagerProtocol> uiManager;              //@synthesize uiManager=_uiManager - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)startWithManifestResponseBlock:(/*^block*/id)arg1 ;
-(id)initWithURLRequest:(id)arg1 uiManager:(id)arg2 ;
-(id<BLDownloadQueueUIManagerProtocol>)uiManager;
-(void)setURLRequest:(NSURLRequest *)arg1 ;
-(void)setUiManager:(id<BLDownloadQueueUIManagerProtocol>)arg1 ;
-(NSURLRequest *)URLRequest;
-(id)initWithCoder:(id)arg1 ;
@end

