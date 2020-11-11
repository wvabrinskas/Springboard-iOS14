/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:01 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpringBoardHome/SpringBoardHome-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableDictionary, SBHIconAccessoryVisualConfiguration, SBHFolderIconVisualConfiguration, SBHFloatyFolderVisualConfiguration, SBHAppLibraryVisualConfiguration, SBHSidebarVisualConfiguration, SBHRootFolderVisualConfiguration, NSString;

@interface SBIconListGridLayoutConfiguration : NSObject <NSCopying, BSDescriptionProviding> {

	NSMutableDictionary* _iconLabelVisualConfigurations;
	SBHIconGridSizeClassIconImageInfos _iconGridSizeClassIconImageInfos;
	unsigned long long _numberOfPortraitColumns;
	unsigned long long _numberOfPortraitRows;
	unsigned long long _numberOfLandscapeColumns;
	unsigned long long _numberOfLandscapeRows;
	unsigned long long _supportedIconGridSizeClasses;
	SBHIconAccessoryVisualConfiguration* _iconAccessoryVisualConfiguration;
	SBHFolderIconVisualConfiguration* _folderIconVisualConfiguration;
	SBHFloatyFolderVisualConfiguration* _floatyFolderVisualConfiguration;
	SBHAppLibraryVisualConfiguration* _appLibraryVisualConfiguration;
	SBHSidebarVisualConfiguration* _sidebarVisualConfiguration;
	SBHRootFolderVisualConfiguration* _rootFolderVisualConfiguration;
	SBHIconGridSizeClassSizes _iconGridSizeClassSizes;
	CGSize _listSizeForIconSpacingCalculation;
	UIEdgeInsets _portraitLayoutInsets;
	UIEdgeInsets _landscapeLayoutInsets;

}

@property (assign,nonatomic) unsigned long long numberOfPortraitColumns;                                           //@synthesize numberOfPortraitColumns=_numberOfPortraitColumns - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfPortraitRows;                                              //@synthesize numberOfPortraitRows=_numberOfPortraitRows - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLandscapeColumns;                                          //@synthesize numberOfLandscapeColumns=_numberOfLandscapeColumns - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfLandscapeRows;                                             //@synthesize numberOfLandscapeRows=_numberOfLandscapeRows - In the implementation block
@property (assign,nonatomic) SBHIconGridSizeClassSizes iconGridSizeClassSizes;                                     //@synthesize iconGridSizeClassSizes=_iconGridSizeClassSizes - In the implementation block
@property (assign,nonatomic) unsigned long long supportedIconGridSizeClasses;                                      //@synthesize supportedIconGridSizeClasses=_supportedIconGridSizeClasses - In the implementation block
@property (assign,nonatomic) UIEdgeInsets portraitLayoutInsets;                                                    //@synthesize portraitLayoutInsets=_portraitLayoutInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets landscapeLayoutInsets;                                                   //@synthesize landscapeLayoutInsets=_landscapeLayoutInsets - In the implementation block
@property (assign,nonatomic) SBIconImageInfo iconImageInfo; 
@property (assign,nonatomic) CGSize listSizeForIconSpacingCalculation;                                             //@synthesize listSizeForIconSpacingCalculation=_listSizeForIconSpacingCalculation - In the implementation block
@property (nonatomic,copy) SBHIconAccessoryVisualConfiguration * iconAccessoryVisualConfiguration;                 //@synthesize iconAccessoryVisualConfiguration=_iconAccessoryVisualConfiguration - In the implementation block
@property (nonatomic,copy) SBHFolderIconVisualConfiguration * folderIconVisualConfiguration;                       //@synthesize folderIconVisualConfiguration=_folderIconVisualConfiguration - In the implementation block
@property (nonatomic,copy) SBHFloatyFolderVisualConfiguration * floatyFolderVisualConfiguration;                   //@synthesize floatyFolderVisualConfiguration=_floatyFolderVisualConfiguration - In the implementation block
@property (nonatomic,copy) SBHAppLibraryVisualConfiguration * appLibraryVisualConfiguration;                       //@synthesize appLibraryVisualConfiguration=_appLibraryVisualConfiguration - In the implementation block
@property (nonatomic,copy) SBHSidebarVisualConfiguration * sidebarVisualConfiguration;                             //@synthesize sidebarVisualConfiguration=_sidebarVisualConfiguration - In the implementation block
@property (nonatomic,copy,readonly) SBHRootFolderVisualConfiguration * rootFolderVisualConfiguration;              //@synthesize rootFolderVisualConfiguration=_rootFolderVisualConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBIconImageInfo)iconImageInfoForGridSizeClass:(unsigned long long)arg1 ;
-(id)succinctDescription;
-(void)setIconGridSizeClassSizes:(SBHIconGridSizeClassSizes)arg1 ;
-(SBHFloatyFolderVisualConfiguration *)floatyFolderVisualConfiguration;
-(void)setIconImageInfo:(SBIconImageInfo)arg1 ;
-(id)init;
-(SBIconImageInfo)iconImageInfo;
-(SBHAppLibraryVisualConfiguration *)appLibraryVisualConfiguration;
-(void)setSidebarVisualConfiguration:(SBHSidebarVisualConfiguration *)arg1 ;
-(unsigned long long)supportedIconGridSizeClasses;
-(SBHIconGridSizeClassSizes)iconGridSizeClassSizes;
-(void)setIconLabelVisualConfiguration:(id)arg1 forContentSizeCategory:(id)arg2 ;
-(unsigned long long)hash;
-(void)setSupportedIconGridSizeClasses:(unsigned long long)arg1 ;
-(unsigned long long)numberOfPortraitRows;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(UIEdgeInsets)portraitLayoutInsets;
-(void)setIconImageInfo:(SBIconImageInfo)arg1 forGridSizeClass:(unsigned long long)arg2 ;
-(SBHIconAccessoryVisualConfiguration *)iconAccessoryVisualConfiguration;
-(void)setNumberOfPortraitRows:(unsigned long long)arg1 ;
-(unsigned long long)numberOfLandscapeRows;
-(void)setNumberOfLandscapeRows:(unsigned long long)arg1 ;
-(void)setAppLibraryVisualConfiguration:(SBHAppLibraryVisualConfiguration *)arg1 ;
-(NSString *)description;
-(void)setFolderIconVisualConfiguration:(SBHFolderIconVisualConfiguration *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(SBHFolderIconVisualConfiguration *)folderIconVisualConfiguration;
-(void)setFloatyFolderVisualConfiguration:(SBHFloatyFolderVisualConfiguration *)arg1 ;
-(id)iconLabelVisualConfigurationForContentSizeCategory:(id)arg1 ;
-(unsigned long long)numberOfLandscapeColumns;
-(UIEdgeInsets)landscapeLayoutInsets;
-(void)setNumberOfLandscapeColumns:(unsigned long long)arg1 ;
-(SBHSidebarVisualConfiguration *)sidebarVisualConfiguration;
-(unsigned long long)numberOfPortraitColumns;
-(void)setIconAccessoryVisualConfiguration:(SBHIconAccessoryVisualConfiguration *)arg1 ;
-(void)setPortraitLayoutInsets:(UIEdgeInsets)arg1 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(SBHRootFolderVisualConfiguration *)rootFolderVisualConfiguration;
-(id)succinctDescriptionBuilder;
-(void)setLandscapeLayoutInsets:(UIEdgeInsets)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setListSizeForIconSpacingCalculation:(CGSize)arg1 ;
-(CGSize)listSizeForIconSpacingCalculation;
-(void)setNumberOfPortraitColumns:(unsigned long long)arg1 ;
@end
