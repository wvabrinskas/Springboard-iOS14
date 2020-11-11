/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <NotesShared/NotesShared-Structs.h>
@interface ICRWLock : NSObject {

	opaque_pthread_rwlock_t _rwLock;

}
-(void)unlock;
-(id)init;
-(void)writeLock;
-(void)readLock;
-(int)tryReadLock;
-(void)dealloc;
@end
