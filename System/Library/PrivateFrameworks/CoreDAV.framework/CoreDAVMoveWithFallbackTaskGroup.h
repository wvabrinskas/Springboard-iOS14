/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:59 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreDAV/CoreDAVTaskGroup.h>

@class NSURL, NSString, NSData, NSDictionary;

@interface CoreDAVMoveWithFallbackTaskGroup : CoreDAVTaskGroup {

	NSURL* _sourceURL;
	NSURL* _destinationURL;
	NSString* _previousETag;
	BOOL _useFallback;
	int _overwrite;
	NSData* _dataPayload;
	NSString* _dataContentType;
	NSDictionary* _responseHeaders;
	NSString* _nextETag;

}

@property (nonatomic,readonly) NSURL * sourceURL;                           //@synthesize sourceURL=_sourceURL - In the implementation block
@property (nonatomic,readonly) NSURL * destinationURL;                      //@synthesize destinationURL=_destinationURL - In the implementation block
@property (assign,nonatomic) int overwrite;                                 //@synthesize overwrite=_overwrite - In the implementation block
@property (assign,nonatomic) BOOL useFallback;                              //@synthesize useFallback=_useFallback - In the implementation block
@property (nonatomic,retain) NSString * previousETag;                       //@synthesize previousETag=_previousETag - In the implementation block
@property (nonatomic,retain) NSData * dataPayload;                          //@synthesize dataPayload=_dataPayload - In the implementation block
@property (nonatomic,retain) NSString * dataContentType;                    //@synthesize dataContentType=_dataContentType - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseHeaders;              //@synthesize responseHeaders=_responseHeaders - In the implementation block
@property (nonatomic,readonly) NSString * nextETag;                         //@synthesize nextETag=_nextETag - In the implementation block
-(BOOL)useFallback;
-(NSURL *)sourceURL;
-(int)overwrite;
-(void)setOverwrite:(int)arg1 ;
-(void)setUseFallback:(BOOL)arg1 ;
-(id)description;
-(void)setPreviousETag:(NSString *)arg1 ;
-(NSURL *)destinationURL;
-(NSDictionary *)responseHeaders;
-(NSData *)dataPayload;
-(void)startTaskGroup;
-(void)setDataPayload:(NSData *)arg1 ;
-(NSString *)nextETag;
-(NSString *)dataContentType;
-(NSString *)previousETag;
-(void)_completedMoveTask:(id)arg1 ;
-(void)_completedPutTask:(id)arg1 ;
-(id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 AccountInfoProvider:(id)arg3 taskManager:(id)arg4 ;
-(void)setDataContentType:(NSString *)arg1 ;
@end

