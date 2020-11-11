/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:51 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXGadgetDataSourceManager.h>
#import <libobjc.A.dylib/PXSettingsKeyObserver.h>
#import <libobjc.A.dylib/PUSearchZeroKeywordChangeDelegate.h>

@class NSArray, PUSearchZeroKeywordDataSource, PXTapToRadarGadgetProvider, NSString;

@interface PUSearchHomeGadgetDataSourceManager : PXGadgetDataSourceManager <PXSettingsKeyObserver, PUSearchZeroKeywordChangeDelegate> {

	NSArray* _gadgetProviders;
	PUSearchZeroKeywordDataSource* _zeroKeywordDataSource;
	NSArray* _zeroKeywordGadgetProviders;
	PXTapToRadarGadgetProvider* _tapToRadarProvider;
	long long _filteringState;

}

@property (nonatomic,readonly) PUSearchZeroKeywordDataSource * zeroKeywordDataSource;              //@synthesize zeroKeywordDataSource=_zeroKeywordDataSource - In the implementation block
@property (nonatomic,retain) NSArray * zeroKeywordGadgetProviders;                                 //@synthesize zeroKeywordGadgetProviders=_zeroKeywordGadgetProviders - In the implementation block
@property (nonatomic,retain) PXTapToRadarGadgetProvider * tapToRadarProvider;                      //@synthesize tapToRadarProvider=_tapToRadarProvider - In the implementation block
@property (assign,nonatomic) long long filteringState;                                             //@synthesize filteringState=_filteringState - In the implementation block
@property (nonatomic,readonly) BOOL isExpectedToLoadNonEmptyDataSourceSoon; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)isExpectedToLoadNonEmptyDataSourceSoon;
-(void)_waitForFirstDisplayTimedOut;
-(void)ppt_prepareZeroKeywordRequest:(/*^block*/id)arg1 ;
-(PXTapToRadarGadgetProvider *)tapToRadarProvider;
-(BOOL)_zeroKeywordDataSourceHasZeroKeywords;
-(id)gadgetProviders;
-(void)setZeroKeywordGadgetProviders:(NSArray *)arg1 ;
-(PUSearchZeroKeywordDataSource *)zeroKeywordDataSource;
-(void)setTapToRadarProvider:(PXTapToRadarGadgetProvider *)arg1 ;
-(void)setFilteringState:(long long)arg1 ;
-(id)hiddenGadgetProviders;
-(void)refreshData;
-(NSArray *)zeroKeywordGadgetProviders;
-(void)didUpdateSections:(id)arg1 ;
-(long long)filteringState;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
@end
