/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXSettings.h>

@interface PXCPLStatusSettings : PXSettings {

	BOOL _cloudQuotaOfferIncludeAssetCounts;
	long long _cloudQuotaOfferLevel;

}

@property (assign,nonatomic) long long cloudQuotaOfferLevel;                      //@synthesize cloudQuotaOfferLevel=_cloudQuotaOfferLevel - In the implementation block
@property (assign,nonatomic) BOOL cloudQuotaOfferIncludeAssetCounts;              //@synthesize cloudQuotaOfferIncludeAssetCounts=_cloudQuotaOfferIncludeAssetCounts - In the implementation block
+(id)sharedInstance;
+(id)settingsControllerModule;
-(id)parentSettings;
-(void)setDefaultValues;
-(long long)cloudQuotaOfferLevel;
-(void)setCloudQuotaOfferIncludeAssetCounts:(BOOL)arg1 ;
-(BOOL)cloudQuotaOfferIncludeAssetCounts;
-(void)setCloudQuotaOfferLevel:(long long)arg1 ;
@end
