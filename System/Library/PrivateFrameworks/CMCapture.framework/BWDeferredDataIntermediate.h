/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:48 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CMCapture/BWDeferredIntermediate.h>

@class NSData;

@interface BWDeferredDataIntermediate : BWDeferredIntermediate {

	NSData* _archive;

}
-(int)setArchive:(id)arg1 ;
-(id)fetchAndRetain:(int*)arg1 ;
-(id)fetchWithCustomClassesAndRetain:(id)arg1 err:(int*)arg2 ;
-(int)_setURL:(id)arg1 prefetchQueue:(id)arg2 ;
-(void)dealloc;
@end

