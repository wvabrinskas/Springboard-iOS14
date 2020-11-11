/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:52 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsUI.framework/PodcastsUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PodcastsUI/PodcastsUI-Structs.h>
#import <PodcastsUI/MTMPUFontDescriptor.h>

@interface MTMPUMutableFontDescriptor : MTMPUFontDescriptor

@property (assign,nonatomic) long long textStyle; 
@property (assign,nonatomic) double systemFontSize; 
@property (assign,nonatomic) long long weight; 
@property (assign,nonatomic) long long leadingAdjustment; 
@property (assign,nonatomic) double defaultPointSizeAdjustment; 
@property (assign,nonatomic) BOOL usesItalic; 
@property (assign,nonatomic) BOOL usesCondensedMetrics; 
@property (assign,nonatomic) BOOL wantsMonospaceNumbers; 
-(void)setUsesCondensedMetrics:(BOOL)arg1 ;
-(void)setDefaultPointSizeAdjustment:(double)arg1 ;
-(id)_copyAllowingGlobalCacheLookup:(BOOL)arg1 ;
-(void)setWantsMonospaceNumbers:(BOOL)arg1 ;
-(void)setWeight:(long long)arg1 ;
-(void)_resetToDefaultValues;
-(void)setUsesItalic:(BOOL)arg1 ;
-(void)setTextStyle:(long long)arg1 ;
-(void)setLeadingAdjustment:(long long)arg1 ;
-(void)setSystemFontSize:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
