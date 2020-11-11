/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:57 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Health/Plugins/ActivityAchievementsPlugin.bundle/ActivityAchievementsPlugin
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/HDPlugin.h>
#import <libobjc.A.dylib/HDDatabaseSchemaProvider.h>
#import <libobjc.A.dylib/HDSyncEntityProvider.h>
#import <libobjc.A.dylib/HDTaskServerClassProvider.h>

@class NSString;

@interface ACHAchievementsPlugin : NSObject <HDPlugin, HDDatabaseSchemaProvider, HDSyncEntityProvider, HDTaskServerClassProvider>

@property (nonatomic,copy,readonly) NSString * pluginIdentifier; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * schemaName; 
@property (nonatomic,copy,readonly) NSString * syncSchemaIdentifier; 
-(NSString *)pluginIdentifier;
-(void)_addDropSyncAnchorSaveOffTableIfNecessaryToMigrator:(id)arg1 ;
-(id)extensionForHealthDaemon:(id)arg1 ;
-(NSString *)syncSchemaIdentifier;
-(void)_addGraceExpressionColumnsMigrationToMigrator:(id)arg1 ;
-(void)_addGracePredicateColumnsMigrationToMigrator:(id)arg1 ;
-(NSString *)schemaName;
-(id)databaseEntitiesForProtectionClass:(long long)arg1 ;
-(void)_addResetSyncAnchorsMigrationStepToMigrator:(id)arg1 ;
-(void)_addSyncAnchorSaveOffMigrationStepToMigrator:(id)arg1 ;
-(id)extensionForProfile:(id)arg1 ;
-(long long)currentSchemaVersionForProtectionClass:(long long)arg1 ;
-(id)taskServerClasses;
-(void)registerMigrationStepsForProtectionClass:(long long)arg1 migrator:(id)arg2 ;
-(void)_addValidateEarnedInstanceRowStepToMigrator:(id)arg1 ;
-(void)_addAddSuffixesColumnMigrationToMigrator:(id)arg1 ;
-(id)orderedSyncEntities;
-(void)_addAddAvailableCountryCodesColumnMigrationToMigrator:(id)arg1 ;
-(void)_addVersion5MigratorToMigrator:(id)arg1 ;
@end
