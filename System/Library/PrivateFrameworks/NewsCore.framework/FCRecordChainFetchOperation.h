/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCOperation.h>

@protocol FCContentContext;
@class NSArray, NSDictionary, FCEdgeCacheHint, FCHeldRecords, NSMutableSet, NSMutableArray;

@interface FCRecordChainFetchOperation : FCOperation {

	BOOL _shouldReturnErrorWhenSomeRecordsMissing;
	BOOL _shouldBypassRecordSourcePersistence;
	id<FCContentContext> _context;
	NSArray* _topLevelRecordIDs;
	NSDictionary* _linkKeysByRecordType;
	NSDictionary* _cachePoliciesByRecordType;
	/*^block*/id _dynamicCachePolicyBlock;
	FCEdgeCacheHint* _edgeCacheHint;
	NSArray* _additionalRecordSources;
	/*^block*/id _cachedRecordsLookupBlock;
	/*^block*/id _recordChainCompletionHandler;
	NSArray* _recordSources;
	NSDictionary* _recordSourcesByRecordType;
	NSDictionary* _pbRecordTypesByRecordType;
	FCHeldRecords* _cachedRecords;
	NSMutableSet* _actualTopLevelRecordIDs;
	NSMutableSet* _skippedTopLevelRecordIDs;
	NSMutableSet* _missingCachedOnlyTopLevelRecordIDs;
	NSDictionary* _resultHeldRecordsByType;
	NSMutableArray* _mutableNetworkEvents;

}

