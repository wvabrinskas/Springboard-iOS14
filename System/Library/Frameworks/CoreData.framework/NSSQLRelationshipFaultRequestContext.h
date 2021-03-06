/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSRelationshipDescription, NSManagedObjectID, NSSQLModel;

@interface NSSQLRelationshipFaultRequestContext : NSSQLStoreRequestContext {

	NSRelationshipDescription* _relationship;
	NSManagedObjectID* _objectID;

}

@property (nonatomic,readonly) NSRelationshipDescription * relationship;              //@synthesize relationship=_relationship - In the implementation block
@property (nonatomic,readonly) NSManagedObjectID * objectID;                          //@synthesize objectID=_objectID - In the implementation block
@property (nonatomic,readonly) NSSQLModel * sqlModel; 
-(NSManagedObjectID *)objectID;
-(NSRelationshipDescription *)relationship;
-(NSSQLModel *)sqlModel;
-(BOOL)executeRequestCore:(id*)arg1 ;
-(id)initWithObjectID:(id)arg1 relationship:(id)arg2 context:(id)arg3 sqlCore:(id)arg4 ;
-(void)dealloc;
@end

