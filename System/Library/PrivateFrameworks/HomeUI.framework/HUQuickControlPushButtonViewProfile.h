/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:40:26 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeUI/HomeUI-Structs.h>
#import <HomeUI/HUQuickControlViewProfile.h>
#import <libobjc.A.dylib/HUQuickControlIncrementalConvertibleProfile.h>

@class HFNumberValueConstraints, NSString;

@interface HUQuickControlPushButtonViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile> {

	BOOL _toggleColorScheme;

}

@property (assign,nonatomic) BOOL toggleColorScheme;                                              //@synthesize toggleColorScheme=_toggleColorScheme - In the implementation block
@property (nonatomic,readonly) HFNumberValueConstraints * primaryValueConstraints; 
@property (nonatomic,readonly) HFNumberValueConstraints * secondaryValueConstraints; 
@property (nonatomic,readonly) BOOL hasSecondaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setToggleColorScheme:(BOOL)arg1 ;
-(HFNumberValueConstraints *)primaryValueConstraints;
-(HFNumberValueConstraints *)secondaryValueConstraints;
-(BOOL)hasSecondaryValue;
-(BOOL)toggleColorScheme;
@end
