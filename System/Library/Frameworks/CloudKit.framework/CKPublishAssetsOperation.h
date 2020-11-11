/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:46 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CloudKit/CKDatabaseOperation.h>
#import <libobjc.A.dylib/CKPublishAssetsOperationCallbacks.h>

@class NSDictionary, NSArray, NSMutableDictionary, CKPublishAssetsOperationInfo;

@interface CKPublishAssetsOperation : CKDatabaseOperation <CKPublishAssetsOperationCallbacks> {

	/*^block*/id _assetPublishedBlock;
	/*^block*/id _publishAssetCompletionBlock;
	NSDictionary* _fileNamesByAssetFieldNames;
	unsigned long long _requestedTTL;
	unsigned long long _URLOptions;
	NSArray* _recordIDs;
	NSMutableDictionary* _perItemErrorsByRecordID;

}

@property (nonatomic,retain) NSArray * recordIDs;                                                               //@synthesize recordIDs=_recordIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * perItemErrorsByRecordID;                                     //@synthesize perItemErrorsByRecordID=_perItemErrorsByRecordID - In the implementation block
@property (nonatomic,readonly) id<CKPublishAssetsOperationCallbacks> clientOperationCallbackProxy; 
@property (nonatomic,readonly) CKPublishAssetsOperationInfo * operationInfo; 
@property (nonatomic,copy) NSDictionary * fileNamesByAssetFieldNames;                                           //@synthesize fileNamesByAssetFieldNames=_fileNamesByAssetFieldNames - In the implementation block
@property (assign,nonatomic) unsigned long long requestedTTL;                                                   //@synthesize requestedTTL=_requestedTTL - In the implementation block
@property (assign,nonatomic) unsigned long long URLOptions;                                                     //@synthesize URLOptions=_URLOptions - In the implementation block
@property (nonatomic,copy) id assetPublishedBlock;                                                              //@synthesize assetPublishedBlock=_assetPublishedBlock - In the implementation block
@property (nonatomic,copy) id publishAssetCompletionBlock;                                                      //@synthesize publishAssetCompletionBlock=_publishAssetCompletionBlock - In the implementation block
+(void)applyDaemonCallbackInterfaceTweaks:(id)arg1 ;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(id)activityCreate;
-(void)fillFromOperationInfo:(id)arg1 ;
-(NSArray *)recordIDs;
-(unsigned long long)URLOptions;
-(unsigned long long)requestedTTL;
-(NSDictionary *)fileNamesByAssetFieldNames;
-(void)setFileNamesByAssetFieldNames:(NSDictionary *)arg1 ;
-(void)setRequestedTTL:(unsigned long long)arg1 ;
-(void)setURLOptions:(unsigned long long)arg1 ;
-(id)assetPublishedBlock;
-(id)publishAssetCompletionBlock;
-(void)setPublishAssetCompletionBlock:(id)arg1 ;
-(void)setAssetPublishedBlock:(id)arg1 ;
-(void)handleAssetPublishCompletionForRecordID:(id)arg1 publishedAsset:(id)arg2 recordKey:(id)arg3 error:(id)arg4 ;
-(id)initWithRecordIDs:(id)arg1 ;
-(NSMutableDictionary *)perItemErrorsByRecordID;
-(void)setPerItemErrorsByRecordID:(NSMutableDictionary *)arg1 ;
-(void)fillOutOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(void)setRecordIDs:(NSArray *)arg1 ;
@end
