/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:47 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSPersistentStoreMap.h>

@class NSMutableDictionary;

@interface NSDictionaryStoreMap : NSPersistentStoreMap {

	NSMutableDictionary* _theMap;

}
+(void)initialize;
-(id)dataForKey:(id)arg1 ;
-(void)saveToPath:(id)arg1 ;
-(id)_archivedData;
-(void)addObject:(id)arg1 objectIDMap:(id)arg2 ;
-(void)removeObject:(id)arg1 objectIDMap:(id)arg2 ;
-(id)retainedObjectIDsForRelationship:(id)arg1 forObjectID:(id)arg2 ;
-(void)updateObject:(id)arg1 objectIDMap:(id)arg2 ;
-(id)initWithStore:(id)arg1 fromArchivedData:(id)arg2 ;
-(id)initWithStore:(id)arg1 ;
-(id)_theDictionary;
-(id)handleFetchRequest:(id)arg1 ;
-(id)initWithStore:(id)arg1 fromPath:(id)arg2 ;
-(void)dealloc;
@end

