/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:04 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AXMediaUtilities/AXMEvaluationNode.h>

@class NSArray, NSURL;

@interface AXMMobileAssetEvaluationNode : AXMEvaluationNode {

	NSArray* _mlModels;
	NSURL* _mobileAssetBaseURL;

}

@property (nonatomic,readonly) NSArray * mlModels;                      //@synthesize mlModels=_mlModels - In the implementation block
@property (nonatomic,readonly) NSURL * mobileAssetBaseURL;              //@synthesize mobileAssetBaseURL=_mobileAssetBaseURL - In the implementation block
-(void)_downloadAssetsIfNecessary;
-(id)modelResourceNames;
-(id)mlModelClasses;
-(id)mobileAssetType;
-(unsigned long long)minSupportedFormatVersion;
-(unsigned long long)maxSupportedFormatVersion;
-(void)setModelURLs:(id)arg1 ;
-(NSURL *)mobileAssetBaseURL;
-(void)evaluate:(id)arg1 metrics:(id)arg2 ;
-(id)initWithIdentifier:(id)arg1 ;
-(NSArray *)mlModels;
-(id)modelURLs;
@end
