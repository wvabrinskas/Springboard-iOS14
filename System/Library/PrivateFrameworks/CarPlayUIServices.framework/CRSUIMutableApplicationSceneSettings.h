/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CarPlayUIServices/CarPlayUIServices-Structs.h>
#import <UIKitCore/UIMutableCarPlayApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIApplicationSceneSettings.h>
#import <libobjc.A.dylib/CRSUIMutableMapStyleProviding.h>

@class NSString;

@interface CRSUIMutableApplicationSceneSettings : UIMutableCarPlayApplicationSceneSettings <CRSUIApplicationSceneSettings, CRSUIMutableMapStyleProviding>

@property (assign,nonatomic) double bannerHeight; 
@property (nonatomic,readonly) long long mapStyle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setBannerHeight:(double)arg1 ;
-(double)bannerHeight;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)mapStyle;
-(void)setMapStyle:(long long)arg1 ;
@end
