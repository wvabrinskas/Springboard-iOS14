/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:42:30 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSNumber, NSArray;


@protocol SBSHomeScreenServiceClientToServerInterface
@property (nonatomic,copy) NSNumber * lowDensityIconLayoutEnabledValue; 
@property (nonatomic,copy) NSNumber * addsNewIconsToHomeScreenValue; 
@property (nonatomic,copy) NSNumber * showsBadgesInAppLibraryValue; 
@property (nonatomic,copy,readonly) NSArray * allHomeScreenApplicationBundleIdentifiers; 
@property (nonatomic,copy,readonly) NSArray * allHomeScreenApplicationPlaceholderBundleIdentifiers; 
@required
-(void)organizeAllIconsAcrossPagesWithPageCount:(id)arg1;
-(oneway void)unforbidApplicationBundleIdentifierFromLibrary:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)runRemoveAndRestoreIconTest;
-(NSArray *)allHomeScreenApplicationPlaceholderBundleIdentifiers;
-(oneway void)resetCategoriesLayoutWithCompletion:(/*^block*/id)arg1;
-(void)changeDisplayedDateOffsetOverride:(id)arg1;
-(NSNumber *)lowDensityIconLayoutEnabledValue;
-(oneway void)resetHomeScreenLayoutWithCompletion:(/*^block*/id)arg1;
-(id)configureCategoryMapProviderToUseCategoryMapAtURL:(id)arg1;
-(void)setShowsBadgesInAppLibraryValue:(id)arg1;
-(oneway void)requestSuggestedApplicationWithBundleIdentifier:(id)arg1 assertionPort:(id)arg2 completion:(/*^block*/id)arg3;
-(void)configureDeweyEachAppHasItsOwnCategory;
-(oneway void)runFloatingDockStressTestWithCompletion:(/*^block*/id)arg1;
-(void)removeAllWidgets;
-(BOOL)hasWidgetWithBundleIdentifier:(id)arg1;
-(BOOL)debugContinuityWithBadgeType:(id)arg1;
-(void)changeDisplayedDateOverride:(id)arg1;
-(void)setLowDensityIconLayoutEnabledValue:(id)arg1;
-(void)overrideBadgeValue:(id)arg1 forBundleIdentifier:(id)arg2;
-(void)configureDeweyOneCategoryWithAllApps;
-(void)reloadIcons;
-(NSArray *)allHomeScreenApplicationBundleIdentifiers;
-(id)folderPathToIconWithBundleIdentifier:(id)arg1;
-(void)refreshAppLibrary:(id)arg1 reason:(id)arg2;
-(void)runDownloadingIconTest;
-(void)requestAppLibraryUpdate:(id)arg1 reason:(id)arg2 completion:(/*^block*/id)arg3;
-(NSNumber *)showsBadgesInAppLibraryValue;
-(NSNumber *)addsNewIconsToHomeScreenValue;
-(void)setAddsNewIconsToHomeScreenValue:(id)arg1;
-(oneway void)forbidApplicationBundleIdentifierFromLibrary:(id)arg1 withCompletion:(/*^block*/id)arg2;
-(void)ignoreAllApps;
-(void)organizeAllIconsIntoFoldersWithPageCount:(id)arg1;
-(void)addWidgetToTodayViewWithBundleIdentifier:(id)arg1;

@end
