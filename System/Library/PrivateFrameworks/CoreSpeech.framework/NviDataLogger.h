/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:14 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSStreamDelegate.h>

@class NSOutputStream, NSString;

@interface NviDataLogger : NSObject <NSStreamDelegate> {

	NSOutputStream* _oStream;

}

@property (nonatomic,retain) NSOutputStream * oStream;              //@synthesize oStream=_oStream - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)endRequest;
-(NSOutputStream *)oStream;
-(void)stream:(id)arg1 handleEvent:(unsigned long long)arg2 ;
-(void)logData:(id)arg1 ;
-(id)initWithFilePath:(id)arg1 appendHdr:(id)arg2 ;
-(void)setOStream:(NSOutputStream *)arg1 ;
@end

