/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Home/HFItemProvider.h>

@class NSSet, NSMutableSet;

@interface HUCameraSmartDetectionSettingsItemProvider : HFItemProvider {

	NSSet* _cameraProfiles;
	unsigned long long _settingsContext;
	NSMutableSet* _smartDetectionSettingsItems;

}

@property (nonatomic,readonly) NSMutableSet * smartDetectionSettingsItems;              //@synthesize smartDetectionSettingsItems=_smartDetectionSettingsItems - In the implementation block
@property (nonatomic,copy,readonly) NSSet * cameraProfiles;                             //@synthesize cameraProfiles=_cameraProfiles - In the implementation block
@property (nonatomic,readonly) unsigned long long settingsContext;                      //@synthesize settingsContext=_settingsContext - In the implementation block
-(id)init;
-(NSSet *)cameraProfiles;
-(id)items;
-(id)reloadItems;
-(id)initWithCameraProfiles:(id)arg1 settingsContext:(unsigned long long)arg2 ;
-(unsigned long long)settingsContext;
-(NSMutableSet *)smartDetectionSettingsItems;
@end

