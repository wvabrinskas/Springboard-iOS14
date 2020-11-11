/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSManagedObjectID;

@interface NSIncrementalStoreNode : NSObject {

	NSManagedObjectID* _objectID;
	unsigned long long _versionNumber;
	id _propertyCache;
	void* _reserved1;

}

@property (nonatomic,readonly) NSManagedObjectID * objectID; 
@property (nonatomic,readonly) unsigned long long version; 
+(void)initialize;
-(NSManagedObjectID *)objectID;
-(id)_propertyCache;
-(void)updateFromSQLRow:(id)arg1 ;
-(unsigned)_versionNumber;
-(unsigned long long)version;
-(id)valueForPropertyDescription:(id)arg1 ;
-(id)_snapshot_;
-(id)initWithObjectID:(id)arg1 withValues:(id)arg2 version:(unsigned long long)arg3 ;
-(id)description;
-(id)initWithObjectID:(id)arg1 fromSQLRow:(id)arg2 ;
-(void)updateWithValues:(id)arg1 version:(unsigned long long)arg2 ;
-(const id*)knownKeyValuesPointer;
-(void)dealloc;
@end
