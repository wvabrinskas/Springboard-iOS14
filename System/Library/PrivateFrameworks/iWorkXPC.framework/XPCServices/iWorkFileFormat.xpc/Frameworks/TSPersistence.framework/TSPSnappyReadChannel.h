/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSUStreamReadChannel.h>

@protocol TSUStreamReadChannel;
@class NSString;

@interface TSPSnappyReadChannel : NSObject <TSUStreamReadChannel> {

	id<TSUStreamReadChannel> _readChannel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)close;
-(void)dealloc;
-(void)readWithHandler:(/*^block*/id)arg1 ;
-(id)initWithReadChannel:(id)arg1 ;
-(void)readWithHandlerAndWait:(/*^block*/id)arg1 ;
-(BOOL)processData:(id*)arg1 isDone:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(id)uncompressDataFromSource:(SnappySource*)arg1 ;
-(id)uncompressData:(id)arg1 ;
@end

