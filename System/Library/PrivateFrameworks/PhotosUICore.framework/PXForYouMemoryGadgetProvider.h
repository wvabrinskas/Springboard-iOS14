/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:38:07 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUICore/PXGadgetProvider.h>
#import <libobjc.A.dylib/PXSectionedDataSourceManagerObserver.h>
#import <libobjc.A.dylib/PXForYouRankable.h>

@class PXMemoriesFeedWidgetDataSourceManager, NSDate, NSString;

@interface PXForYouMemoryGadgetProvider : PXGadgetProvider <PXSectionedDataSourceManagerObserver, PXForYouRankable> {

	BOOL _hasGeneratedGadgets;
	PXMemoriesFeedWidgetDataSourceManager* _dataSourceManager;
	NSDate* _cachedPriorityDate;

}

@property (nonatomic,retain) PXMemoriesFeedWidgetDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (assign,nonatomic) BOOL hasGeneratedGadgets;                                               //@synthesize hasGeneratedGadgets=_hasGeneratedGadgets - In the implementation block
@property (nonatomic,retain) NSDate * cachedPriorityDate;                                            //@synthesize cachedPriorityDate=_cachedPriorityDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSDate * priorityDate; 
@property (nonatomic,readonly) long long defaultPriority; 
@property (nonatomic,readonly) long long priorityType; 
@property (nonatomic,readonly) unsigned long long gadgetType; 
+(unsigned long long)maxMemoriesToFetch;
-(PXMemoriesFeedWidgetDataSourceManager *)dataSourceManager;
-(unsigned long long)gadgetType;
-(void)loadDataForGadgets;
-(void)setHasGeneratedGadgets:(BOOL)arg1 ;
-(NSDate *)priorityDate;
-(long long)priorityType;
-(void)resetPriorityDate;
-(long long)defaultPriority;
-(NSDate *)cachedPriorityDate;
-(void)setCachedPriorityDate:(NSDate *)arg1 ;
-(void)generateGadgets;
-(BOOL)supportsDynamicRanking;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
-(unsigned long long)estimatedNumberOfGadgets;
-(void)setDataSourceManager:(PXMemoriesFeedWidgetDataSourceManager *)arg1 ;
-(BOOL)hasGeneratedGadgets;
@end

