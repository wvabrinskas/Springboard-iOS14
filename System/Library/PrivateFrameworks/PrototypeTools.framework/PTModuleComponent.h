/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:41:08 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class PTSettings, NSPredicate, NSString, NSArray;


@protocol PTModuleComponent <NSObject,NSCopying,NSSecureCoding>
@property (assign,nonatomic,__weak) id<PTComponentObserver> componentObserver; 
@property (nonatomic,retain) PTSettings * settings; 
@property (nonatomic,retain) NSPredicate * appearancePredicate; 
@property (nonatomic,retain) NSString * childSettingsKeyPath; 
@property (nonatomic,readonly) NSArray * allSections; 
@property (nonatomic,readonly) NSArray * enabledSections; 
@required
-(NSArray *)allSections;
-(void)setSettings:(id)arg1;
-(NSArray *)enabledSections;
-(PTSettings *)settings;
-(NSPredicate *)appearancePredicate;
-(void)setAppearancePredicate:(id)arg1;
-(NSString *)childSettingsKeyPath;
-(void)setChildSettingsKeyPath:(id)arg1;
-(id)_remoteEditingWhitelistedComponent;
-(id<PTComponentObserver>)componentObserver;
-(void)setComponentObserver:(id)arg1;

@end

