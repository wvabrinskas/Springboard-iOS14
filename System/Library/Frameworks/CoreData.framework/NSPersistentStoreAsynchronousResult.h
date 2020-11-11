/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSPersistentStoreResult.h>

@class NSProgress, NSError, NSManagedObjectContext;

@interface NSPersistentStoreAsynchronousResult : NSPersistentStoreResult {

	NSProgress* _requestProgress;
	NSError* _requestError;
	NSManagedObjectContext* _requestContext;
	id _requestCompletionBlock;
	int _flags;

}

@property (retain) NSProgress * progress;                                        //@synthesize requestProgress=_requestProgress - In the implementation block
@property (retain) NSError * operationError;                                     //@synthesize requestError=_requestError - In the implementation block
@property (copy) id requestCompletionBlock;                                      //@synthesize requestCompletionBlock=_requestCompletionBlock - In the implementation block
@property (readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize requestContext=_requestContext - In the implementation block
-(NSManagedObjectContext *)managedObjectContext;
-(void)setOperationError:(NSError *)arg1 ;
-(BOOL)_isCancelled;
-(void)_cancelProgress;
-(id)initWithContext:(id)arg1 andProgress:(id)arg2 completetionBlock:(id)arg3 ;
-(NSProgress *)progress;
-(NSError *)operationError;
-(void)setProgress:(NSProgress *)arg1 ;
-(void)cancel;
-(id)requestCompletionBlock;
-(void)setRequestCompletionBlock:(id)arg1 ;
-(void)dealloc;
@end
