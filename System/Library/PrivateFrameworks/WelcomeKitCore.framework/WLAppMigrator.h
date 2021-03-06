/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:09 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/WLDataclassMigrating.h>

@class WLSourceDevice, WLSQLController, NSString;

@interface WLAppMigrator : NSObject <WLDataclassMigrating> {

	WLSourceDevice* _device;
	WLSQLController* _sqlController;

}

@property (nonatomic,retain) WLSourceDevice * device;                      //@synthesize device=_device - In the implementation block
@property (nonatomic,retain) WLSQLController * sqlController;              //@synthesize sqlController=_sqlController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)dataType;
+(id)contentType;
+(void)installMigratableApps:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)_sendStoreDownloadRequestForFreeMigratableApps:(id)arg1 completion:(/*^block*/id)arg2 ;
+(id)_ssItemForiTunesStoreIdentifier:(id)arg1 ;
-(id)dataType;
-(WLSourceDevice *)device;
-(void)setDevice:(WLSourceDevice *)arg1 ;
-(id)contentType;
-(WLSQLController *)sqlController;
-(void)setSqlController:(WLSQLController *)arg1 ;
-(BOOL)accountBased;
-(void)importDataFromProvider:(/*^block*/id)arg1 forSummaries:(id)arg2 summaryStart:(/*^block*/id)arg3 summaryCompletion:(/*^block*/id)arg4 ;
-(BOOL)storeRecordDataInDatabase;
-(BOOL)wantsSegmentedDownloads;
-(void)estimateItemSizeForSummary:(id)arg1 account:(id)arg2 ;
-(id)initWithDevice:(id)arg1 sqlController:(id)arg2 ;
-(void)_lookupStoreItemsMatchingExternalIDs:(id)arg1 attempt:(unsigned long long)arg2 completion:(/*^block*/id)arg3 ;
-(void)_insertMatchingApps:(id)arg1 ;
@end

