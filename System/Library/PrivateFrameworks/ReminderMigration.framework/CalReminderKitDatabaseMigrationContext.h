/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:20 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ReminderMigration.framework/ReminderMigration
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class REMStore;


@protocol CalReminderKitDatabaseMigrationContext <NSObject>
@property (nonatomic,readonly) REMStore * reminderStore; 
@property (nonatomic,readonly) BOOL shouldPerformMigration; 
@property (nonatomic,readonly) BOOL shouldDeleteMigratedData; 
@required
-(BOOL)shouldPerformMigration;
-(void)recordMigrationFailure:(id)arg1;
-(void)willBeginMigration;
-(REMStore *)reminderStore;
-(void)didEndMigrationWithSuccess:(BOOL)arg1;
-(BOOL)shouldDeleteMigratedData;
-(BOOL)ensureAccountsExist:(id)arg1 error:(id*)arg2;

@end

