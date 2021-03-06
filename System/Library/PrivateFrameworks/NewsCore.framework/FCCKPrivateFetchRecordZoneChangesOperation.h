/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:36:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class CKRecordZoneID, FCCKPrivateDatabaseServerChangeToken, NSArray;

@interface FCCKPrivateFetchRecordZoneChangesOperation : FCCKPrivateDatabaseOperation {

	BOOL _fetchNewestChangesFirst;
	BOOL _fetchAllChanges;
	BOOL _resultMoreComing;
	CKRecordZoneID* _recordZoneID;
	FCCKPrivateDatabaseServerChangeToken* _previousServerChangeToken;
	NSArray* _desiredKeys;
	/*^block*/id _fetchRecordZoneChangesCompletionBlock;
	NSArray* _resultChangedRecords;
	NSArray* _resultDeletedRecordIDs;
	FCCKPrivateDatabaseServerChangeToken* _resultServerChangeToken;

}

@property (nonatomic,retain) NSArray * resultChangedRecords;                                              //@synthesize resultChangedRecords=_resultChangedRecords - In the implementation block
@property (nonatomic,retain) NSArray * resultDeletedRecordIDs;                                            //@synthesize resultDeletedRecordIDs=_resultDeletedRecordIDs - In the implementation block
@property (nonatomic,retain) FCCKPrivateDatabaseServerChangeToken * resultServerChangeToken;              //@synthesize resultServerChangeToken=_resultServerChangeToken - In the implementation block
@property (assign,nonatomic) BOOL resultMoreComing;                                                       //@synthesize resultMoreComing=_resultMoreComing - In the implementation block
@property (nonatomic,copy) CKRecordZoneID * recordZoneID;                                                 //@synthesize recordZoneID=_recordZoneID - In the implementation block
@property (nonatomic,copy) FCCKPrivateDatabaseServerChangeToken * previousServerChangeToken;              //@synthesize previousServerChangeToken=_previousServerChangeToken - In the implementation block
@property (nonatomic,copy) NSArray * desiredKeys;                                                         //@synthesize desiredKeys=_desiredKeys - In the implementation block
@property (assign,nonatomic) BOOL fetchNewestChangesFirst;                                                //@synthesize fetchNewestChangesFirst=_fetchNewestChangesFirst - In the implementation block
@property (assign,nonatomic) BOOL fetchAllChanges;                                                        //@synthesize fetchAllChanges=_fetchAllChanges - In the implementation block
@property (nonatomic,copy) id fetchRecordZoneChangesCompletionBlock;                                      //@synthesize fetchRecordZoneChangesCompletionBlock=_fetchRecordZoneChangesCompletionBlock - In the implementation block
-(BOOL)validateOperation;
-(void)performOperation;
-(NSArray *)desiredKeys;
-(void)operationWillFinishWithError:(id)arg1 ;
-(void)setDesiredKeys:(NSArray *)arg1 ;
-(void)setFetchAllChanges:(BOOL)arg1 ;
-(void)setPreviousServerChangeToken:(FCCKPrivateDatabaseServerChangeToken *)arg1 ;
-(id)_configurationForDestination:(long long)arg1 ;
-(void)setResultChangedRecords:(NSArray *)arg1 ;
-(void)setFetchRecordZoneChangesCompletionBlock:(id)arg1 ;
-(void)setResultDeletedRecordIDs:(NSArray *)arg1 ;
-(void)setResultMoreComing:(BOOL)arg1 ;
-(BOOL)resultMoreComing;
-(NSArray *)resultChangedRecords;
-(NSArray *)resultDeletedRecordIDs;
-(BOOL)fetchAllChanges;
-(FCCKPrivateDatabaseServerChangeToken *)previousServerChangeToken;
-(void)setRecordZoneID:(CKRecordZoneID *)arg1 ;
-(CKRecordZoneID *)recordZoneID;
-(void)setResultServerChangeToken:(FCCKPrivateDatabaseServerChangeToken *)arg1 ;
-(FCCKPrivateDatabaseServerChangeToken *)resultServerChangeToken;
-(id)fetchRecordZoneChangesCompletionBlock;
-(BOOL)fetchNewestChangesFirst;
-(void)setFetchNewestChangesFirst:(BOOL)arg1 ;
@end