@property (nonatomic,retain) NSArray * recordSources;                                        //@synthesize recordSources=_recordSources - In the implementation block
@property (nonatomic,retain) NSDictionary * recordSourcesByRecordType;                       //@synthesize recordSourcesByRecordType=_recordSourcesByRecordType - In the implementation block
@property (nonatomic,retain) NSDictionary * pbRecordTypesByRecordType;                       //@synthesize pbRecordTypesByRecordType=_pbRecordTypesByRecordType - In the implementation block
@property (nonatomic,retain) FCHeldRecords * cachedRecords;                                  //@synthesize cachedRecords=_cachedRecords - In the implementation block
@property (nonatomic,retain) NSMutableSet * actualTopLevelRecordIDs;                         //@synthesize actualTopLevelRecordIDs=_actualTopLevelRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * skippedTopLevelRecordIDs;                        //@synthesize skippedTopLevelRecordIDs=_skippedTopLevelRecordIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * missingCachedOnlyTopLevelRecordIDs;              //@synthesize missingCachedOnlyTopLevelRecordIDs=_missingCachedOnlyTopLevelRecordIDs - In the implementation block
@property (nonatomic,retain) NSDictionary * resultHeldRecordsByType;                         //@synthesize resultHeldRecordsByType=_resultHeldRecordsByType - In the implementation block
@property (nonatomic,retain) NSMutableArray * mutableNetworkEvents;                          //@synthesize mutableNetworkEvents=_mutableNetworkEvents - In the implementation block
@property (nonatomic,retain) id<FCContentContext> context;                                   //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSArray * topLevelRecordIDs;                                      //@synthesize topLevelRecordIDs=_topLevelRecordIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * linkKeysByRecordType;                              //@synthesize linkKeysByRecordType=_linkKeysByRecordType - In the implementation block
@property (nonatomic,copy) NSDictionary * cachePoliciesByRecordType;                         //@synthesize cachePoliciesByRecordType=_cachePoliciesByRecordType - In the implementation block
@property (nonatomic,copy) id dynamicCachePolicyBlock;                                       //@synthesize dynamicCachePolicyBlock=_dynamicCachePolicyBlock - In the implementation block
@property (assign,nonatomic) BOOL shouldReturnErrorWhenSomeRecordsMissing;                   //@synthesize shouldReturnErrorWhenSomeRecordsMissing=_shouldReturnErrorWhenSomeRecordsMissing - In the implementation block
@property (nonatomic,copy) FCEdgeCacheHint * edgeCacheHint;                                  //@synthesize edgeCacheHint=_edgeCacheHint - In the implementation block
@property (nonatomic,retain) NSArray * additionalRecordSources;                              //@synthesize additionalRecordSources=_additionalRecordSources - In the implementation block
@property (nonatomic,copy,readonly) NSArray * networkEvents; 
@property (assign,nonatomic) BOOL shouldBypassRecordSourcePersistence;                       //@synthesize shouldBypassRecordSourcePersistence=_shouldBypassRecordSourcePersistence - In the implementation block
@property (nonatomic,copy) id cachedRecordsLookupBlock;                                      //@synthesize cachedRecordsLookupBlock=_cachedRecordsLookupBlock - In the implementation block
@property (nonatomic,copy) id recordChainCompletionHandler;                                  //@synthesize recordChainCompletionHandler=_recordChainCompletionHandler - In the implementation block
-(void)setLinkKeysByRecordType:(NSDictionary *)arg1 ;
-(NSArray *)topLevelRecordIDs;
-(NSDictionary *)resultHeldRecordsByType;
-(BOOL)validateOperation;
-(FCEdgeCacheHint *)edgeCacheHint;
-(NSArray *)networkEvents;
-(void)setMutableNetworkEvents:(NSMutableArray *)arg1 ;
-(void)performOperation;
-(void)prepareOperation;
-(void)setCachedRecordsLookupBlock:(id)arg1 ;
-(void)setAdditionalRecordSources:(NSArray *)arg1 ;
-(id)recordChainCompletionHandler;
-(void)setDynamicCachePolicyBlock:(id)arg1 ;
-(void)operationWillFinishWithError:(id)arg1 ;
-(NSDictionary *)linkKeysByRecordType;
-(NSDictionary *)cachePoliciesByRecordType;
-(void)setCachePoliciesByRecordType:(NSDictionary *)arg1 ;
-(void)setRecordChainCompletionHandler:(id)arg1 ;
-(NSArray *)additionalRecordSources;
-(id)_recordSourceForRecordType:(id)arg1 ;
-(id)dynamicCachePolicyBlock;
-(void)_finalizeResultFromCachedRecords;
-(id)init;
-(id)_errorForMissingRecordNames:(id)arg1 ;
-(void)setTopLevelRecordIDs:(NSArray *)arg1 ;
-(void)_issueCloudRequestIfNeeded;
-(void)_walkRecordChainStartingWithRecordIDs:(id)arg1 visitedRecordIDs:(id)arg2 recordsLookupBlock:(/*^block*/id)arg3 visitorBlock:(/*^block*/id)arg4 ;
-(void)setEdgeCacheHint:(FCEdgeCacheHint *)arg1 ;
-(void)setResultHeldRecordsByType:(NSDictionary *)arg1 ;
-(id)_partialFetchErrorForMissingRecordName:(id)arg1 ;
-(void)setPbRecordTypesByRecordType:(NSDictionary *)arg1 ;
-(void)setCachedRecords:(FCHeldRecords *)arg1 ;
-(void)setSkippedTopLevelRecordIDs:(NSMutableSet *)arg1 ;
-(void)_filterOrphansFromCachedRecords;
-(id)_recordTypeForRecordID:(id)arg1 ;
-(void)setRecordSources:(NSArray *)arg1 ;
-(id<FCContentContext>)context;
-(int)_pbRecordTypeForRecordType:(id)arg1 ;
-(NSDictionary *)pbRecordTypesByRecordType;
-(void)setRecordSourcesByRecordType:(NSDictionary *)arg1 ;
-(void)setMissingCachedOnlyTopLevelRecordIDs:(NSMutableSet *)arg1 ;
-(void)_collectCachedRecordsFromRecordIDs:(id)arg1 ;
-(FCHeldRecords *)cachedRecords;
-(void)setShouldReturnErrorWhenSomeRecordsMissing:(BOOL)arg1 ;
-(void)setShouldBypassRecordSourcePersistence:(BOOL)arg1 ;
-(NSMutableSet *)missingCachedOnlyTopLevelRecordIDs;
-(NSDictionary *)recordSourcesByRecordType;
-(NSMutableSet *)actualTopLevelRecordIDs;
-(NSArray *)recordSources;
-(void)_collectActualTopLevelRecordIDsFromRecordIDs:(id)arg1 visitedRecordIDs:(id)arg2 ;
-(void)setContext:(id<FCContentContext>)arg1 ;
-(int)_pbRecordTypeForRecordID:(id)arg1 ;
-(id)_recordIDsMissingFromCachedRecords;
-(NSMutableArray *)mutableNetworkEvents;
-(id)_partialUncachedErrorForMissingRecordName:(id)arg1 ;
-(BOOL)shouldBypassRecordSourcePersistence;
-(BOOL)shouldReturnErrorWhenSomeRecordsMissing;
-(id)cachedRecordsLookupBlock;
-(NSMutableSet *)skippedTopLevelRecordIDs;
-(void)setActualTopLevelRecordIDs:(NSMutableSet *)arg1 ;
@end
