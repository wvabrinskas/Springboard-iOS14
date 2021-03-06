/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 1:45:02 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class SBHIconAccessoryVisualConfiguration, SBHFolderIconVisualConfiguration, SBHFloatyFolderVisualConfiguration, SBHSidebarVisualConfiguration, SBHAppLibraryVisualConfiguration, SBHRootFolderVisualConfiguration;


@protocol SBIconListLayout <NSObject>
@property (nonatomic,readonly) SBIconImageInfo iconImageInfo; 
@property (nonatomic,copy,readonly) SBHIconAccessoryVisualConfiguration * iconAccessoryVisualConfiguration; 
@property (nonatomic,copy,readonly) SBHFolderIconVisualConfiguration * folderIconVisualConfiguration; 
@property (nonatomic,copy,readonly) SBHFloatyFolderVisualConfiguration * floatyFolderVisualConfiguration; 
@property (nonatomic,copy,readonly) SBHSidebarVisualConfiguration * sidebarVisualConfiguration; 
@property (nonatomic,copy,readonly) SBHAppLibraryVisualConfiguration * appLibraryVisualConfiguration; 
@property (nonatomic,copy,readonly) SBHRootFolderVisualConfiguration * rootFolderVisualConfiguration; 
@property (nonatomic,readonly) SBHIconGridSizeClassSizes iconGridSizeClassSizes; 
@property (nonatomic,readonly) unsigned long long supportedIconGridSizeClasses; 
@property (nonatomic,readonly) BOOL usesAlternateLayout; 
@optional
-(SBIconImageInfo*)iconImageInfoForGridSizeClass:(unsigned long long)arg1;
-(SBHFloatyFolderVisualConfiguration *)floatyFolderVisualConfiguration;
-(BOOL)usesAlternateLayout;
-(SBHAppLibraryVisualConfiguration *)appLibraryVisualConfiguration;
-(void)noteIcons:(id)arg1 didDropAtCoordinate:(SBIconCoordinate)arg2 inList:(id)arg3;
-(unsigned long long)supportedIconGridSizeClasses;
-(SBHIconGridSizeClassSizes)iconGridSizeClassSizes;
-(SBHIconAccessoryVisualConfiguration *)iconAccessoryVisualConfiguration;
-(SBHFolderIconVisualConfiguration *)folderIconVisualConfiguration;
-(id)labelVisualConfigurationForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2;
-(CGSize*)iconSpacingForOrientation:(long long)arg1;
-(SBHSidebarVisualConfiguration *)sidebarVisualConfiguration;
-(id)accessoryFontForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2;
-(id)labelFontForContentSizeCategory:(id)arg1 options:(unsigned long long)arg2;
-(SBHRootFolderVisualConfiguration *)rootFolderVisualConfiguration;

@required
-(UIEdgeInsets*)layoutInsetsForOrientation:(long long)arg1;
-(SBIconImageInfo)iconImageInfo;
-(unsigned long long)numberOfColumnsForOrientation:(long long)arg1;
-(unsigned long long)numberOfRowsForOrientation:(long long)arg1;

@end

