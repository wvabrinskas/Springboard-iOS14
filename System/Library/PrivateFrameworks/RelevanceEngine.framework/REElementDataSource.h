/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:18 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/REElementDataSourceProperties.h>

@protocol REElementDataSourceActivityDelegate, REElementDataSourceDelegate;
@class NSString, NSDictionary, NSArray;

@interface REElementDataSource : NSObject <REElementDataSourceProperties> {

	id<REElementDataSourceActivityDelegate> _activityDelegate;
	BOOL _running;
	BOOL _allowsLocationUse;
	BOOL _unlockedSinceBoot;
	id<REElementDataSourceDelegate> _delegate;
	unsigned long long _state;
	NSString* _logHeader;

}

@property (assign,nonatomic,__weak) id<REElementDataSourceDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * supportedSections; 
@property (getter=isRunning,nonatomic,readonly) BOOL running;                                   //@synthesize running=_running - In the implementation block
@property (assign,nonatomic) BOOL allowsLocationUse;                                            //@synthesize allowsLocationUse=_allowsLocationUse - In the implementation block
@property (assign,nonatomic) unsigned long long state;                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * logHeader;                                            //@synthesize logHeader=_logHeader - In the implementation block
@property (getter=hasUnlockedSinceBoot,nonatomic,readonly) BOOL unlockedSinceBoot;              //@synthesize unlockedSinceBoot=_unlockedSinceBoot - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSDictionary * dataSourceProperties; 
+(id)bundleIdentifier;
+(id)applicationBundleIdentifier;
+(id)contentAttributes;
+(BOOL)wantsReloadForSignificantTimeChange;
+(unsigned long long)elementContentMode;
+(BOOL)wantsPrivateQueue;
+(BOOL)drivenByUserInteraction;
+(id)overrideDataSourceImage;
+(id)overrideLocalizedDataSourceName;
+(BOOL)wantsAppPrewarm;
+(BOOL)wantsLocationInUseAsserton;
+(BOOL)supportsPersistence;
+(SCD_Struct_RE2)minimumSupportedSystemVersion;
+(BOOL)wantsReloadForFirstDeviceUnlock;
+(BOOL)wantsAutomaticFetching;
-(void)setRunning:(BOOL)arg1 ;
-(id)init;
-(void)setState:(unsigned long long)arg1 ;
-(id<REElementDataSourceDelegate>)delegate;
-(unsigned long long)state;
-(BOOL)isRunning;
-(void)pause;
-(NSString *)name;
-(void)setDelegate:(id<REElementDataSourceDelegate>)arg1 ;
-(BOOL)hasUnlockedSinceBoot;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(void)resume;
-(id)activityDelegate;
-(void)setActivityDelegate:(id)arg1 ;
-(NSArray *)supportedSections;
-(void)getElementsInSection:(id)arg1 withHandler:(/*^block*/id)arg2 ;
-(id)complicationDescriptor;
-(void)setAllowsLocationUse:(BOOL)arg1 ;
-(void)getElementsDuringDateInterval:(id)arg1 inSection:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)beginActivity:(id)arg1 ;
-(NSString *)logHeader;
-(void)beginFetchingData;
-(void)finishFetchingData;
-(void)loadLoggingHeader;
-(void)finishActivity:(id)arg1 ;
-(NSDictionary *)dataSourceProperties;
-(void)elementWithIdentifierWillBecomeVisible:(id)arg1 ;
-(void)elementWithIdentifierDidBecomeHidden:(id)arg1 ;
-(BOOL)allowsLocationUse;
-(void)collectLoggableState:(/*^block*/id)arg1 ;
@end
