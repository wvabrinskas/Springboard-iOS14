/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:12 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PKMetalResource.h>

@protocol MTLBuffer;
@class NSString;

@interface PKMetalBuffer : NSObject <PKMetalResource> {

	unsigned long long _lockCount;
	Ai _isPurged;
	id<MTLBuffer> _metalBuffer;

}

@property (nonatomic,readonly) id<MTLBuffer> metalBuffer;              //@synthesize metalBuffer=_metalBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isPurged;
-(BOOL)lock;
-(void)unlock;
-(id<MTLBuffer>)metalBuffer;
-(id)initWithDevice:(id)arg1 length:(unsigned long long)arg2 bytes:(const void*)arg3 options:(unsigned long long)arg4 ;
@end

