/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSDate, NSMutableArray, NSString, NSArray, NSSet;

@interface MAAssetQuery : NSObject {

	BOOL _isPallasResult;
	BOOL _isDone;
	BOOL _doNotBlockBeforeFirstUnlock;
	BOOL _doNotBlockOnNetworkStatus;
	long long _resultCode;
	NSDate* _postedDate;
	NSMutableArray* _queryParams;
	NSString* _assetType;
	NSArray* _results;
	NSSet* _assetIds;
	long long _returnTypes;
	NSDate* _lastFetchDate;

}

@property (nonatomic,readonly) NSMutableArray * queryParams;                //@synthesize queryParams=_queryParams - In the implementation block
@property (nonatomic,readonly) NSString * assetType;                        //@synthesize assetType=_assetType - In the implementation block
@property (assign,nonatomic) BOOL doNotBlockBeforeFirstUnlock;              //@synthesize doNotBlockBeforeFirstUnlock=_doNotBlockBeforeFirstUnlock - In the implementation block
@property (assign,nonatomic) BOOL doNotBlockOnNetworkStatus;                //@synthesize doNotBlockOnNetworkStatus=_doNotBlockOnNetworkStatus - In the implementation block
@property (nonatomic,readonly) NSArray * results;                           //@synthesize results=_results - In the implementation block
@property (nonatomic,readonly) long long resultCode;                        //@synthesize resultCode=_resultCode - In the implementation block
@property (nonatomic,readonly) BOOL isDone;                                 //@synthesize isDone=_isDone - In the implementation block
@property (nonatomic,readonly) NSSet * assetIds;                            //@synthesize assetIds=_assetIds - In the implementation block
@property (nonatomic,readonly) long long returnTypes;                       //@synthesize returnTypes=_returnTypes - In the implementation block
@property (nonatomic,readonly) NSDate * lastFetchDate;                      //@synthesize lastFetchDate=_lastFetchDate - In the implementation block
@property (nonatomic,readonly) NSDate * postedDate;                         //@synthesize postedDate=_postedDate - In the implementation block
-(NSString *)assetType;
-(NSArray *)results;
-(long long)addKeyValuePair:(id)arg1 with:(id)arg2 ;
-(BOOL)doNotBlockBeforeFirstUnlock;
-(void)setDoNotBlockOnNetworkStatus:(BOOL)arg1 ;
-(void)returnTypes:(long long)arg1 ;
-(id)initWithType:(id)arg1 ;
-(void)getResultsFromMessage:(id)arg1 ;
-(id)description;
-(BOOL)isCatalogFetchedWithinThePastFewDays:(int)arg1 ;
-(void)queryMetaDataWithError:(/*^block*/id)arg1 ;
-(BOOL)doNotBlockOnNetworkStatus;
-(NSDate *)lastFetchDate;
-(void)setDoNotBlockBeforeFirstUnlock:(BOOL)arg1 ;
-(BOOL)isCatalogFetchedFromLiveServer;
-(void)augmentResultsWithState:(BOOL)arg1 ;
-(long long)queryMetaDataSync;
-(long long)resultCode;
-(long long)addKeyValueArray:(id)arg1 with:(id)arg2 ;
-(NSMutableArray *)queryParams;
-(long long)addKeyValueNull:(id)arg1 ;
-(long long)queryInstalledAssetIds;
-(long long)returnTypes;
-(void)queryMetaData:(/*^block*/id)arg1 ;
-(NSSet *)assetIds;
-(void)dealloc;
-(NSDate *)postedDate;
-(BOOL)isDone;
@end

