/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:43 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIViewController.h>

@protocol BPSWatchMigrationControllerDelegate;
@class BPSRemoteWatchView, BPSMultipleWatchMigrationView, NSString, NSArray;

@interface BPSWatchMigrationController : UIViewController {

	BOOL _iTunes;
	id<BPSWatchMigrationControllerDelegate> _migrationDelegate;
	BPSRemoteWatchView* _watchView;
	BPSMultipleWatchMigrationView* _multipleWatchView;
	NSString* _sourceDeviceName;
	NSArray* _migratableDevices;

}

@property (nonatomic,retain) BPSRemoteWatchView * watchView;                                                //@synthesize watchView=_watchView - In the implementation block
@property (nonatomic,retain) BPSMultipleWatchMigrationView * multipleWatchView;                             //@synthesize multipleWatchView=_multipleWatchView - In the implementation block
@property (nonatomic,retain) NSString * sourceDeviceName;                                                   //@synthesize sourceDeviceName=_sourceDeviceName - In the implementation block
@property (nonatomic,retain) NSArray * migratableDevices;                                                   //@synthesize migratableDevices=_migratableDevices - In the implementation block
@property (assign,nonatomic) BOOL iTunes;                                                                   //@synthesize iTunes=_iTunes - In the implementation block
@property (assign,nonatomic,__weak) id<BPSWatchMigrationControllerDelegate> migrationDelegate;              //@synthesize migrationDelegate=_migrationDelegate - In the implementation block
-(NSArray *)migratableDevices;
-(id)initWithSnapshot:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)iTunes;
-(void)loadView;
-(BPSRemoteWatchView *)watchView;
-(void)setWatchView:(BPSRemoteWatchView *)arg1 ;
-(id)initWithSourceDeviceName:(id)arg1 ;
-(void)_notifyDelegateShouldMigrateWithData:(id)arg1 ;
-(void)_saveMigrationPreference:(BOOL)arg1 ;
-(void)setMigratableDevices:(NSArray *)arg1 ;
-(id<BPSWatchMigrationControllerDelegate>)migrationDelegate;
-(BOOL)shouldBeDisplayedGivenMigrationData:(id)arg1 ;
-(void)setMigrationDelegate:(id<BPSWatchMigrationControllerDelegate>)arg1 ;
-(BPSMultipleWatchMigrationView *)multipleWatchView;
-(void)setMultipleWatchView:(BPSMultipleWatchMigrationView *)arg1 ;
-(NSString *)sourceDeviceName;
-(void)setSourceDeviceName:(NSString *)arg1 ;
-(void)setITunes:(BOOL)arg1 ;
@end
