/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSPersistentHistoryTransaction.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSString, NSData, NSPersistentStoreCoordinator, NSManagedObjectID;

@interface _NSPersistentHistoryTransaction : NSPersistentHistoryTransaction <NSSecureCoding> {

	long long _rowIdentifier;
	double _timestamp;
	NSArray* _changes;
	NSString* _storeID;
	NSString* _bundleID;
	NSString* _processID;
	NSString* _contextName;
	NSString* _author;
	NSData* _queryGeneration;
	NSPersistentStoreCoordinator* _coordinator;
	NSManagedObjectID* _backingObjectID;

}
+(BOOL)supportsSecureCoding;
-(id)changes;
-(id)storeID;
-(id)bundleID;
-(id)postQueryGenerationToken;
-(id)author;
-(id)processID;
-(void)encodeWithCoder:(id)arg1 ;
-(id)objectIDNotification;
-(id)token;
-(id)contextName;
-(id)initWithCoder:(id)arg1 ;
-(id)timestamp;
-(long long)transactionNumber;
-(id)initialQueryGenerationToken;
-(void)dealloc;
@end

