/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:29 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@class NSHashTable;

@interface PLManagedObjectContextList : NSObject {

	os_unfair_lock_s _lock;
	NSHashTable* _contexts;

}
-(id)init;
-(void)addContext:(id)arg1 ;
-(id)allContexts;
-(id)allContextsNotIdenticalTo:(id)arg1 ;
@end
