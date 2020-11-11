/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol CPLBatchExtractionStrategyStorage;
@class NSString;

@interface CPLBatchExtractionStep : NSObject {

	id<CPLBatchExtractionStrategyStorage> _storage;
	NSString* _scopeIdentifier;

}

@property (nonatomic,readonly) id<CPLBatchExtractionStrategyStorage> storage;              //@synthesize storage=_storage - In the implementation block
@property (nonatomic,copy,readonly) NSString * scopeIdentifier;                            //@synthesize scopeIdentifier=_scopeIdentifier - In the implementation block
-(void)reset;
-(id)description;
-(NSString *)scopeIdentifier;
-(id<CPLBatchExtractionStrategyStorage>)storage;
-(id)shortDescription;
-(void)resetConditionallyFromNewIncomingChange:(id)arg1 ;
-(id)initWithStorage:(id)arg1 scopeIdentifier:(id)arg2 ;
-(BOOL)extractToBatch:(id)arg1 maximumCount:(unsigned long long)arg2 maximumResourceSize:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)shouldResetFromThisStepWithIncomingChange:(id)arg1 ;
@end
