/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:49 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/PLDiagnosticsAgent.h>

@interface PUPhotosDiagnosticsAgent : NSObject <PLDiagnosticsAgent>
+(id)localDiagnosticsAgent;
-(void)captureDescriptionOfPhotoAnalysisWithResultHandler:(/*^block*/id)arg1 ;
-(id)_viewControllerHierarchyDescription;
-(void)captureDescriptionOfCloudPhotoLibraryWithResultHandler:(/*^block*/id)arg1 ;
-(id)_currentAssetDetailedDescription;
-(id)__currentTimestamp;
-(id)_currentAssetViewModelDescription;
-(id)_currentAssetMetadata;
-(void)dumpState:(long long)arg1 toDirectoryURL:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(void)timelineForWidgetSize:(id)arg1 resultHandler:(/*^block*/id)arg2 ;
-(id)_descriptionForAllUIState;
-(id)_descriptionOfUIState:(long long)arg1 ;
-(id)_currentAssetIdentifierDescription;
-(void)_captureCurrentAssetResourcesToDirectory:(id)arg1 withResultHandler:(/*^block*/id)arg2 ;
-(id)_viewModelDescription;
-(id)_windowRecursiveDescription;
-(id)_currentAsset;
-(void)captureDescriptionOfUIState:(long long)arg1 resultHandler:(/*^block*/id)arg2 ;
-(void)captureDescriptionOfStatisticsWithResultHandler:(/*^block*/id)arg1 ;
@end

