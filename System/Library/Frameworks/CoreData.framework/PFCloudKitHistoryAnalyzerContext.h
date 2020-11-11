/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:50 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreData/PFHistoryAnalyzerContext.h>

@class NSMutableDictionary, NSManagedObjectContext, NSSet;

@interface PFCloudKitHistoryAnalyzerContext : PFHistoryAnalyzerContext {

	NSMutableDictionary* _objectIDToAnalyzerStateCache;
	NSManagedObjectContext* _managedObjectContext;
	NSSet* _configuredEntityNames;

}

@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (nonatomic,readonly) NSSet * configuredEntityNames;                              //@synthesize configuredEntityNames=_configuredEntityNames - In the implementation block
-(NSManagedObjectContext *)managedObjectContext;
-(BOOL)reset:(id*)arg1 ;
-(BOOL)finishProcessing:(id*)arg1 ;
-(id)fetchSortedStates:(id*)arg1 ;
-(BOOL)processChange:(id)arg1 error:(id*)arg2 ;
-(BOOL)resetStateForObjectID:(id)arg1 error:(id*)arg2 ;
-(id)analyzerStateForChangedObjectID:(id)arg1 error:(id*)arg2 ;
-(NSSet *)configuredEntityNames;
-(id)newAnalyzerStateForChange:(id)arg1 error:(id*)arg2 ;
-(id)initWithOptions:(id)arg1 managedObjectContext:(id)arg2 store:(id)arg3 ;
-(id)cloudKitAnalyzerOptions;
-(void)dealloc;
@end
