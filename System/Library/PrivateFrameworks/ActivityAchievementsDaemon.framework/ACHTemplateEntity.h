/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:44:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ActivityAchievementsDaemon.framework/ActivityAchievementsDaemon
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ActivityAchievementsDaemon/ActivityAchievementsDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>
#import <libobjc.A.dylib/HDSyncEntity.h>
#import <libobjc.A.dylib/HDNanoSyncEntity.h>

@class NSString;

@interface ACHTemplateEntity : HDHealthEntity <HDSyncEntity, HDNanoSyncEntity>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)databaseTable;
+(const SCD_Struct_AC0*)columnDefinitionsWithCount:(unsigned long long*)arg1 ;
+(id)syncEntityIdentifier;
+(id)propertyForSyncProvenance;
+(long long)protectionClass;
+(unsigned long long)supportedNanoSyncDirectionsForProtocolVersion:(int)arg1 ;
+(id)syncEntityDependenciesForSyncProtocolVersion:(int)arg1 ;
+(BOOL)generateSyncObjectsForSession:(id)arg1 syncAnchorRange:(HDSyncAnchorRange)arg2 profile:(id)arg3 messageHandler:(id)arg4 error:(id*)arg5 ;
+(long long)receiveSyncObjects:(id)arg1 syncStore:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)createTableSQL;
+(BOOL)supportsSyncStore:(id)arg1 ;
+(id)decodeSyncObjectWithData:(id)arg1 ;
+(long long)nextSyncAnchorWithSession:(id)arg1 predicate:(id)arg2 startSyncAnchor:(long long)arg3 profile:(id)arg4 error:(id*)arg5 ;
+(id)entityEncoderForProfile:(id)arg1 database:(id)arg2 purpose:(long long)arg3 encodingOptions:(id)arg4 authorizationFilter:(/*^block*/id)arg5 ;
+(void)setSyncedTemplatesObserver:(id)arg1 ;
+(BOOL)insertTemplates:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 databaseContext:(id)arg4 error:(id*)arg5 ;
+(BOOL)removeTemplates:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)allTemplatesWithProfile:(id)arg1 error:(id*)arg2 ;
+(id)syncedTemplatesObserver;
+(BOOL)_insertTemplates:(id)arg1 provenance:(long long)arg2 profile:(id)arg3 databaseContext:(id)arg4 error:(id*)arg5 ;
+(BOOL)_removeTemplates:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_templatesWithPredicate:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)_insertTemplate:(id)arg1 provenance:(long long)arg2 database:(id)arg3 error:(id*)arg4 ;
+(id)codableTemplateForTemplateInDatabase:(id)arg1 profile:(id)arg2 error:(id*)arg3 ;
@end

