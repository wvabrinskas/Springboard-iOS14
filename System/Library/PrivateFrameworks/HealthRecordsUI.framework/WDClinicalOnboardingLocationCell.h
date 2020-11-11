/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HealthRecordsUI.framework/HealthRecordsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HealthRecordsUI/WDClinicalLocationCell.h>

@class HKClinicalProvider;

@interface WDClinicalOnboardingLocationCell : WDClinicalLocationCell {

	HKClinicalProvider* _provider;

}

@property (nonatomic,copy,readonly) HKClinicalProvider * provider;              //@synthesize provider=_provider - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_updateContentWithBrandable:(id)arg1 dataProvider:(id)arg2 ;
-(void)_updateForContentSizeCategory:(id)arg1 ;
-(HKClinicalProvider *)provider;
-(void)prepareForReuse;
-(void)_setupSubviews;
-(void)setProvider:(id)arg1 dataProvider:(id)arg2 ;
@end
