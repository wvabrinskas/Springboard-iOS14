/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:41 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@class NSDictionary, NSDate;

@interface SBWallpaperDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,nonatomic) NSDictionary * homeScreenWallpapers; 
@property (assign,nonatomic) NSDictionary * lockScreenWallpapers; 
@property (assign,nonatomic) BOOL enableWallpaperDimming; 
@property (nonatomic,retain) NSDate * dateIrisWallpaperLastPlayed; 
@property (assign,nonatomic) unsigned long long irisWallpaperPlayCount; 
@property (nonatomic,readonly) BOOL legacyUsesUniqueHomeScreenWallpaper; 
-(void)setDateIrisWallpaperLastPlayed:(NSDate *)arg1 ;
-(NSDate *)dateIrisWallpaperLastPlayed;
-(void)setEnableWallpaperDimming:(BOOL)arg1 ;
-(BOOL)enableWallpaperDimming;
-(void)setHomeScreenWallpapers:(NSDictionary *)arg1 ;
-(NSDictionary *)homeScreenWallpapers;
-(void)setLockScreenWallpapers:(NSDictionary *)arg1 ;
-(NSDictionary *)lockScreenWallpapers;
-(void)setLegacyUsesUniqueHomeScreenWallpaper:(BOOL)arg1 ;
-(BOOL)legacyUsesUniqueHomeScreenWallpaper;
-(void)setIrisWallpaperPlayCount:(unsigned long long)arg1 ;
-(unsigned long long)irisWallpaperPlayCount;
-(void)clearLegacyDefaults;
-(void)_bindAndRegisterDefaults;
@end

